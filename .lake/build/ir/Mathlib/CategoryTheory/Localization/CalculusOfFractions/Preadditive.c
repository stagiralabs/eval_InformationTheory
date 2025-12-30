// Lean compiler output
// Module: Mathlib.CategoryTheory.Localization.CalculusOfFractions.Preadditive
// Imports: Init Mathlib.CategoryTheory.Localization.CalculusOfFractions.Fractions Mathlib.CategoryTheory.Localization.HasLocalization Mathlib.CategoryTheory.Preadditive.AdditiveFunctor Mathlib.Algebra.Equiv.TransferInstance
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
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg(lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_10 = lean_apply_2(x_2, x_4, x_8);
x_11 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_12, x_9);
lean_ctor_set(x_6, 1, x_13);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get(x_6, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_14);
x_17 = lean_apply_2(x_2, x_4, x_14);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_1(x_19, x_15);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_16);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_MorphismProperty_LeftFraction_neg___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 3);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_7);
x_11 = lean_apply_2(x_2, x_4, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_2(x_13, x_8, x_9);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_15, 2, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_MorphismProperty_LeftFraction_u2082_add___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_11);
x_12 = lean_apply_1(x_11, x_3);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_apply_1(x_11, x_4);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_12);
x_16 = lean_apply_5(x_10, x_12, x_14, x_6, x_9, x_15);
x_17 = lean_apply_5(x_10, x_5, x_12, x_6, x_13, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___rarg), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_11);
x_12 = lean_apply_1(x_11, x_3);
x_13 = lean_apply_1(x_11, x_4);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_5);
x_16 = lean_apply_5(x_10, x_5, x_6, x_13, x_9, x_15);
x_17 = lean_apply_5(x_10, x_12, x_5, x_13, x_14, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___rarg), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_alloc_closure((void*)(l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___rarg), 9, 8);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_7);
lean_closure_set(x_10, 6, x_8);
lean_closure_set(x_10, 7, x_9);
x_11 = lean_alloc_closure((void*)(l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___rarg), 9, 8);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
lean_closure_set(x_11, 4, x_6);
lean_closure_set(x_11, 5, x_7);
lean_closure_set(x_11, 6, x_8);
lean_closure_set(x_11, 7, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Localization_Preadditive_homEquiv___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Localization_Preadditive_homEquiv___elambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Localization_Preadditive_homEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_CategoryTheory_Localization_Preadditive_homEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_CalculusOfFractions_Fractions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_HasLocalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Equiv_TransferInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Localization_CalculusOfFractions_Preadditive(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_CalculusOfFractions_Fractions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_HasLocalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Equiv_TransferInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
