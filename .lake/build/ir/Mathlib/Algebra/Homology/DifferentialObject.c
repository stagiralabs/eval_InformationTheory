// Lean compiler output
// Module: Mathlib.Algebra.Homology.DifferentialObject
// Imports: Init Mathlib.Algebra.Homology.HomologicalComplex Mathlib.CategoryTheory.DifferentialObject
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
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_CategoryTheory_GradedObject_instZeroHomOfHasZeroMorphisms___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_GradedObject_hasShift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_eqToHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2;
extern lean_object* l_Int_instRing;
lean_object* l_CategoryTheory_GradedObject_categoryOfGradedObjects___rarg(lean_object*, lean_object*);
static lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_4);
x_9 = lean_apply_1(x_7, x_5);
x_10 = l_CategoryTheory_eqToHom___rarg(x_1, x_8, x_9, lean_box(0));
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_DifferentialObject_objEqToHom___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_DifferentialObject_objEqToHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_DifferentialObject_objEqToHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_DifferentialObject_objEqToHom(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1;
x_9 = lean_apply_2(x_7, x_8, x_3);
lean_inc(x_5);
x_10 = lean_apply_2(x_4, x_5, x_9);
x_11 = lean_apply_2(x_6, x_5, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2), 5, 4);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instRing;
x_2 = l_Ring_toAddGroupWithOne___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1;
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_inc(x_4);
x_10 = l_CategoryTheory_GradedObject_categoryOfGradedObjects___rarg(x_4, lean_box(0));
x_11 = lean_alloc_closure((void*)(l_CategoryTheory_GradedObject_instZeroHomOfHasZeroMorphisms___rarg), 5, 2);
lean_closure_set(x_11, 0, x_5);
lean_closure_set(x_11, 1, lean_box(0));
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_CategoryTheory_GradedObject_hasShift___rarg(x_4, lean_box(0), x_1, x_2);
x_13 = lean_alloc_closure((void*)(l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3___boxed), 8, 7);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_7);
lean_closure_set(x_13, 3, x_9);
lean_closure_set(x_13, 4, x_10);
lean_closure_set(x_13, 5, x_11);
lean_closure_set(x_13, 6, x_12);
x_14 = l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomologicalComplex_homologicalComplexToDGO___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__4(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_HomologicalComplex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_DifferentialObject(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_DifferentialObject(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_HomologicalComplex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_DifferentialObject(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1 = _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1();
lean_mark_persistent(l_HomologicalComplex_homologicalComplexToDGO___rarg___lambda__2___closed__1);
l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1 = _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1();
lean_mark_persistent(l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__1);
l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2 = _init_l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2();
lean_mark_persistent(l_HomologicalComplex_homologicalComplexToDGO___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
