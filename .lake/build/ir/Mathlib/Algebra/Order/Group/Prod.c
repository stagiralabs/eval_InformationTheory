// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.Prod
// Imports: Init Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Monoid.Prod
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
lean_object* l_instDecidableEqLex___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_Lex_linearOrder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommGroup___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup(lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_subNegMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommGroup(lean_object*, lean_object*);
lean_object* l_Prod_instDivInvMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommGroup(lean_object*, lean_object*);
lean_object* l_Prod_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___rarg(lean_object*);
lean_object* l_Prod_Lex_decidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_Lex_preorder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instDivInvMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Prod_instPreorder(lean_box(0), lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_subNegMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Prod_instPreorder(lean_box(0), lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instDivInvMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Prod_Lex_preorder(lean_box(0), lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_subNegMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Prod_Lex_preorder(lean_box(0), lean_box(0), x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_instDecidableEqProd___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_3 = l_LinearOrderedCommGroup_toLinearOrder___rarg(x_1);
lean_inc(x_2);
x_4 = l_LinearOrderedCommGroup_toLinearOrder___rarg(x_2);
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Prod_Lex_linearOrder___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Prod_instDivInvMonoid___rarg(x_7, x_9);
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 6);
lean_dec(x_13);
x_14 = lean_ctor_get(x_5, 5);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 4);
lean_dec(x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_12);
lean_inc(x_3);
x_17 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_17, 0, x_3);
x_18 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_18, 0, x_3);
lean_inc(x_4);
x_19 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_19, 0, x_4);
lean_inc(x_18);
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_20, 0, x_17);
lean_closure_set(x_20, 1, lean_box(0));
lean_closure_set(x_20, 2, lean_box(0));
lean_closure_set(x_20, 3, x_18);
lean_closure_set(x_20, 4, x_19);
lean_inc(x_17);
lean_inc(x_4);
x_21 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_21, 0, x_4);
lean_closure_set(x_21, 1, x_17);
x_22 = lean_alloc_closure((void*)(l_instDecidableEqLex___rarg), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_4);
x_24 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_24, 0, x_17);
lean_closure_set(x_24, 1, lean_box(0));
lean_closure_set(x_24, 2, lean_box(0));
lean_closure_set(x_24, 3, x_18);
lean_closure_set(x_24, 4, x_23);
lean_ctor_set(x_5, 6, x_24);
lean_ctor_set(x_5, 5, x_22);
lean_ctor_set(x_5, 4, x_20);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
x_27 = lean_ctor_get(x_5, 2);
x_28 = lean_ctor_get(x_5, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_25);
lean_inc(x_3);
x_30 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_3);
x_31 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_3);
lean_inc(x_4);
x_32 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_4);
lean_inc(x_31);
lean_inc(x_30);
x_33 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_33, 0, x_30);
lean_closure_set(x_33, 1, lean_box(0));
lean_closure_set(x_33, 2, lean_box(0));
lean_closure_set(x_33, 3, x_31);
lean_closure_set(x_33, 4, x_32);
lean_inc(x_30);
lean_inc(x_4);
x_34 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_34, 0, x_4);
lean_closure_set(x_34, 1, x_30);
x_35 = lean_alloc_closure((void*)(l_instDecidableEqLex___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_36, 0, x_4);
x_37 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_37, 0, x_30);
lean_closure_set(x_37, 1, lean_box(0));
lean_closure_set(x_37, 2, lean_box(0));
lean_closure_set(x_37, 3, x_31);
lean_closure_set(x_37, 4, x_36);
x_38 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_26);
lean_ctor_set(x_38, 2, x_27);
lean_ctor_set(x_38, 3, x_28);
lean_ctor_set(x_38, 4, x_33);
lean_ctor_set(x_38, 5, x_35);
lean_ctor_set(x_38, 6, x_37);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Prod_Lex_decidable___rarg(x_1, lean_box(0), lean_box(0), x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Prod_Lex_decidable___rarg(x_1, lean_box(0), lean_box(0), x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_3 = l_LinearOrderedAddCommGroup_toLinearOrder___rarg(x_1);
lean_inc(x_2);
x_4 = l_LinearOrderedAddCommGroup_toLinearOrder___rarg(x_2);
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Prod_Lex_linearOrder___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Prod_subNegMonoid___rarg(x_7, x_9);
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 6);
lean_dec(x_13);
x_14 = lean_ctor_get(x_5, 5);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 4);
lean_dec(x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_12);
lean_inc(x_3);
x_17 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_17, 0, x_3);
x_18 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_18, 0, x_3);
lean_inc(x_4);
x_19 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_19, 0, x_4);
lean_inc(x_18);
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___rarg), 5, 3);
lean_closure_set(x_20, 0, x_17);
lean_closure_set(x_20, 1, x_18);
lean_closure_set(x_20, 2, x_19);
lean_inc(x_17);
lean_inc(x_4);
x_21 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_21, 0, x_4);
lean_closure_set(x_21, 1, x_17);
x_22 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__2___rarg), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_4);
x_24 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___rarg), 5, 3);
lean_closure_set(x_24, 0, x_17);
lean_closure_set(x_24, 1, x_18);
lean_closure_set(x_24, 2, x_23);
lean_ctor_set(x_5, 6, x_24);
lean_ctor_set(x_5, 5, x_22);
lean_ctor_set(x_5, 4, x_20);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
x_27 = lean_ctor_get(x_5, 2);
x_28 = lean_ctor_get(x_5, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_25);
lean_inc(x_3);
x_30 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_3);
x_31 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_3);
lean_inc(x_4);
x_32 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_4);
lean_inc(x_31);
lean_inc(x_30);
x_33 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___rarg), 5, 3);
lean_closure_set(x_33, 0, x_30);
lean_closure_set(x_33, 1, x_31);
lean_closure_set(x_33, 2, x_32);
lean_inc(x_30);
lean_inc(x_4);
x_34 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCommGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_34, 0, x_4);
lean_closure_set(x_34, 1, x_30);
x_35 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__2___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_36, 0, x_4);
x_37 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___rarg), 5, 3);
lean_closure_set(x_37, 0, x_30);
lean_closure_set(x_37, 1, x_31);
lean_closure_set(x_37, 2, x_36);
x_38 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_26);
lean_ctor_set(x_38, 2, x_27);
lean_ctor_set(x_38, 3, x_28);
lean_ctor_set(x_38, 4, x_33);
lean_ctor_set(x_38, 5, x_35);
lean_ctor_set(x_38, 6, x_37);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_Lex_linearOrderedAddCommGroup___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCommGroup___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_Lex_linearOrderedAddCommGroup___elambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
