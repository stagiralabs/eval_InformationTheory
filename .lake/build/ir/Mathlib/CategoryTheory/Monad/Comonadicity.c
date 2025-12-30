// Lean compiler output
// Module: Mathlib.CategoryTheory.Monad.Comonadicity
// Imports: Init Mathlib.CategoryTheory.Limits.Preserves.Shapes.Equalizers Mathlib.CategoryTheory.Limits.Shapes.Reflexive Mathlib.CategoryTheory.Monad.Equalizer Mathlib.CategoryTheory.Monad.Limits
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
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = l_CategoryTheory_Functor_id___rarg(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_6);
x_11 = lean_apply_1(x_10, x_6);
lean_inc(x_8);
lean_inc(x_11);
x_12 = lean_apply_1(x_8, x_11);
lean_inc(x_7);
lean_inc(x_12);
x_13 = lean_apply_1(x_7, x_12);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_2, lean_box(0), x_1, x_3, x_4);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_6);
x_16 = lean_apply_1(x_15, x_6);
lean_inc(x_8);
lean_inc(x_16);
x_17 = lean_apply_1(x_8, x_16);
lean_inc(x_7);
lean_inc(x_17);
x_18 = lean_apply_1(x_7, x_17);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_ctor_get(x_5, 0);
lean_inc(x_21);
lean_dec(x_5);
lean_inc(x_21);
lean_inc(x_6);
x_22 = lean_apply_1(x_21, x_6);
lean_inc(x_22);
lean_inc(x_11);
x_23 = lean_apply_3(x_20, x_11, x_16, x_22);
x_24 = lean_apply_3(x_19, x_12, x_17, x_23);
x_25 = lean_apply_1(x_8, x_6);
x_26 = lean_apply_1(x_7, x_25);
x_27 = lean_apply_1(x_21, x_26);
x_28 = l_CategoryTheory_Limits_Fork_of_u03b9___rarg(x_1, x_13, x_18, x_24, x_27, x_11, x_22, lean_box(0));
return x_28;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Comonad_ComonadicityInternal_unitFork___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Comonad_comonadicOfHasPreservesReflectsFSplitEqualizers___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_6, x_1, x_2, x_3, x_4, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair___rarg), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairOfIsCosplitPairOfCreatesLimitOfIsCosplitPair(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_9);
x_10 = lean_apply_1(x_8, x_9);
lean_inc(x_4);
x_11 = l_CategoryTheory_Functor_comp___rarg(x_2, lean_box(0), x_1, lean_box(0), x_2, x_4, x_3);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_9);
x_13 = lean_apply_1(x_12, x_9);
lean_inc(x_13);
x_14 = lean_apply_1(x_8, x_13);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_apply_3(x_15, x_9, x_13, x_16);
x_18 = lean_ctor_get(x_5, 0);
lean_inc(x_18);
lean_dec(x_5);
lean_inc(x_10);
x_19 = lean_apply_1(x_18, x_10);
x_20 = lean_apply_5(x_6, x_10, x_14, x_17, x_19, lean_box(0));
return x_20;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Comonad_instCreatesLimitWalkingParallelPairParallelPairMapAAppUnitObjAOfCreatesLimitOfIsCosplitPair___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Comonad_comonadicOfCreatesFSplitEqualizers___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Comonad_comonadicOfHasPreservesFSplitEqualizersOfReflectsIsomorphisms___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Comonad_comonadicOfHasPreservesCoreflexiveEqualizersOfReflectsIsomorphisms___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Equalizers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Reflexive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Equalizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Limits(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monad_Comonadicity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Equalizers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Reflexive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Equalizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
