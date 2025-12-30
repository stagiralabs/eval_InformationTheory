// Lean compiler output
// Module: Mathlib.Data.List.MinMax
// Imports: Init Mathlib.Data.List.Basic Mathlib.Order.BoundedOrder.Lattice Mathlib.Data.List.Induction Mathlib.Order.MinMax Mathlib.Order.WithBot
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
LEAN_EXPORT lean_object* l_List_maximum(lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_minimum__of__length__pos___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_minimum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_WithBot_unbot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_minimum(lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum__of__length__pos___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___at_List_maximum__of__length__pos___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OrderDual_instLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_minimum__of__length__pos(lean_object*);
LEAN_EXPORT lean_object* l_List_minimum__of__length__pos___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___at_List_maximum__of__length__pos___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_minimum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_argmin(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_maximum___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_maximum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_minimum__of__length__pos___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum__of__length__pos___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos(lean_object*);
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argmax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_argAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_apply_2(x_1, x_3, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_argAux___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_apply_1(x_2, x_6);
lean_inc(x_4);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_argAux___at_List_argmax___spec__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_argAux___at_List_argmax___spec__1___rarg(x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldl___at_List_argmax___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_argmax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldl___at_List_argmax___spec__2___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmax(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_argmax___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmax___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_argAux___at_List_argmax___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmax___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_argmax___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_argmax___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_1(x_2, x_6);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_argAux___at_List_argmin___spec__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_argAux___at_List_argmin___spec__1___rarg(x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldl___at_List_argmin___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_argmin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldl___at_List_argmin___spec__2___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmin(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_argmin___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_argmin___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_argAux___at_List_argmin___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_argmin___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_argmin___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_argmin___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_apply_1(x_2, x_6);
lean_inc(x_4);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_argAux___at_List_maximum___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_argAux___at_List_maximum___spec__2___rarg(x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_maximum___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldl___at_List_maximum___spec__3___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argmax___at_List_maximum___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_List_maximum___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_maximum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_maximum___rarg___closed__1;
x_5 = l_List_argmax___at_List_maximum___spec__1___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_maximum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_maximum___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_argAux___at_List_maximum___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_maximum___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_argmax___at_List_maximum___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_maximum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_maximum___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_1(x_2, x_6);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_argAux___at_List_minimum___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_argAux___at_List_minimum___spec__2___rarg(x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_minimum___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldl___at_List_minimum___spec__3___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argmin___at_List_minimum___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_minimum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_maximum___rarg___closed__1;
x_5 = l_List_argmin___at_List_minimum___spec__1___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_minimum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_minimum___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_argAux___at_List_minimum___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_minimum___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argmin___at_List_minimum___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_argmin___at_List_minimum___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_minimum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_minimum___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = lean_apply_1(x_2, x_7);
lean_inc(x_5);
x_9 = lean_apply_1(x_2, x_5);
x_10 = l_instDecidableLt__mathlib___rarg(x_1, x_8, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_4, 0);
lean_dec(x_13);
lean_ctor_set(x_4, 0, x_5);
return x_4;
}
else
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_5);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg(x_1, x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum__of__length__pos___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_LinearOrder_toLattice___rarg(x_1);
x_5 = l_Lattice_toSemilatticeInf___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg(x_1, x_2, x_6, x_7, x_3);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_maximum__of__length__pos___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argmax___at_List_maximum__of__length__pos___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_maximum___at_List_maximum__of__length__pos___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_maximum___rarg___closed__1;
x_4 = l_List_argmax___at_List_maximum__of__length__pos___spec__2___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_maximum___at_List_maximum__of__length__pos___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_maximum___at_List_maximum__of__length__pos___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_List_argmax___at_List_maximum__of__length__pos___spec__2___rarg(x_1, x_4, x_2);
x_6 = l_WithBot_unbot___rarg(x_5, lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_maximum__of__length__pos___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_argAux___at_List_maximum__of__length__pos___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_maximum__of__length__pos___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = lean_apply_1(x_2, x_7);
lean_inc(x_5);
x_9 = lean_apply_1(x_2, x_5);
x_10 = l_instDecidableLt__mathlib___rarg(x_1, x_8, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_4, 0);
lean_dec(x_13);
lean_ctor_set(x_4, 0, x_5);
return x_4;
}
else
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_5);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg(x_1, x_2, x_3, x_4, x_6);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_minimum__of__length__pos___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_LinearOrder_toLattice___rarg(x_1);
x_5 = l_Lattice_toSemilatticeInf___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg(x_1, x_2, x_6, x_7, x_3);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_argmax___at_List_minimum__of__length__pos___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_argmax___at_List_minimum__of__length__pos___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_maximum___rarg___closed__1;
x_4 = l_List_argmax___at_List_minimum__of__length__pos___spec__3___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_maximum___at_List_minimum__of__length__pos___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_OrderDual_instLinearOrder___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_6 = l_List_argmax___at_List_minimum__of__length__pos___spec__3___rarg(x_4, x_5, x_2);
x_7 = l_WithBot_unbot___rarg(x_6, lean_box(0));
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_minimum__of__length__pos___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_maximum__of__length__pos___at_List_minimum__of__length__pos___spec__1___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_minimum__of__length__pos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_minimum__of__length__pos___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_argAux___at_List_minimum__of__length__pos___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldl___at_List_minimum__of__length__pos___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_maximum___at_List_minimum__of__length__pos___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_maximum___at_List_minimum__of__length__pos___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BoundedOrder_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Induction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_MinMax(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_WithBot(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_MinMax(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BoundedOrder_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Induction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_MinMax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_WithBot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_maximum___rarg___closed__1 = _init_l_List_maximum___rarg___closed__1();
lean_mark_persistent(l_List_maximum___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
