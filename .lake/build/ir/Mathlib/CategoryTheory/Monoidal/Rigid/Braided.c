// Lean compiler output
// Module: Mathlib.CategoryTheory.Monoidal.Rigid.Braided
// Imports: Init Mathlib.CategoryTheory.Monoidal.Rigid.Basic Mathlib.CategoryTheory.Monoidal.Braided.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rightRigidCategoryOfLeftRigidCategory___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rightRigidCategoryOfLeftRigidCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_leftRigidCategoryOfRightRigidCategory___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_leftRigidCategoryOfRightRigidCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_exactPairing__swap(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_apply_2(x_9, x_4, x_5);
lean_inc(x_4);
lean_inc(x_5);
x_11 = lean_apply_2(x_9, x_5, x_4);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
lean_inc(x_3);
lean_inc(x_4);
lean_inc(x_5);
x_13 = lean_apply_2(x_3, x_5, x_4);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
x_15 = lean_apply_5(x_7, x_8, x_10, x_11, x_12, x_14);
x_16 = lean_apply_2(x_3, x_4, x_5);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_dec(x_6);
x_19 = lean_apply_5(x_7, x_10, x_11, x_8, x_17, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_exactPairing__swap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_9 = l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(x_1, x_2, x_3, x_4, x_7, x_8);
lean_ctor_set(x_5, 1, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
lean_inc(x_10);
x_12 = l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(x_1, x_2, x_3, x_4, x_10, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_9 = l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(x_1, x_2, x_3, x_7, x_4, x_8);
lean_ctor_set(x_5, 1, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
lean_inc(x_10);
x_12 = l_CategoryTheory_BraidedCategory_exactPairing__swap___rarg(x_1, x_2, x_3, x_10, x_4, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_leftRigidCategoryOfRightRigidCategory___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_4, x_5);
x_7 = l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual___rarg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_leftRigidCategoryOfRightRigidCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_leftRigidCategoryOfRightRigidCategory___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rightRigidCategoryOfLeftRigidCategory___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_4, x_5);
x_7 = l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual___rarg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rightRigidCategoryOfLeftRigidCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_rightRigidCategoryOfLeftRigidCategory___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
x_7 = l_CategoryTheory_BraidedCategory_hasLeftDualOfHasRightDual___rarg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg___lambda__1), 5, 4);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_rigidCategoryOfRightRigidCategory___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
x_7 = l_CategoryTheory_BraidedCategory_hasRightDualOfHasLeftDual___rarg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg___lambda__1), 5, 4);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_BraidedCategory_rigidCategoryOfLeftRigidCategory___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Rigid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Braided_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Rigid_Braided(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Rigid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Braided_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
