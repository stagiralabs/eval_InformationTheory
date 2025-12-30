// Lean compiler output
// Module: Mathlib.Topology.Algebra.Valued.NormedValued
// Imports: Init Mathlib.Analysis.Normed.Field.Basic Mathlib.Analysis.Normed.Group.Ultra Mathlib.RingTheory.Valuation.RankOne Mathlib.Topology.Algebra.Valued.ValuationTopology
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
lean_object* l_SeminormedAddGroup_toNNNorm___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalSeminormedRing_toSeminormedAddCommGroup___rarg(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNormedField(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField(lean_object*);
LEAN_EXPORT lean_object* l_NormedField_valuation___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_NormedField_instRankOneNNRealValuation___closed__1;
LEAN_EXPORT lean_object* l_Valued_norm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_NormedField_instRankOneNNRealValuation(lean_object*, lean_object*, lean_object*);
lean_object* l_SeminormedCommRing_toNonUnitalSeminormedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedField_valuation(lean_object*);
LEAN_EXPORT lean_object* l_NormedField_instRankOneNNRealValuation___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_norm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_norm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedCommRing_toSeminormedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedField_toNormedCommRing___rarg(lean_object*);
lean_object* l_SeminormedAddCommGroup_toSeminormedAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NormedField_valuation___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_NormedField_toNormedCommRing___rarg(x_1);
x_4 = l_NormedCommRing_toSeminormedCommRing___rarg(x_3);
x_5 = l_SeminormedCommRing_toNonUnitalSeminormedCommRing___rarg(x_4);
x_6 = l_NonUnitalSeminormedRing_toSeminormedAddCommGroup___rarg(x_5);
x_7 = l_SeminormedAddCommGroup_toSeminormedAddGroup___rarg(x_6);
x_8 = lean_alloc_closure((void*)(l_SeminormedAddGroup_toNNNorm___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NormedField_valuation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NormedField_valuation___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_NormedField_instRankOneNNRealValuation___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_NormedField_instRankOneNNRealValuation(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NormedField_instRankOneNNRealValuation___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidWithZeroHom_id___at_NormedField_instRankOneNNRealValuation___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NormedField_instRankOneNNRealValuation___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NormedField_instRankOneNNRealValuation(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Valued_norm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Valued_norm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Valued_norm___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Valued_norm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Valued_norm(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = l_Field_toDivisionRing___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_7);
x_9 = l_AddGroupWithOne_toAddGroup___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, x_4, x_5);
x_12 = l_Valued_norm___rarg(x_2, x_3, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = l_Field_toDivisionRing___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_7);
x_9 = l_AddGroupWithOne_toAddGroup___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, x_4, x_5);
x_12 = l_Valued_norm___rarg(x_2, x_3, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_Valued_norm___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Valued_toNormedField___rarg___lambda__1), 5, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_5);
lean_inc(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Valued_toNormedField___rarg___lambda__2), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Valued_toNormedField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Valued_toNormedField___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Valued_toNormedField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Valued_toNormedField___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Valued_toNormedField___rarg(x_1, lean_box(0), x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Valued_toNontriviallyNormedField___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Valued_toNontriviallyNormedField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Valued_toNontriviallyNormedField___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Ultra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_RankOne(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Valued_ValuationTopology(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Valued_NormedValued(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Ultra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_RankOne(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Valued_ValuationTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_NormedField_instRankOneNNRealValuation___closed__1 = _init_l_NormedField_instRankOneNNRealValuation___closed__1();
lean_mark_persistent(l_NormedField_instRankOneNNRealValuation___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
