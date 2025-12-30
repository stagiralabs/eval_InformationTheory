// Lean compiler output
// Module: Mathlib.Topology.Algebra.Monoid
// Imports: Init Mathlib.Algebra.BigOperators.Finprod Mathlib.Order.Filter.Pointwise Mathlib.Topology.Algebra.MulAction Mathlib.Algebra.BigOperators.Pi Mathlib.Algebra.Group.ULift Mathlib.Topology.ContinuousMap.Defs Mathlib.Algebra.Group.Submonoid.Basic
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
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMemClass_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfTendsto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfTendsto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfTendsto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfTendsto___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___elambda__1(lean_object*);
lean_object* l_Submonoid_toMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfTendsto___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfTendsto___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfTendsto___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubmonoid_toAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addHomOfTendsto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_MulMemClass_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoidHomOfTendsto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_units(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_addRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_units(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Tendsto_units___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Filter_Tendsto_units___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_units___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Tendsto_units(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Tendsto_addUnits___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Filter_Tendsto_addUnits___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Filter_Tendsto_addUnits___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Tendsto_addUnits(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_mulHomOfMemClosureRangeCoe___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_mulHomOfMemClosureRangeCoe___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulHomOfMemClosureRangeCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_mulHomOfMemClosureRangeCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_addHomOfMemClosureRangeCoe___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_addHomOfMemClosureRangeCoe___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addHomOfMemClosureRangeCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_addHomOfMemClosureRangeCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_mulHomOfTendsto___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_mulHomOfTendsto(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_mulHomOfTendsto___rarg___boxed), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_mulHomOfTendsto___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_mulHomOfTendsto___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_mulHomOfTendsto___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_mulHomOfTendsto(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_addHomOfTendsto___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_addHomOfTendsto(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_addHomOfTendsto___rarg___boxed), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_addHomOfTendsto___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_addHomOfTendsto___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addHomOfTendsto___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_addHomOfTendsto(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_monoidHomOfMemClosureRangeCoe___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_monoidHomOfMemClosureRangeCoe___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfMemClosureRangeCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_monoidHomOfMemClosureRangeCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_addMonoidHomOfMemClosureRangeCoe___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_addMonoidHomOfMemClosureRangeCoe___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfMemClosureRangeCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_addMonoidHomOfMemClosureRangeCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfTendsto(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_monoidHomOfTendsto___rarg___boxed), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_monoidHomOfTendsto___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_monoidHomOfTendsto___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_monoidHomOfTendsto(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_addMonoidHomOfTendsto___rarg___boxed), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_addMonoidHomOfTendsto___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addMonoidHomOfTendsto___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_addMonoidHomOfTendsto(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subsemigroup_topologicalClosure___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemigroup_topologicalClosure___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_topologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemigroup_topologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubsemigroup_topologicalClosure___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubsemigroup_topologicalClosure___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_topologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubsemigroup_topologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
x_8 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subsemigroup_commSemigroupTopologicalClosure___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subsemigroup_commSemigroupTopologicalClosure___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_commSemigroupTopologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemigroup_commSemigroupTopologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
x_8 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubsemigroup_addCommSemigroupTopologicalClosure___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_addCommSemigroupTopologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubsemigroup_addCommSemigroupTopologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_topologicalClosure___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_topologicalClosure___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_topologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_topologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_topologicalClosure___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_topologicalClosure___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_topologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_topologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Submonoid_topologicalClosure___rarg(x_1, lean_box(0), x_4);
x_7 = l_Submonoid_toMonoid___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_commMonoidTopologicalClosure___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submonoid_commMonoidTopologicalClosure___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submonoid_commMonoidTopologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_commMonoidTopologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_AddSubmonoid_topologicalClosure___rarg(x_1, lean_box(0), x_4);
x_7 = l_AddSubmonoid_toAddMonoid___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubmonoid_addCommMonoidTopologicalClosure___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_addCommMonoidTopologicalClosure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_addCommMonoidTopologicalClosure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_mulRight___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_mulRight___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_mulRight___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_mulRight(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_addRight___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_addRight___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_addRight___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_addRight(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_mulLeft___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_mulLeft___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_mulLeft___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_mulLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_mulLeft(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_addLeft___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_addLeft___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_addLeft___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_addLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_addLeft(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finprod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_MulAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Monoid(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finprod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_MulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
