// Lean compiler output
// Module: Mathlib.Algebra.Homology.HomologicalComplexLimits
// Imports: Init Mathlib.Algebra.Homology.Single Mathlib.CategoryTheory.Limits.Shapes.FiniteLimits Mathlib.CategoryTheory.Limits.Preserves.Finite Mathlib.CategoryTheory.Limits.Constructions.EpiMono
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
lean_object* l_HomologicalComplex_eval___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HomologicalComplex_instCategory___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_mapCocone___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_mapCone___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
x_11 = l_HomologicalComplex_eval___rarg(x_1, x_4, x_3, x_10);
x_12 = l_CategoryTheory_Functor_mapCone___rarg(x_2, lean_box(0), x_8, lean_box(0), x_1, x_11, x_5, x_9);
x_13 = lean_apply_2(x_7, x_10, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HomologicalComplex_isLimitOfEval___elambda__1___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_8 = l_HomologicalComplex_instCategory___rarg(x_1, x_4, x_3);
x_9 = lean_alloc_closure((void*)(l_HomologicalComplex_isLimitOfEval___elambda__1___rarg___boxed), 10, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HomologicalComplex_isLimitOfEval___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isLimitOfEval___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_HomologicalComplex_isLimitOfEval___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
x_11 = l_HomologicalComplex_eval___rarg(x_1, x_4, x_3, x_10);
x_12 = l_CategoryTheory_Functor_mapCocone___rarg(x_2, lean_box(0), x_8, lean_box(0), x_1, x_11, x_5, x_9);
x_13 = lean_apply_2(x_7, x_10, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HomologicalComplex_isColimitOfEval___elambda__1___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_8 = l_HomologicalComplex_instCategory___rarg(x_1, x_4, x_3);
x_9 = lean_alloc_closure((void*)(l_HomologicalComplex_isColimitOfEval___elambda__1___rarg___boxed), 10, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HomologicalComplex_isColimitOfEval___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_isColimitOfEval___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_HomologicalComplex_isColimitOfEval___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_Single(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_FiniteLimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_HomologicalComplexLimits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_Single(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_FiniteLimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
