// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Support
// Imports: Init Mathlib.Data.Fintype.Card Mathlib.Algebra.Group.Commute.Basic Mathlib.Algebra.Group.End Mathlib.Data.Finset.NoncommProd
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
LEAN_EXPORT lean_object* l_Equiv_Perm_support(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_support___spec__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_support___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_support___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_support___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_support___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_support___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_support___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_support___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_apply_1(x_9, x_7);
lean_inc(x_1);
lean_inc(x_7);
x_11 = lean_apply_2(x_1, x_10, x_7);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
x_13 = l_instDecidableNot___rarg(x_12);
if (x_13 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_3);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_inc(x_16);
x_19 = lean_apply_1(x_18, x_16);
lean_inc(x_1);
lean_inc(x_16);
x_20 = lean_apply_2(x_1, x_19, x_16);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
x_22 = l_instDecidableNot___rarg(x_21);
if (x_22 == 0)
{
lean_dec(x_16);
x_3 = x_17;
goto _start;
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_4);
x_3 = x_17;
x_4 = x_24;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_support___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Equiv_Perm_support___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_support___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Equiv_Perm_support___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_support___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Equiv_Perm_support___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_support___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Equiv_Perm_support___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_support___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Equiv_Perm_support___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_support___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Equiv_Perm_support___spec__2___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_support(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_support___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Commute_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_NoncommProd(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Support(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Commute_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_NoncommProd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
