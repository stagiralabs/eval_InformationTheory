// Lean compiler output
// Module: Mathlib.CategoryTheory.Widesubcategory
// Imports: Init Mathlib.CategoryTheory.Functor.FullyFaithful Mathlib.CategoryTheory.MorphismProperty.Composition
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
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_wideInducedFunctor___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_WideSubcategory_category___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_InducedWideCategory_hasCoeToSort___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_hasCoeToSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_InducedWideCategory_hasCoeToSort(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_2);
x_10 = lean_apply_1(x_2, x_4);
x_11 = lean_apply_1(x_2, x_5);
x_12 = lean_apply_5(x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_InducedWideCategory_category___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_InducedWideCategory_category___rarg___lambda__2), 7, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_InducedWideCategory_category(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_InducedWideCategory_category___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_wideInducedFunctor___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_wideInducedFunctor___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_CategoryTheory_wideInducedFunctor___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_wideInducedFunctor___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_wideInducedFunctor___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_wideInducedFunctor___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_WideSubcategory_category___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_WideSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_CategoryTheory_WideSubcategory_category___rarg___closed__1;
x_5 = l_CategoryTheory_InducedWideCategory_category___rarg(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_WideSubcategory_category___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_WideSubcategory_category___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_WideSubcategory_category___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_CategoryTheory_wideInducedFunctor___rarg___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_CategoryTheory_WideSubcategory_category___rarg___closed__1;
x_5 = l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg(x_1, lean_box(0), lean_box(0), x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_wideSubcategoryInclusion___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_wideInducedFunctor___at_CategoryTheory_wideSubcategoryInclusion___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_wideSubcategoryInclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_wideSubcategoryInclusion___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_FullyFaithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_MorphismProperty_Composition(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Widesubcategory(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_FullyFaithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_MorphismProperty_Composition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_wideInducedFunctor___rarg___closed__1 = _init_l_CategoryTheory_wideInducedFunctor___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_wideInducedFunctor___rarg___closed__1);
l_CategoryTheory_WideSubcategory_category___rarg___closed__1 = _init_l_CategoryTheory_WideSubcategory_category___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_WideSubcategory_category___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
