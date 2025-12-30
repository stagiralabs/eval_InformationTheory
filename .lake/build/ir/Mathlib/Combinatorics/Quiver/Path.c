// Lean compiler output
// Module: Mathlib.Combinatorics.Quiver.Path
// Imports: Init Mathlib.Combinatorics.Quiver.Prefunctor Mathlib.Logic.Lemmas Batteries.Data.List.Basic
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
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_recOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__inst___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71_(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_toList___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_length___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__inst(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_toList(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_length___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prefunctor_mapPath___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_toList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_recOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prefunctor_mapPath___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_length(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_comp(lean_object*);
LEAN_EXPORT lean_object* l_Prefunctor_mapPath(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_recOn(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 3);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_10);
lean_inc(x_5);
x_12 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg(x_1, x_2, lean_box(0), x_4, x_5, x_8, x_10);
x_13 = lean_apply_5(x_5, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_recOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____rarg(x_1, x_2, lean_box(0), x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_recOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_recOn___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_recOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quiver_Path_recOn___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 3);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_10);
lean_inc(x_5);
x_12 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_8, x_10);
x_13 = lean_apply_5(x_5, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_inc(x_8);
x_10 = lean_apply_3(x_3, x_5, x_9, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_box(0);
x_8 = lean_box(0);
lean_inc(x_6);
lean_inc(x_2);
x_9 = lean_apply_3(x_6, x_2, x_7, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Quiver_Path_brecOn___rarg___lambda__1___boxed), 8, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_6);
x_12 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg(x_1, x_2, lean_box(0), x_10, x_11, x_4, x_5);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_brecOn___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path_brecOn___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Quiver_Path_brecOn___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_brecOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quiver_Path_brecOn___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 3);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_10);
lean_inc(x_5);
x_12 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_8, x_10);
x_13 = lean_apply_5(x_5, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_7);
x_10 = lean_apply_1(x_1, x_3);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_11, x_6);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_add(x_12, x_13);
lean_dec(x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Quiver_Path___sizeOf__1___rarg___lambda__1___boxed), 6, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg(x_1, x_2, lean_box(0), x_7, x_6, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path___sizeOf__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quiver_Path_rec____x40_Mathlib_Combinatorics_Quiver_Path___hyg_71____at_Quiver_Path___sizeOf__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quiver_Path___sizeOf__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Quiver_Path___sizeOf__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__inst___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Quiver_Path___sizeOf__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
lean_closure_set(x_5, 3, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path___sizeOf__inst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path___sizeOf__inst___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Hom_toPath___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Hom_toPath___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quiver_Hom_toPath___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_length___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 2);
x_8 = l_Quiver_Path_length___rarg(x_1, x_2, x_6, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_length(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_length___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_length___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quiver_Path_length___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_instInhabited___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_Path_instInhabited___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_4);
lean_inc(x_5);
return x_5;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 2);
x_10 = lean_ctor_get(x_6, 1);
lean_dec(x_10);
lean_inc(x_8);
x_11 = l_Quiver_Path_comp___rarg(x_1, x_2, x_3, x_8, x_5, x_9);
lean_ctor_set(x_6, 2, x_11);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 2);
x_14 = lean_ctor_get(x_6, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
lean_inc(x_12);
x_15 = l_Quiver_Path_comp___rarg(x_1, x_2, x_3, x_12, x_5, x_13);
x_16 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_16, 3, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_comp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_comp___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quiver_Path_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_toList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 2);
x_8 = l_Quiver_Path_toList___rarg(x_1, x_2, x_6, x_7);
lean_inc(x_6);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_toList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quiver_Path_toList___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_Path_toList___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quiver_Path_toList___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_4);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_4(x_4, x_1, x_5, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Combinatorics_Quiver_Path_0__Quiver_Path_length_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prefunctor_mapPath___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 2);
x_12 = lean_ctor_get(x_7, 3);
x_13 = lean_ctor_get(x_7, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_inc(x_14);
lean_inc(x_10);
x_15 = lean_apply_1(x_14, x_10);
lean_inc(x_6);
x_16 = lean_apply_1(x_14, x_6);
lean_inc(x_10);
lean_inc(x_4);
x_17 = l_Prefunctor_mapPath___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_10, x_11);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_apply_3(x_18, x_10, x_6, x_12);
lean_ctor_set(x_7, 3, x_19);
lean_ctor_set(x_7, 2, x_17);
lean_ctor_set(x_7, 1, x_16);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 2);
x_22 = lean_ctor_get(x_7, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_23 = lean_ctor_get(x_4, 0);
lean_inc(x_23);
lean_inc(x_23);
lean_inc(x_20);
x_24 = lean_apply_1(x_23, x_20);
lean_inc(x_6);
x_25 = lean_apply_1(x_23, x_6);
lean_inc(x_20);
lean_inc(x_4);
x_26 = l_Prefunctor_mapPath___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_20, x_21);
x_27 = lean_ctor_get(x_4, 1);
lean_inc(x_27);
lean_dec(x_4);
x_28 = lean_apply_3(x_27, x_20, x_6, x_22);
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Prefunctor_mapPath(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Prefunctor_mapPath___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Prefunctor_mapPath___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Prefunctor_mapPath___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Quiver_Prefunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Quiver_Path(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Quiver_Prefunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
