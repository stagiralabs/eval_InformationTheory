// Lean compiler output
// Module: Mathlib.Algebra.Homology.Functor
// Imports: Init Mathlib.Algebra.Homology.HomologicalComplex
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
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex(lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1;
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor(lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_3, x_4, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___lambda__2), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_3(x_8, x_2, x_3, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_4);
x_9 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___lambda__4), 5, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_HomologicalComplex_asFunctor___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_asFunctor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_HomologicalComplex_asFunctor___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_3, x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1___boxed), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_HomologicalComplex_asFunctor___rarg___boxed), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, lean_box(0));
lean_closure_set(x_7, 5, x_6);
x_8 = l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_HomologicalComplex(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_Functor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_HomologicalComplex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1 = _init_l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1();
lean_mark_persistent(l_HomologicalComplex_complexOfFunctorsToFunctorToComplex___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
