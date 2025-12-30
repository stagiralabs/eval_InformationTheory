// Lean compiler output
// Module: Mathlib.Data.List.Lex
// Imports: Init Mathlib.Order.RelClasses Mathlib.Data.List.Basic
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
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_LE_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4(lean_object*);
LEAN_EXPORT uint8_t l_List_instLinearOrder___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instLinearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_Lex_decidableRel___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_LT_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3(lean_object*);
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Lex_decidableRel(lean_object*);
LEAN_EXPORT lean_object* l_List_LT_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_Lex_decidableRel___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_instLinearOrder___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_LE_x27(lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_Lex_decidableRel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 1;
return x_7;
}
}
else
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_11);
lean_inc(x_9);
x_13 = lean_apply_2(x_3, x_9, x_11);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_inc(x_1);
x_15 = lean_apply_2(x_1, x_9, x_11);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_17 = 0;
return x_17;
}
else
{
x_2 = lean_box(0);
x_4 = x_10;
x_5 = x_12;
goto _start;
}
}
else
{
uint8_t x_19; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_19 = 1;
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_Lex_decidableRel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Lex_decidableRel___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Lex_decidableRel___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_List_Lex_decidableRel___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_LT_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_LT_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_LT_x27(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; uint8_t x_10; 
x_9 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_2, x_3);
x_10 = l_instDecidableNot___rarg(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; uint8_t x_10; 
x_9 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_2, x_3);
x_10 = l_instDecidableNot___rarg(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; uint8_t x_10; 
x_9 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_2, x_3);
x_10 = l_instDecidableNot___rarg(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; uint8_t x_10; 
x_9 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_2, x_3);
x_10 = l_instDecidableNot___rarg(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_List_instLinearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_3);
x_6 = l_List_Lex_decidableRel___rarg(x_4, lean_box(0), x_5, x_3, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT uint8_t l_List_instLinearOrder___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg(x_1, x_2, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 2;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
else
{
uint8_t x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
}
}
static lean_object* _init_l_List_instLinearOrder___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_List_instLinearOrder___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_List_instLinearOrder___rarg___closed__1;
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_List_instLinearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_List_instLinearOrder___rarg___lambda__3), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_List_instLinearOrder___rarg___lambda__4___boxed), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg___boxed), 3, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
lean_ctor_set(x_9, 2, x_5);
lean_ctor_set(x_9, 3, x_6);
lean_ctor_set(x_9, 4, x_2);
lean_ctor_set(x_9, 5, x_7);
lean_ctor_set(x_9, 6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_instLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__1___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__2___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableEqOfDecidableLE___at_List_instLinearOrder___spec__3___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLTOfDecidableLE___at_List_instLinearOrder___spec__4___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_instLinearOrder___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_instLinearOrder___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_instLinearOrder___rarg___lambda__4(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_LE_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_List_instLinearOrder___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_LE_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_LE_x27___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelClasses(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Lex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelClasses(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_instLinearOrder___rarg___closed__1 = _init_l_List_instLinearOrder___rarg___closed__1();
lean_mark_persistent(l_List_instLinearOrder___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
