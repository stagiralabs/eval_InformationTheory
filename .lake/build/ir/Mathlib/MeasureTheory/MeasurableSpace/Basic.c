// Lean compiler output
// Module: Mathlib.MeasureTheory.MeasurableSpace.Basic
// Imports: Init Mathlib.Data.Finset.Update Mathlib.Data.Int.Cast.Pi Mathlib.Data.Nat.Cast.Basic Mathlib.Data.Prod.TProd Mathlib.Data.Set.UnionLift Mathlib.GroupTheory.Coset.Defs Mathlib.MeasureTheory.MeasurableSpace.Instances Mathlib.Order.Disjointed Mathlib.Order.Filter.AtTopBot.CompleteLattice Mathlib.Order.Filter.AtTopBot.CountablyGenerated Mathlib.Order.Filter.SmallSets Mathlib.Order.LiminfLimsup Mathlib.Tactic.FinCases
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
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instMeasurableSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_comap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_MeasurableSpace_pi___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasurableSet_Subtype_instUnion___closed__1;
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instHasCompl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_instMeasurableSpace(lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instMembership(lean_object*, lean_object*);
static lean_object* l_Sum_instMeasurableSpace___closed__1;
static lean_object* l_Sum_instMeasurableSpace___closed__2;
LEAN_EXPORT lean_object* l_Subtype_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instMeasurableSpace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instUnion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_measurableSpace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_comap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasurableSpace_pi___closed__1;
LEAN_EXPORT lean_object* l_iInf___at_Sigma_instMeasurableSpace___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasurableSet_Subtype_instSingleton___closed__1;
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Sum_instMeasurableSpace___closed__3;
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Sigma_instMeasurableSpace___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_instMeasurableSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_pi(lean_object*, lean_object*, lean_object*);
lean_object* l_MeasurableSpace_instCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_measurableSpace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instMeasurableSpace___boxed(lean_object*, lean_object*);
extern lean_object* l_PUnit_instMeasurableSpace;
LEAN_EXPORT lean_object* l_Subtype_instMeasurableSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instEmptyCollection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSingleton(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instHasCompl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instEmptyCollection___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_measurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_instMeasurableSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_MeasurableSpace_pi___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSingleton___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instUnion(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSup(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_MeasurableSpace_prod___spec__1;
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Singleton_singleton____x40_Mathlib_Data_Set_Operations___hyg_22____rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instMeasurableSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instMembership___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSDiff(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_measurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMeasurableSpace(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasurableSet_Subtype_instHasCompl___closed__1;
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasurableSpace_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSpace_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_comap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_comap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSpace_comap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_instMeasurableSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ULift_instMeasurableSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quot_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quot_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quot_instMeasurableSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quotient_instMeasurableSpace(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_measurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_measurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_measurableSpace(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_measurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_measurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_measurableSpace(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subtype_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subtype_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subtype_instMeasurableSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_MeasurableSpace_prod___spec__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSpace_prod(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_instMeasurableSpace(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_MeasurableSpace_pi___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_MeasurableSpace_pi___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasurableSpace_pi___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iSup___at_MeasurableSpace_pi___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iSup___at_MeasurableSpace_pi___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasurableSpace_pi___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasurableSpace_pi___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSpace_pi(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_PUnit_instMeasurableSpace;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TProd_instMeasurableSpace___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TProd_instMeasurableSpace___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TProd_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TProd_instMeasurableSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Sum_instMeasurableSpace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MeasurableSpace_instCompleteLattice(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Sum_instMeasurableSpace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Sum_instMeasurableSpace___closed__1;
x_2 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Sum_instMeasurableSpace___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Sum_instMeasurableSpace___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_box(0);
x_4 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_3, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sum_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_instMeasurableSpace___closed__3;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_instMeasurableSpace(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Sigma_instMeasurableSpace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Sigma_instMeasurableSpace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Sigma_instMeasurableSpace___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sigma_instMeasurableSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_instMeasurableSpace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instMembership(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instMembership___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasurableSet_Subtype_instMembership(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instEmptyCollection(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instEmptyCollection___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasurableSet_Subtype_instEmptyCollection(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasurableSet_Subtype_instInsert___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasurableSet_Subtype_instInsert___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInsert___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSet_Subtype_instInsert(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_MeasurableSet_Subtype_instSingleton___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Singleton_singleton____x40_Mathlib_Data_Set_Operations___hyg_22____rarg), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSingleton(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSet_Subtype_instSingleton___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSingleton___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSet_Subtype_instSingleton(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_MeasurableSet_Subtype_instHasCompl___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instHasCompl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSet_Subtype_instHasCompl___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instHasCompl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasurableSet_Subtype_instHasCompl(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_MeasurableSet_Subtype_instUnion___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instUnion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instUnion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instSup(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instInter(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instInf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instInf(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSDiff(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instUnion___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instSDiff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasurableSet_Subtype_instSDiff(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instBot(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasurableSet_Subtype_instBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instTop(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasurableSet_Subtype_instTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasurableSet_Subtype_instTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Update(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Cast_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Prod_TProd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_UnionLift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Coset_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_MeasurableSpace_Instances(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Disjointed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_CompleteLattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_CountablyGenerated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_SmallSets(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_LiminfLimsup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_MeasurableSpace_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Update(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Cast_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Prod_TProd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_UnionLift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Coset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_MeasurableSpace_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Disjointed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_CompleteLattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_CountablyGenerated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_SmallSets(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_LiminfLimsup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_MeasurableSpace_prod___spec__1 = _init_l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_MeasurableSpace_prod___spec__1();
l_MeasurableSpace_pi___closed__1 = _init_l_MeasurableSpace_pi___closed__1();
lean_mark_persistent(l_MeasurableSpace_pi___closed__1);
l_Sum_instMeasurableSpace___closed__1 = _init_l_Sum_instMeasurableSpace___closed__1();
lean_mark_persistent(l_Sum_instMeasurableSpace___closed__1);
l_Sum_instMeasurableSpace___closed__2 = _init_l_Sum_instMeasurableSpace___closed__2();
lean_mark_persistent(l_Sum_instMeasurableSpace___closed__2);
l_Sum_instMeasurableSpace___closed__3 = _init_l_Sum_instMeasurableSpace___closed__3();
lean_mark_persistent(l_Sum_instMeasurableSpace___closed__3);
l_MeasurableSet_Subtype_instSingleton___closed__1 = _init_l_MeasurableSet_Subtype_instSingleton___closed__1();
lean_mark_persistent(l_MeasurableSet_Subtype_instSingleton___closed__1);
l_MeasurableSet_Subtype_instHasCompl___closed__1 = _init_l_MeasurableSet_Subtype_instHasCompl___closed__1();
lean_mark_persistent(l_MeasurableSet_Subtype_instHasCompl___closed__1);
l_MeasurableSet_Subtype_instUnion___closed__1 = _init_l_MeasurableSet_Subtype_instUnion___closed__1();
lean_mark_persistent(l_MeasurableSet_Subtype_instUnion___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
