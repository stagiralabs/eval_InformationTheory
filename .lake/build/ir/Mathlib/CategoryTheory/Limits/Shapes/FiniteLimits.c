// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.FiniteLimits
// Imports: Init Mathlib.CategoryTheory.FinCategory.AsType Mathlib.CategoryTheory.Limits.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Shapes.Equalizers Mathlib.CategoryTheory.Limits.Shapes.WidePullbacks Mathlib.CategoryTheory.Limits.Shapes.Pullback.HasPullback Mathlib.Data.Fintype.Option
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__1(lean_object*);
uint8_t l_CategoryTheory_Limits_instDecidableEqWalkingParallelPair(uint8_t, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Limits_fintypeWalkingPair___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePushoutShape_fintypeObj___rarg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__6(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_fintypeWalkingPair;
static lean_object* l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1;
LEAN_EXPORT uint8_t l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_fintypeWalkingParallelPair;
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__4(lean_object*);
static lean_object* l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePullbackShape_fintypeObj___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2___boxed(lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__2(lean_object*);
uint8_t l_CategoryTheory_Limits_instDecidableEqWalkingPair(uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1(uint8_t, lean_object*);
lean_object* l_Finset_insertNone___rarg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__3(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePullbackShape_fintypeObj(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePushoutShape_fintypeObj(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_CategoryTheory_Limits_instDecidableEqWalkingParallelPair(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
lean_inc(x_4);
x_12 = l_List_decidableBAll___rarg(x_11, x_4);
if (x_12 == 0)
{
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
x_2 = x_7;
x_4 = x_15;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__6(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(x_1);
return x_2;
}
}
static lean_object* _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2;
x_2 = l_List_pwFilter___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___lambda__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_CategoryTheory_Limits_fintypeWalkingParallelPair___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePullbackShape_fintypeObj___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_insertNone___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePullbackShape_fintypeObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_WidePullbackShape_fintypeObj___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePushoutShape_fintypeObj___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_insertNone___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_WidePushoutShape_fintypeObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_WidePushoutShape_fintypeObj___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_CategoryTheory_Limits_instDecidableEqWalkingPair(x_1, x_6);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = 1;
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
x_3 = l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
return x_2;
}
}
}
static lean_object* _init_l_CategoryTheory_Limits_fintypeWalkingPair___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_Limits_fintypeWalkingPair() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_CategoryTheory_Limits_fintypeWalkingPair___closed__1;
x_3 = l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_elem___at_CategoryTheory_Limits_fintypeWalkingPair___spec__2(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Multiset_ndinsert___at_CategoryTheory_Limits_fintypeWalkingPair___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_FinCategory_AsType(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Equalizers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_WidePullbacks(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Option(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_FiniteLimits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_FinCategory_AsType(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Equalizers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_WidePullbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Option(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1 = _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1();
lean_mark_persistent(l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__1);
l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2 = _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2();
lean_mark_persistent(l_CategoryTheory_Limits_fintypeWalkingParallelPair___closed__2);
l_CategoryTheory_Limits_fintypeWalkingParallelPair = _init_l_CategoryTheory_Limits_fintypeWalkingParallelPair();
lean_mark_persistent(l_CategoryTheory_Limits_fintypeWalkingParallelPair);
l_CategoryTheory_Limits_fintypeWalkingPair___closed__1 = _init_l_CategoryTheory_Limits_fintypeWalkingPair___closed__1();
lean_mark_persistent(l_CategoryTheory_Limits_fintypeWalkingPair___closed__1);
l_CategoryTheory_Limits_fintypeWalkingPair = _init_l_CategoryTheory_Limits_fintypeWalkingPair();
lean_mark_persistent(l_CategoryTheory_Limits_fintypeWalkingPair);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
