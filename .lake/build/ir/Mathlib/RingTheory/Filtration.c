// Lean compiler output
// Module: Mathlib.RingTheory.Filtration
// Imports: Init Mathlib.Algebra.Polynomial.Module.Basic Mathlib.Algebra.Ring.Idempotent Mathlib.Order.Basic Mathlib.Order.Hom.Lattice Mathlib.RingTheory.Finiteness.Nakayama Mathlib.RingTheory.LocalRing.MaximalIdeal.Basic Mathlib.RingTheory.Noetherian.Orzech Mathlib.RingTheory.ReesAlgebra
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
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot(lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubmonoid_smul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_stableFiltration___elambda__1___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
static lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10(lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ideal_Filtration_instCompleteLattice___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_stableFiltration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_stableFiltration___elambda__1___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_trivialFiltration___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_trivialFiltration___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_trivialFiltration___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_trivialFiltration___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_Filtration_instMax___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_Filtration_instMax___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMax___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instMax(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Ideal_Filtration_instSupSet___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg(x_2, x_3, x_4, lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_instSupSet___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iSup___at_Ideal_Filtration_instSupSet___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_Filtration_instSupSet___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iSup___at_Ideal_Filtration_instSupSet___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instSupSet___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_Filtration_instSupSet___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_Filtration_instMin___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_Filtration_instMin___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instMin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instMin(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Ideal_Filtration_instSupSet___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg(x_2, x_3, x_4, lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_instInfSet___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iInf___at_Ideal_Filtration_instInfSet___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Ideal_Filtration_instInfSet___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Ideal_Filtration_instInfSet___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInfSet___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_Filtration_instInfSet___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_Filtration_instTop___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instTop___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instTop(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_Filtration_instBot___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instBot___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instBot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instBot(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
static lean_object* _init_l_Ideal_Filtration_instCompleteLattice___rarg___closed__1() {
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
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Ideal_Filtration_instSupSet___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Ideal_Filtration_instInfSet___rarg___boxed), 6, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
x_7 = l_Ideal_Filtration_instCompleteLattice___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_8, 0, x_2);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_12, 0, x_11);
lean_inc(x_12);
x_13 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_5);
lean_ctor_set(x_13, 2, x_6);
lean_ctor_set(x_13, 3, x_12);
lean_ctor_set(x_13, 4, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_instCompleteLattice___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ideal_Filtration_instCompleteLattice___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_alloc_closure((void*)(l_Ideal_trivialFiltration___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_Filtration_instInhabited___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instInhabited___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_Filtration_instInhabited(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_stableFiltration___elambda__1___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_6 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_5);
x_7 = l_MulZeroOneClass_toMulZeroClass___rarg(x_6);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_9, x_8, x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_4 = l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg(x_1, lean_box(0), x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg(x_1, x_2, lean_box(0), x_2, lean_box(0), x_5, x_6);
lean_dec(x_6);
x_8 = l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg(x_1, x_7, lean_box(0), lean_box(0));
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toModule___rarg(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_2, x_8);
lean_inc(x_3);
x_10 = l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg(x_1, x_9, x_3);
lean_dec(x_9);
x_11 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_13);
x_14 = l_AddSubmonoid_smul___elambda__1___rarg(x_13, x_13, x_5, x_10, x_3);
lean_dec(x_10);
lean_dec(x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_3);
x_15 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
x_16 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_1);
x_18 = l_LinearMap_toSpanSingleton___at_Ideal_stableFiltration___elambda__1___spec__3___rarg(x_1, x_17);
x_19 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_20 = l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg(x_1, x_19, lean_box(0), lean_box(0), x_18);
lean_dec(x_18);
lean_dec(x_19);
lean_dec(x_1);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg(x_1, x_6, x_4);
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_7);
lean_dec(x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_AddSubmonoid_smul___elambda__1___rarg(x_8, x_12, x_3, x_9, x_5);
lean_dec(x_9);
lean_dec(x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_stableFiltration___elambda__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Ideal_stableFiltration___elambda__1___rarg___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_stableFiltration(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_stableFiltration___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_stableFiltration___elambda__1___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_id___at_Ideal_stableFiltration___elambda__1___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_smulRight___at_Ideal_stableFiltration___elambda__1___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_map___at_Ideal_stableFiltration___elambda__1___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_copy___at_Ideal_stableFiltration___elambda__1___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_range___at_Ideal_stableFiltration___elambda__1___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowRec___at_Ideal_stableFiltration___elambda__1___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_stableFiltration___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_stableFiltration___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_submodule___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submodule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_Filtration_submodule___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_Filtration_submodule___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Filtration_submoduleInfHom___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_Filtration_submoduleInfHom___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Module_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Idempotent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Nakayama(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Orzech(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_ReesAlgebra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Filtration(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Module_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Idempotent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Nakayama(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Orzech(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_ReesAlgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Ideal_Filtration_instCompleteLattice___rarg___closed__1 = _init_l_Ideal_Filtration_instCompleteLattice___rarg___closed__1();
lean_mark_persistent(l_Ideal_Filtration_instCompleteLattice___rarg___closed__1);
l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1 = _init_l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Ideal_stableFiltration___elambda__1___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
