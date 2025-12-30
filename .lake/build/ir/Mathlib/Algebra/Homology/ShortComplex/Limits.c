// Lean compiler output
// Module: Mathlib.Algebra.Homology.ShortComplex.Limits
// Imports: Init Mathlib.Algebra.Homology.ShortComplex.Basic Mathlib.CategoryTheory.Limits.Constructions.EpiMono Mathlib.CategoryTheory.Limits.Shapes.FiniteLimits Mathlib.CategoryTheory.Limits.Preserves.Finite
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
lean_object* l_CategoryTheory_ShortComplex_instCategory___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_ShortComplex__u03c0_u2083___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_mapCocone___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_ShortComplex__u03c0_u2081___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_mapCone___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_ShortComplex__u03c0_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = l_CategoryTheory_ShortComplex__u03c0_u2081___rarg(x_2, x_3);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_CategoryTheory_Functor_mapCone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_11, x_4, x_10);
x_13 = lean_apply_1(x_6, x_12);
x_14 = l_CategoryTheory_ShortComplex__u03c0_u2082___rarg(x_2, x_3);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_CategoryTheory_Functor_mapCone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_14, x_4, x_10);
x_16 = lean_apply_1(x_7, x_15);
x_17 = l_CategoryTheory_ShortComplex__u03c0_u2083___rarg(x_2, x_3);
x_18 = l_CategoryTheory_Functor_mapCone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_17, x_4, x_10);
x_19 = lean_apply_1(x_8, x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_CategoryTheory_ShortComplex_instCategory___rarg(x_2, x_3);
x_10 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg___boxed), 10, 9);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
lean_closure_set(x_10, 8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_ShortComplex_isLimitOfIsLimit_u03c0___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = l_CategoryTheory_ShortComplex__u03c0_u2081___rarg(x_2, x_3);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_CategoryTheory_Functor_mapCocone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_11, x_4, x_10);
x_13 = lean_apply_1(x_6, x_12);
x_14 = l_CategoryTheory_ShortComplex__u03c0_u2082___rarg(x_2, x_3);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_CategoryTheory_Functor_mapCocone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_14, x_4, x_10);
x_16 = lean_apply_1(x_7, x_15);
x_17 = l_CategoryTheory_ShortComplex__u03c0_u2083___rarg(x_2, x_3);
x_18 = l_CategoryTheory_Functor_mapCocone___rarg(x_1, lean_box(0), x_9, lean_box(0), x_2, x_17, x_4, x_10);
x_19 = lean_apply_1(x_8, x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_CategoryTheory_ShortComplex_instCategory___rarg(x_2, x_3);
x_10 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg___boxed), 10, 9);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
lean_closure_set(x_10, 8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_ShortComplex_isColimitOfIsColimit_u03c0___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_FiniteLimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_FiniteLimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
