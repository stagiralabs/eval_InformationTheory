// Lean compiler output
// Module: Mathlib.Algebra.Homology.ShortComplex.HomologicalComplex
// Imports: Init Mathlib.Algebra.Homology.Additive Mathlib.Algebra.Homology.ShortComplex.Exact Mathlib.Algebra.Homology.ShortComplex.Preadditive Mathlib.Tactic.Linarith
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
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27(lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27(lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_apply_1(x_7, x_1);
lean_inc(x_7);
lean_inc(x_2);
x_9 = lean_apply_1(x_7, x_2);
lean_inc(x_3);
x_10 = lean_apply_1(x_7, x_3);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_apply_2(x_11, x_1, x_2);
x_13 = lean_apply_2(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_12);
lean_ctor_set(x_14, 4, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_8);
x_9 = lean_apply_1(x_8, x_1);
lean_inc(x_8);
x_10 = lean_apply_1(x_8, x_2);
x_11 = lean_apply_1(x_8, x_3);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_7);
lean_closure_set(x_8, 3, x_1);
lean_closure_set(x_8, 4, x_2);
x_9 = lean_alloc_closure((void*)(l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2___boxed), 8, 5);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_7);
lean_closure_set(x_9, 3, x_1);
lean_closure_set(x_9, 4, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomologicalComplex_shortComplexFunctor_x27___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_HomologicalComplex_shortComplexFunctor_x27___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_HomologicalComplex_shortComplexFunctor_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_HomologicalComplex_shortComplexFunctor_x27___rarg(x_1, x_2, lean_box(0), x_4, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomologicalComplex_sc_x27___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_sc_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_HomologicalComplex_sc_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_Additive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Exact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Preadditive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_HomologicalComplex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_Additive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_Exact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_Preadditive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
