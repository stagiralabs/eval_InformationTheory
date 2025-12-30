// Lean compiler output
// Module: Mathlib.Algebra.Order.Monoid.Prod
// Imports: Init Mathlib.Algebra.Group.Prod Mathlib.Algebra.Order.Group.Synonym Mathlib.Algebra.Order.Monoid.Canonical.Defs Mathlib.Data.Prod.Lex
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
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqLex___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCancelCommMonoid(lean_object*, lean_object*);
lean_object* l_Prod_Lex_linearOrder___rarg(lean_object*, lean_object*);
lean_object* l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommMonoid(lean_object*, lean_object*);
lean_object* l_Prod_instAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid(lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCancelCommMonoid___rarg(lean_object*, lean_object*);
lean_object* l_LinearOrderedCancelCommMonoid_toLinearOrderedCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2(lean_object*, lean_object*);
lean_object* l_LinearOrderedCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_Lex_decidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCancelCommMonoid(lean_object*, lean_object*);
lean_object* l_Prod_Lex_preorder(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instOrderedCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instMonoid___rarg(x_3, x_4);
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
LEAN_EXPORT lean_object* l_Prod_instOrderedCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instAddMonoid___rarg(x_3, x_4);
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
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedAddCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_instOrderedCommMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_instOrderedAddCommMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instOrderedAddCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instOrderedAddCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Prod_instMonoid___rarg(x_4, x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Prod_Lex_preorder(lean_box(0), lean_box(0), x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedCommMonoid___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Prod_instAddMonoid___rarg(x_4, x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Prod_Lex_preorder(lean_box(0), lean_box(0), x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedAddCommMonoid___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instMonoid___rarg(x_3, x_4);
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
LEAN_EXPORT lean_object* l_Prod_Lex_orderedCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instAddMonoid___rarg(x_3, x_4);
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
LEAN_EXPORT lean_object* l_Prod_Lex_orderedAddCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_orderedAddCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_instDecidableEqProd___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_3 = l_LinearOrderedCancelCommMonoid_toLinearOrderedCommMonoid___rarg(x_1);
x_4 = l_LinearOrderedCommMonoid_toLinearOrder___rarg(x_3);
lean_inc(x_2);
x_5 = l_LinearOrderedCancelCommMonoid_toLinearOrderedCommMonoid___rarg(x_2);
x_6 = l_LinearOrderedCommMonoid_toLinearOrder___rarg(x_5);
lean_inc(x_6);
lean_inc(x_4);
x_7 = l_Prod_Lex_linearOrder___rarg(x_4, x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Prod_Lex_orderedCancelCommMonoid___rarg(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 6);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 5);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 4);
lean_dec(x_17);
lean_ctor_set(x_10, 1, x_14);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_18, 0, x_4);
x_19 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_19, 0, x_4);
lean_inc(x_6);
x_20 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_20, 0, x_6);
lean_inc(x_19);
lean_inc(x_18);
x_21 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_21, 0, x_18);
lean_closure_set(x_21, 1, lean_box(0));
lean_closure_set(x_21, 2, lean_box(0));
lean_closure_set(x_21, 3, x_19);
lean_closure_set(x_21, 4, x_20);
lean_inc(x_18);
lean_inc(x_6);
x_22 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_22, 0, x_6);
lean_closure_set(x_22, 1, x_18);
x_23 = lean_alloc_closure((void*)(l_instDecidableEqLex___rarg), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_6);
x_25 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_25, 0, x_18);
lean_closure_set(x_25, 1, lean_box(0));
lean_closure_set(x_25, 2, lean_box(0));
lean_closure_set(x_25, 3, x_19);
lean_closure_set(x_25, 4, x_24);
lean_ctor_set(x_7, 6, x_25);
lean_ctor_set(x_7, 5, x_23);
lean_ctor_set(x_7, 4, x_21);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
x_28 = lean_ctor_get(x_7, 2);
x_29 = lean_ctor_get(x_7, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
lean_ctor_set(x_10, 1, x_26);
lean_inc(x_4);
x_30 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_4);
x_31 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_4);
lean_inc(x_6);
x_32 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_6);
lean_inc(x_31);
lean_inc(x_30);
x_33 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_33, 0, x_30);
lean_closure_set(x_33, 1, lean_box(0));
lean_closure_set(x_33, 2, lean_box(0));
lean_closure_set(x_33, 3, x_31);
lean_closure_set(x_33, 4, x_32);
lean_inc(x_30);
lean_inc(x_6);
x_34 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_34, 0, x_6);
lean_closure_set(x_34, 1, x_30);
x_35 = lean_alloc_closure((void*)(l_instDecidableEqLex___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_36, 0, x_6);
x_37 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_37, 0, x_30);
lean_closure_set(x_37, 1, lean_box(0));
lean_closure_set(x_37, 2, lean_box(0));
lean_closure_set(x_37, 3, x_31);
lean_closure_set(x_37, 4, x_36);
x_38 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_38, 0, x_10);
lean_ctor_set(x_38, 1, x_27);
lean_ctor_set(x_38, 2, x_28);
lean_ctor_set(x_38, 3, x_29);
lean_ctor_set(x_38, 4, x_33);
lean_ctor_set(x_38, 5, x_35);
lean_ctor_set(x_38, 6, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_39 = lean_ctor_get(x_10, 0);
lean_inc(x_39);
lean_dec(x_10);
x_40 = lean_ctor_get(x_7, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_7, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_7, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_7, 3);
lean_inc(x_43);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 x_44 = x_7;
} else {
 lean_dec_ref(x_7);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set(x_45, 1, x_40);
lean_inc(x_4);
x_46 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_46, 0, x_4);
x_47 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_47, 0, x_4);
lean_inc(x_6);
x_48 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_48, 0, x_6);
lean_inc(x_47);
lean_inc(x_46);
x_49 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_49, 0, x_46);
lean_closure_set(x_49, 1, lean_box(0));
lean_closure_set(x_49, 2, lean_box(0));
lean_closure_set(x_49, 3, x_47);
lean_closure_set(x_49, 4, x_48);
lean_inc(x_46);
lean_inc(x_6);
x_50 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_50, 0, x_6);
lean_closure_set(x_50, 1, x_46);
x_51 = lean_alloc_closure((void*)(l_instDecidableEqLex___rarg), 3, 1);
lean_closure_set(x_51, 0, x_50);
x_52 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_52, 0, x_6);
x_53 = lean_alloc_closure((void*)(l_Prod_Lex_decidable___rarg), 7, 5);
lean_closure_set(x_53, 0, x_46);
lean_closure_set(x_53, 1, lean_box(0));
lean_closure_set(x_53, 2, lean_box(0));
lean_closure_set(x_53, 3, x_47);
lean_closure_set(x_53, 4, x_52);
if (lean_is_scalar(x_44)) {
 x_54 = lean_alloc_ctor(0, 7, 0);
} else {
 x_54 = x_44;
}
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_41);
lean_ctor_set(x_54, 2, x_42);
lean_ctor_set(x_54, 3, x_43);
lean_ctor_set(x_54, 4, x_49);
lean_ctor_set(x_54, 5, x_51);
lean_ctor_set(x_54, 6, x_53);
return x_54;
}
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Prod_Lex_decidable___rarg(x_1, lean_box(0), lean_box(0), x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Prod_Lex_decidable___rarg(x_1, lean_box(0), lean_box(0), x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_3 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_1);
x_4 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_3);
lean_inc(x_2);
x_5 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_2);
x_6 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_5);
lean_inc(x_6);
lean_inc(x_4);
x_7 = l_Prod_Lex_linearOrder___rarg(x_4, x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Prod_Lex_orderedAddCancelCommMonoid___rarg(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 6);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 5);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 4);
lean_dec(x_17);
lean_ctor_set(x_10, 1, x_14);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_18, 0, x_4);
x_19 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_19, 0, x_4);
lean_inc(x_6);
x_20 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_20, 0, x_6);
lean_inc(x_19);
lean_inc(x_18);
x_21 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg), 5, 3);
lean_closure_set(x_21, 0, x_18);
lean_closure_set(x_21, 1, x_19);
lean_closure_set(x_21, 2, x_20);
lean_inc(x_18);
lean_inc(x_6);
x_22 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_22, 0, x_6);
lean_closure_set(x_22, 1, x_18);
x_23 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_6);
x_25 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg), 5, 3);
lean_closure_set(x_25, 0, x_18);
lean_closure_set(x_25, 1, x_19);
lean_closure_set(x_25, 2, x_24);
lean_ctor_set(x_7, 6, x_25);
lean_ctor_set(x_7, 5, x_23);
lean_ctor_set(x_7, 4, x_21);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
x_28 = lean_ctor_get(x_7, 2);
x_29 = lean_ctor_get(x_7, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
lean_ctor_set(x_10, 1, x_26);
lean_inc(x_4);
x_30 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_4);
x_31 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_4);
lean_inc(x_6);
x_32 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_6);
lean_inc(x_31);
lean_inc(x_30);
x_33 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg), 5, 3);
lean_closure_set(x_33, 0, x_30);
lean_closure_set(x_33, 1, x_31);
lean_closure_set(x_33, 2, x_32);
lean_inc(x_30);
lean_inc(x_6);
x_34 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_34, 0, x_6);
lean_closure_set(x_34, 1, x_30);
x_35 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_36, 0, x_6);
x_37 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg), 5, 3);
lean_closure_set(x_37, 0, x_30);
lean_closure_set(x_37, 1, x_31);
lean_closure_set(x_37, 2, x_36);
x_38 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_38, 0, x_10);
lean_ctor_set(x_38, 1, x_27);
lean_ctor_set(x_38, 2, x_28);
lean_ctor_set(x_38, 3, x_29);
lean_ctor_set(x_38, 4, x_33);
lean_ctor_set(x_38, 5, x_35);
lean_ctor_set(x_38, 6, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_39 = lean_ctor_get(x_10, 0);
lean_inc(x_39);
lean_dec(x_10);
x_40 = lean_ctor_get(x_7, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_7, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_7, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_7, 3);
lean_inc(x_43);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 x_44 = x_7;
} else {
 lean_dec_ref(x_7);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set(x_45, 1, x_40);
lean_inc(x_4);
x_46 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_46, 0, x_4);
x_47 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_47, 0, x_4);
lean_inc(x_6);
x_48 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_48, 0, x_6);
lean_inc(x_47);
lean_inc(x_46);
x_49 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___rarg), 5, 3);
lean_closure_set(x_49, 0, x_46);
lean_closure_set(x_49, 1, x_47);
lean_closure_set(x_49, 2, x_48);
lean_inc(x_46);
lean_inc(x_6);
x_50 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedCancelCommMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_50, 0, x_6);
lean_closure_set(x_50, 1, x_46);
x_51 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_51, 0, x_50);
x_52 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_52, 0, x_6);
x_53 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___rarg), 5, 3);
lean_closure_set(x_53, 0, x_46);
lean_closure_set(x_53, 1, x_47);
lean_closure_set(x_53, 2, x_52);
if (lean_is_scalar(x_44)) {
 x_54 = lean_alloc_ctor(0, 7, 0);
} else {
 x_54 = x_44;
}
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_41);
lean_ctor_set(x_54, 2, x_42);
lean_ctor_set(x_54, 3, x_43);
lean_ctor_set(x_54, 4, x_49);
lean_ctor_set(x_54, 5, x_51);
lean_ctor_set(x_54, 6, x_53);
return x_54;
}
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_Lex_linearOrderedAddCancelCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_Lex_linearOrderedAddCancelCommMonoid___elambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Prod_Lex(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Monoid_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Prod_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
