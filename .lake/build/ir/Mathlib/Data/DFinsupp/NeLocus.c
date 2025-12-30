// Lean compiler output
// Module: Mathlib.Data.DFinsupp.NeLocus
// Imports: Init Mathlib.Data.DFinsupp.Defs
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
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_neLocus___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_neLocus(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_inc(x_8);
x_11 = lean_apply_1(x_10, x_8);
lean_inc(x_2);
lean_inc(x_8);
x_12 = lean_apply_1(x_2, x_8);
lean_inc(x_1);
lean_inc(x_8);
x_13 = lean_apply_3(x_1, x_8, x_11, x_12);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
x_15 = l_instDecidableNot___rarg(x_14);
if (x_15 == 0)
{
lean_free_object(x_4);
lean_dec(x_8);
x_4 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_5);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_4;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_inc(x_18);
x_21 = lean_apply_1(x_20, x_18);
lean_inc(x_2);
lean_inc(x_18);
x_22 = lean_apply_1(x_2, x_18);
lean_inc(x_1);
lean_inc(x_18);
x_23 = lean_apply_3(x_1, x_18, x_21, x_22);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_25 = l_instDecidableNot___rarg(x_24);
if (x_25 == 0)
{
lean_dec(x_18);
x_4 = x_19;
goto _start;
}
else
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_5);
x_4 = x_19;
x_5 = x_27;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_filterTR_loop___at_DFinsupp_neLocus___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_DFinsupp_neLocus___spec__3___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at_DFinsupp_neLocus___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_DFinsupp_neLocus___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_5);
x_7 = l_Multiset_filter___at_DFinsupp_neLocus___spec__3___rarg(x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DFinsupp_support___at_DFinsupp_neLocus___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_inc(x_8);
x_11 = lean_apply_1(x_10, x_8);
lean_inc(x_2);
lean_inc(x_8);
x_12 = lean_apply_1(x_2, x_8);
lean_inc(x_1);
lean_inc(x_8);
x_13 = lean_apply_3(x_1, x_8, x_11, x_12);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
x_15 = l_instDecidableNot___rarg(x_14);
if (x_15 == 0)
{
lean_free_object(x_4);
lean_dec(x_8);
x_4 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_5);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_4;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_inc(x_18);
x_21 = lean_apply_1(x_20, x_18);
lean_inc(x_2);
lean_inc(x_18);
x_22 = lean_apply_1(x_2, x_18);
lean_inc(x_1);
lean_inc(x_18);
x_23 = lean_apply_3(x_1, x_18, x_21, x_22);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_25 = l_instDecidableNot___rarg(x_24);
if (x_25 == 0)
{
lean_dec(x_18);
x_4 = x_19;
goto _start;
}
else
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_5);
x_4 = x_19;
x_5 = x_27;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_filterTR_loop___at_DFinsupp_neLocus___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_DFinsupp_neLocus___spec__7___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at_DFinsupp_neLocus___spec__7___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_DFinsupp_neLocus___spec__6___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_5);
x_7 = l_Multiset_filter___at_DFinsupp_neLocus___spec__7___rarg(x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_support___at_DFinsupp_neLocus___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DFinsupp_support___at_DFinsupp_neLocus___spec__5___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_inc(x_9);
x_12 = lean_apply_1(x_11, x_9);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_inc(x_9);
x_14 = lean_apply_1(x_13, x_9);
lean_inc(x_1);
lean_inc(x_9);
x_15 = lean_apply_3(x_1, x_9, x_12, x_14);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = l_instDecidableNot___rarg(x_16);
if (x_17 == 0)
{
lean_free_object(x_5);
lean_dec(x_9);
x_5 = x_10;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_6);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_inc(x_20);
x_23 = lean_apply_1(x_22, x_20);
x_24 = lean_ctor_get(x_4, 0);
lean_inc(x_24);
lean_inc(x_20);
x_25 = lean_apply_1(x_24, x_20);
lean_inc(x_1);
lean_inc(x_20);
x_26 = lean_apply_3(x_1, x_20, x_23, x_25);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
x_28 = l_instDecidableNot___rarg(x_27);
if (x_28 == 0)
{
lean_dec(x_20);
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_6);
x_5 = x_21;
x_6 = x_30;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_neLocus___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_DFinsupp_support___at_DFinsupp_neLocus___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_DFinsupp_support___at_DFinsupp_neLocus___spec__5___rarg(x_1, x_2, x_3, x_5);
x_8 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_7, x_6);
x_9 = l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg(x_2, x_3, x_4, x_5, x_8);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_neLocus(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DFinsupp_neLocus___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_DFinsupp_neLocus___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_DFinsupp_neLocus___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_DFinsupp_neLocus___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_DFinsupp_NeLocus(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
