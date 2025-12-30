// Lean compiler output
// Module: Mathlib.Data.Finset.Interval
// Imports: Init Mathlib.Data.Finset.Grade Mathlib.Data.Finset.Powerset Mathlib.Order.Interval.Finset.Basic
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
static lean_object* l_Finset_instLocallyFiniteOrder___rarg___closed__1;
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11(lean_object*);
lean_object* l_Finset_partialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2(lean_object*);
uint8_t l_Finset_instDecidableRelSubset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__10___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3(lean_object*);
uint8_t l_Finset_instDecidableRelSSubset___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_ssubsets___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Finset_instDecidableRelSubset___rarg(x_1, x_2, x_7);
if (x_9 == 0)
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
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Finset_instDecidableRelSubset___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Finset_instDecidableRelSubset___rarg(x_1, x_2, x_7);
if (x_9 == 0)
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
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Finset_instDecidableRelSubset___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__6___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Finset_instDecidableRelSSubset___rarg(x_1, x_2, x_7);
if (x_9 == 0)
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
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Finset_instDecidableRelSSubset___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__9___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__7___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Finset_instDecidableRelSSubset___rarg(x_1, x_2, x_7);
if (x_9 == 0)
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
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Finset_instDecidableRelSSubset___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_instLocallyFiniteOrder___spec__12___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_instLocallyFiniteOrder___spec__10___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_powerset___rarg(x_3);
x_5 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__2___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Finset_ssubsets___rarg(x_1, x_3);
x_5 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__5___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_powerset___rarg(x_3);
x_5 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__8___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Finset_ssubsets___rarg(x_1, x_3);
x_5 = l_Multiset_filter___at_Finset_instLocallyFiniteOrder___spec__11___rarg(x_1, x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Finset_instLocallyFiniteOrder___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_partialOrder(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Finset_instLocallyFiniteOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Finset_instLocallyFiniteOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Finset_instLocallyFiniteOrder___rarg___lambda__3), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_instLocallyFiniteOrder___rarg___lambda__4), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_instLocallyFiniteOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instLocallyFiniteOrder___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Grade(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Interval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Grade(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_instLocallyFiniteOrder___rarg___closed__1 = _init_l_Finset_instLocallyFiniteOrder___rarg___closed__1();
lean_mark_persistent(l_Finset_instLocallyFiniteOrder___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
