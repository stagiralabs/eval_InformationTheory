// Lean compiler output
// Module: Mathlib.NumberTheory.GaussSum
// Imports: Init Mathlib.NumberTheory.LegendreSymbol.AddCharacter Mathlib.NumberTheory.LegendreSymbol.ZModChar Mathlib.Algebra.CharP.CharAndCard
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_gaussSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_gaussSum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_gaussSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_gaussSum___boxed(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_gaussSum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_gaussSum___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_gaussSum___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_gaussSum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_gaussSum___spec__2___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_gaussSum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_gaussSum___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_gaussSum___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_1(x_3, x_4);
x_8 = lean_apply_2(x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_gaussSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_alloc_closure((void*)(l_gaussSum___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = l_Finset_sum___at_gaussSum___spec__1___rarg(x_3, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_gaussSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_gaussSum___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_gaussSum___spec__2___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_gaussSum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_gaussSum(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_AddCharacter(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_ZModChar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_CharAndCard(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_GaussSum(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LegendreSymbol_AddCharacter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LegendreSymbol_ZModChar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_CharAndCard(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
