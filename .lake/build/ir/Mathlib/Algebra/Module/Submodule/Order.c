// Lean compiler output
// Module: Mathlib.Algebra.Module.Submodule.Order
// Imports: Init Mathlib.Algebra.Module.Submodule.Defs Mathlib.Algebra.Order.Group.InjSurj
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
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_addCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Submodule_addCommMonoid___rarg(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Subtype_partialOrder(lean_box(0), x_6, lean_box(0));
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toOrderedAddCommMonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedAddCommMonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedAddCommMonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Submodule_toOrderedAddCommMonoid___rarg(x_4, x_2, x_3);
x_6 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_1);
lean_inc(x_6);
x_7 = l_Subtype_instLinearOrder___rarg(x_6, lean_box(0));
x_8 = l_LinearOrder_toLattice___rarg(x_7);
lean_inc(x_8);
x_9 = l_Lattice_toSemilatticeInf___rarg(x_8);
x_10 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 6);
lean_dec(x_14);
x_15 = lean_ctor_get(x_7, 5);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 4);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
lean_inc(x_6);
x_20 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_20, 0, x_6);
lean_inc(x_6);
x_21 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_21, 0, x_6);
x_22 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_22, 0, x_6);
lean_ctor_set(x_7, 6, x_22);
lean_ctor_set(x_7, 5, x_21);
lean_ctor_set(x_7, 4, x_20);
lean_ctor_set(x_7, 2, x_12);
lean_ctor_set(x_7, 1, x_10);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_7, 3);
lean_inc(x_23);
lean_dec(x_7);
lean_inc(x_6);
x_24 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_6);
lean_inc(x_6);
x_25 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_25, 0, x_6);
x_26 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_6);
x_27 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_10);
lean_ctor_set(x_27, 2, x_12);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set(x_27, 4, x_24);
lean_ctor_set(x_27, 5, x_25);
lean_ctor_set(x_27, 6, x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toLinearOrderedAddCommMonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedAddCommMonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedAddCommMonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedAddCommMonoid___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toOrderedCancelAddCommMonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedCancelAddCommMonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedCancelAddCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedCancelAddCommMonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Submodule_toOrderedAddCommMonoid___rarg(x_4, x_2, x_3);
x_6 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_1);
x_7 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_6);
lean_inc(x_7);
x_8 = l_Subtype_instLinearOrder___rarg(x_7, lean_box(0));
x_9 = l_LinearOrder_toLattice___rarg(x_8);
lean_inc(x_9);
x_10 = l_Lattice_toSemilatticeInf___rarg(x_9);
x_11 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_8, 6);
lean_dec(x_15);
x_16 = lean_ctor_get(x_8, 5);
lean_dec(x_16);
x_17 = lean_ctor_get(x_8, 4);
lean_dec(x_17);
x_18 = lean_ctor_get(x_8, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 1);
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_dec(x_20);
lean_inc(x_7);
x_21 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_21, 0, x_7);
lean_inc(x_7);
x_22 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_22, 0, x_7);
x_23 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_7);
lean_ctor_set(x_8, 6, x_23);
lean_ctor_set(x_8, 5, x_22);
lean_ctor_set(x_8, 4, x_21);
lean_ctor_set(x_8, 2, x_13);
lean_ctor_set(x_8, 1, x_11);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_8, 3);
lean_inc(x_24);
lean_dec(x_8);
lean_inc(x_7);
x_25 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_25, 0, x_7);
lean_inc(x_7);
x_26 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_7);
x_27 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_27, 0, x_7);
x_28 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_28, 0, x_5);
lean_ctor_set(x_28, 1, x_11);
lean_ctor_set(x_28, 2, x_13);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_25);
lean_ctor_set(x_28, 5, x_26);
lean_ctor_set(x_28, 6, x_27);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedCancelAddCommMonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedCancelAddCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedCancelAddCommMonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Submodule_addCommGroup___rarg(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Subtype_partialOrder(lean_box(0), x_6, lean_box(0));
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toOrderedAddCommGroup___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedAddCommGroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toOrderedAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toOrderedAddCommGroup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Submodule_toOrderedAddCommGroup___rarg(x_4, x_2, x_3);
x_6 = l_LinearOrderedAddCommGroup_toLinearOrder___rarg(x_1);
lean_inc(x_6);
x_7 = l_Subtype_instLinearOrder___rarg(x_6, lean_box(0));
x_8 = l_LinearOrder_toLattice___rarg(x_7);
lean_inc(x_8);
x_9 = l_Lattice_toSemilatticeInf___rarg(x_8);
x_10 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 6);
lean_dec(x_14);
x_15 = lean_ctor_get(x_7, 5);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 4);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
lean_inc(x_6);
x_20 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_20, 0, x_6);
lean_inc(x_6);
x_21 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_21, 0, x_6);
x_22 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_22, 0, x_6);
lean_ctor_set(x_7, 6, x_22);
lean_ctor_set(x_7, 5, x_21);
lean_ctor_set(x_7, 4, x_20);
lean_ctor_set(x_7, 2, x_12);
lean_ctor_set(x_7, 1, x_10);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_7, 3);
lean_inc(x_23);
lean_dec(x_7);
lean_inc(x_6);
x_24 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_6);
lean_inc(x_6);
x_25 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_25, 0, x_6);
x_26 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_6);
x_27 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_10);
lean_ctor_set(x_27, 2, x_12);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set(x_27, 4, x_24);
lean_ctor_set(x_27, 5, x_25);
lean_ctor_set(x_27, 6, x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toLinearOrderedAddCommGroup___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedAddCommGroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toLinearOrderedAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toLinearOrderedAddCommGroup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Submodule_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_InjSurj(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_Submodule_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Submodule_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
