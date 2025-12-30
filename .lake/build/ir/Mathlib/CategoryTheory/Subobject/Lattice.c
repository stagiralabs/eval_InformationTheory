// Lean compiler output
// Module: Mathlib.CategoryTheory.Subobject.Lattice
// Imports: Init Mathlib.CategoryTheory.Functor.Currying Mathlib.CategoryTheory.Subobject.FactorThru Mathlib.CategoryTheory.Subobject.WellPowered Mathlib.Data.Finset.Lattice.Fold
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
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_mapTop(lean_object*);
lean_object* l_CategoryTheory_Over_homMk___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_MonoOver_forget___spec__1___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_orderTop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_leTop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_leTop(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instInhabited___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Over_mk___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_mapTop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instTop___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_MonoOver_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_orderTop(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instTop(lean_object*);
static lean_object* l_CategoryTheory_MonoOver_leTop___rarg___closed__1;
lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_MonoOver_forget___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instTop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
lean_inc(x_2);
x_5 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoOver_instTop___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
lean_inc(x_2);
x_5 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoOver_instInhabited___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_CategoryTheory_MonoOver_leTop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_MonoOver_forget___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_leTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_2);
x_5 = lean_apply_1(x_4, x_2);
x_6 = l_CategoryTheory_MonoOver_leTop___rarg___closed__1;
x_7 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_MonoOver_forget___spec__2___rarg(x_1, x_2, lean_box(0), x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_3);
x_9 = lean_apply_1(x_8, x_3);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_2);
x_11 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_5);
x_12 = l_CategoryTheory_Over_homMk___rarg(x_1, x_2, x_3, x_11, x_10, lean_box(0));
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_leTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoOver_leTop___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_mapTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_CategoryTheory_MonoOver_map___rarg(x_1, x_2, x_3, x_4, lean_box(0));
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_8);
lean_inc(x_2);
x_9 = lean_apply_1(x_8, x_2);
lean_inc(x_2);
x_10 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_9);
x_11 = lean_apply_1(x_7, x_10);
x_12 = l_CategoryTheory_Over_mk___rarg(x_1, x_3, x_2, x_4);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_inc(x_8);
x_14 = lean_apply_1(x_8, x_13);
x_15 = l_CategoryTheory_Over_homMk___rarg(x_1, x_3, x_11, x_12, x_14, lean_box(0));
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
x_17 = lean_apply_1(x_8, x_16);
x_18 = l_CategoryTheory_Over_homMk___rarg(x_1, x_3, x_12, x_11, x_17, lean_box(0));
lean_dec(x_11);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoOver_mapTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoOver_mapTop___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_orderTop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
lean_inc(x_2);
x_5 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_orderTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Subobject_orderTop___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
lean_inc(x_2);
x_5 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subobject_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Subobject_instInhabited___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_Currying(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Subobject_FactorThru(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Subobject_WellPowered(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Fold(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Subobject_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_Currying(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Subobject_FactorThru(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Subobject_WellPowered(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_MonoOver_leTop___rarg___closed__1 = _init_l_CategoryTheory_MonoOver_leTop___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_MonoOver_leTop___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
