// Lean compiler output
// Module: Mathlib.MeasureTheory.Category.MeasCat
// Imports: Init Mathlib.MeasureTheory.Measure.GiryMonad Mathlib.CategoryTheory.Monad.Algebra Mathlib.Topology.Category.TopCat.Basic
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
static lean_object* l_MeasCat_instLargeCategory___closed__2;
LEAN_EXPORT lean_object* l_MeasCat_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory;
extern lean_object* l_Empty_instMeasurableSpace;
LEAN_EXPORT lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2;
LEAN_EXPORT lean_object* l_MeasCat_of(lean_object*);
static lean_object* l_TopCat_hasForgetToMeasCat___closed__2;
static lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3;
LEAN_EXPORT lean_object* l_Borel;
LEAN_EXPORT lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable;
static lean_object* l_MeasCat_instLargeCategory___closed__1;
LEAN_EXPORT lean_object* l_MeasCat_instInhabited;
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___boxed(lean_object*, lean_object*);
static lean_object* l_TopCat_hasForgetToMeasCat___closed__1;
static lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__1;
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_TopCat_hasForgetToMeasCat___closed__3;
LEAN_EXPORT lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat;
static lean_object* l_MeasCat_instLargeCategory___closed__3;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasCat_instCoeSortType;
static lean_object* l_MeasCat_instLargeCategory___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___rarg(lean_object*, lean_object*);
static lean_object* _init_l_MeasCat_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MeasCat_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasCat_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MeasCat_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasCat_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasCat_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_MeasCat_instLargeCategory___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasCat_instLargeCategory___lambda__1___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_MeasCat_instLargeCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasCat_instLargeCategory___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_MeasCat_instLargeCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasCat_instLargeCategory___lambda__2___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_MeasCat_instLargeCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_MeasCat_instLargeCategory___closed__1;
x_3 = l_MeasCat_instLargeCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MeasCat_instLargeCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_MeasCat_instLargeCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasCat_instLargeCategory___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instLargeCategory___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasCat_instLargeCategory___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasCat_instFunLikeSubtypeForallCarrierMeasurable___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable() {
_start:
{
lean_object* x_1; 
x_1 = l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_MeasCat_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Empty_instMeasurableSpace;
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_TopCat_hasForgetToMeasCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_TopCat_hasForgetToMeasCat___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_TopCat_hasForgetToMeasCat___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_TopCat_hasForgetToMeasCat___lambda__2___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_TopCat_hasForgetToMeasCat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_TopCat_hasForgetToMeasCat___closed__1;
x_2 = l_TopCat_hasForgetToMeasCat___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_TopCat_hasForgetToMeasCat() {
_start:
{
lean_object* x_1; 
x_1 = l_TopCat_hasForgetToMeasCat___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TopCat_hasForgetToMeasCat___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_hasForgetToMeasCat___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_TopCat_hasForgetToMeasCat___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Borel() {
_start:
{
lean_object* x_1; 
x_1 = l_TopCat_hasForgetToMeasCat___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_GiryMonad(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_TopCat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Category_MeasCat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_GiryMonad(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_TopCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasCat_instCoeSortType = _init_l_MeasCat_instCoeSortType();
l_MeasCat_instLargeCategory___lambda__1___closed__1 = _init_l_MeasCat_instLargeCategory___lambda__1___closed__1();
lean_mark_persistent(l_MeasCat_instLargeCategory___lambda__1___closed__1);
l_MeasCat_instLargeCategory___closed__1 = _init_l_MeasCat_instLargeCategory___closed__1();
lean_mark_persistent(l_MeasCat_instLargeCategory___closed__1);
l_MeasCat_instLargeCategory___closed__2 = _init_l_MeasCat_instLargeCategory___closed__2();
lean_mark_persistent(l_MeasCat_instLargeCategory___closed__2);
l_MeasCat_instLargeCategory___closed__3 = _init_l_MeasCat_instLargeCategory___closed__3();
lean_mark_persistent(l_MeasCat_instLargeCategory___closed__3);
l_MeasCat_instLargeCategory = _init_l_MeasCat_instLargeCategory();
lean_mark_persistent(l_MeasCat_instLargeCategory);
l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__1 = _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__1();
lean_mark_persistent(l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__1);
l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2 = _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2();
lean_mark_persistent(l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__2);
l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3 = _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3();
lean_mark_persistent(l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable___closed__3);
l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable = _init_l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable();
lean_mark_persistent(l_MeasCat_instConcreteCategorySubtypeForallCarrierMeasurable);
l_MeasCat_instInhabited = _init_l_MeasCat_instInhabited();
lean_mark_persistent(l_MeasCat_instInhabited);
l_TopCat_hasForgetToMeasCat___closed__1 = _init_l_TopCat_hasForgetToMeasCat___closed__1();
lean_mark_persistent(l_TopCat_hasForgetToMeasCat___closed__1);
l_TopCat_hasForgetToMeasCat___closed__2 = _init_l_TopCat_hasForgetToMeasCat___closed__2();
lean_mark_persistent(l_TopCat_hasForgetToMeasCat___closed__2);
l_TopCat_hasForgetToMeasCat___closed__3 = _init_l_TopCat_hasForgetToMeasCat___closed__3();
lean_mark_persistent(l_TopCat_hasForgetToMeasCat___closed__3);
l_TopCat_hasForgetToMeasCat = _init_l_TopCat_hasForgetToMeasCat();
lean_mark_persistent(l_TopCat_hasForgetToMeasCat);
l_Borel = _init_l_Borel();
lean_mark_persistent(l_Borel);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
