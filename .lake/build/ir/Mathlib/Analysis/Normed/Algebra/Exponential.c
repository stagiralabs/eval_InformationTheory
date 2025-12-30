// Lean compiler output
// Module: Mathlib.Analysis.Normed.Algebra.Exponential
// Imports: Init Mathlib.Algebra.Ring.Action.ConjAct Mathlib.Analysis.Analytic.ChangeOrigin Mathlib.Analysis.Complex.Basic Mathlib.Data.Nat.Choose.Cast Mathlib.Analysis.Analytic.OfScalars Mathlib.Analysis.SpecificLimits.RCLike
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
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_factorial(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NormedSpace_expSeries___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed), 5, 4);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg(x_2, x_3, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed), 5, 4);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg(x_2, x_3, x_4);
x_9 = lean_apply_1(x_8, x_7);
x_10 = lean_apply_2(x_5, x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = l_Field_toSemifield___rarg(x_1);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = l_Semifield_toCommGroupWithZero___rarg(x_7);
x_10 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_9);
x_11 = l_DivInvOneMonoid_toInvOneClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_1);
x_13 = l_Field_toDivisionRing___rarg(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Ring_toAddGroupWithOne___rarg(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Nat_factorial(x_6);
x_19 = lean_apply_1(x_17, x_18);
x_20 = lean_apply_1(x_12, x_19);
x_21 = lean_alloc_closure((void*)(l_NormedSpace_expSeries___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_6);
lean_closure_set(x_21, 4, x_8);
lean_closure_set(x_21, 5, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NormedSpace_expSeries___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NormedSpace_expSeries___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ContinuousMultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_NormedSpace_expSeries___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_NormedSpace_expSeries___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NormedSpace_expSeries___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_NormedSpace_expSeries___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_ConjAct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_ChangeOrigin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Cast(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_OfScalars(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecificLimits_RCLike(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Algebra_Exponential(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_ConjAct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_ChangeOrigin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Cast(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_OfScalars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecificLimits_RCLike(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
