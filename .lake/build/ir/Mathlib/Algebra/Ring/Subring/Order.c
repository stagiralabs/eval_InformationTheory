// Lean compiler output
// Module: Mathlib.Algebra.Ring.Subring.Order
// Imports: Init Mathlib.Algebra.Order.Hom.Ring Mathlib.Algebra.Order.Ring.InjSurj Mathlib.Algebra.Ring.Subring.Defs
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
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedRing(lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toOrderedCommRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedCommRing___rarg(lean_object*, lean_object*);
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_toOrderedCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedCommRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_toOrderedRing(lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toOrderedCommRing(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subring_toOrderedRing___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_orderedSubtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedRing___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_orderedSubtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subring_toOrderedCommRing(lean_object*);
lean_object* l_Subring_subtype___rarg___boxed(lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
lean_object* l_SubringClass_toRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toOrderedRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedCommRing(lean_object*);
static lean_object* l_Subring_orderedSubtype___closed__1;
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedCommRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StrictOrderedRing_toOrderedRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toOrderedRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubringClass_toOrderedRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_SubringClass_toRing___rarg(x_5, x_1, lean_box(0), x_2);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Subtype_partialOrder(lean_box(0), x_7, lean_box(0));
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toOrderedRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubringClass_toOrderedRing___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toOrderedCommRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubringClass_toOrderedRing___rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toOrderedCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubringClass_toOrderedCommRing___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_StrictOrderedRing_toOrderedRing___rarg(x_5);
x_7 = l_SubringClass_toOrderedRing___rarg(x_1, x_2, x_6, lean_box(0));
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_9 = lean_ctor_get(x_7, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Subtype_partialOrder(lean_box(0), x_10, lean_box(0));
lean_dec(x_10);
lean_ctor_set(x_7, 1, x_11);
x_12 = l_LinearOrderedRing_toLinearOrder___rarg(x_3);
lean_inc(x_12);
x_13 = l_Subtype_instLinearOrder___rarg(x_12, lean_box(0));
x_14 = l_LinearOrder_toLattice___rarg(x_13);
lean_inc(x_14);
x_15 = l_Lattice_toSemilatticeInf___rarg(x_14);
x_16 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_13, 6);
lean_dec(x_20);
x_21 = lean_ctor_get(x_13, 5);
lean_dec(x_21);
x_22 = lean_ctor_get(x_13, 4);
lean_dec(x_22);
x_23 = lean_ctor_get(x_13, 2);
lean_dec(x_23);
x_24 = lean_ctor_get(x_13, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_13, 0);
lean_dec(x_25);
lean_inc(x_12);
x_26 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_12);
lean_inc(x_12);
x_27 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_27, 0, x_12);
x_28 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_28, 0, x_12);
lean_ctor_set(x_13, 6, x_28);
lean_ctor_set(x_13, 5, x_27);
lean_ctor_set(x_13, 4, x_26);
lean_ctor_set(x_13, 2, x_18);
lean_ctor_set(x_13, 1, x_16);
lean_ctor_set(x_13, 0, x_7);
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_13, 3);
lean_inc(x_29);
lean_dec(x_13);
lean_inc(x_12);
x_30 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_12);
lean_inc(x_12);
x_31 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_12);
x_32 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_12);
x_33 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_33, 0, x_7);
lean_ctor_set(x_33, 1, x_16);
lean_ctor_set(x_33, 2, x_18);
lean_ctor_set(x_33, 3, x_29);
lean_ctor_set(x_33, 4, x_30);
lean_ctor_set(x_33, 5, x_31);
lean_ctor_set(x_33, 6, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_34 = lean_ctor_get(x_7, 0);
lean_inc(x_34);
lean_dec(x_7);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
lean_dec(x_5);
x_36 = l_Subtype_partialOrder(lean_box(0), x_35, lean_box(0));
lean_dec(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_LinearOrderedRing_toLinearOrder___rarg(x_3);
lean_inc(x_38);
x_39 = l_Subtype_instLinearOrder___rarg(x_38, lean_box(0));
x_40 = l_LinearOrder_toLattice___rarg(x_39);
lean_inc(x_40);
x_41 = l_Lattice_toSemilatticeInf___rarg(x_40);
x_42 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_42, 0, x_41);
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_44, 0, x_43);
x_45 = lean_ctor_get(x_39, 3);
lean_inc(x_45);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 lean_ctor_release(x_39, 3);
 lean_ctor_release(x_39, 4);
 lean_ctor_release(x_39, 5);
 lean_ctor_release(x_39, 6);
 x_46 = x_39;
} else {
 lean_dec_ref(x_39);
 x_46 = lean_box(0);
}
lean_inc(x_38);
x_47 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_47, 0, x_38);
lean_inc(x_38);
x_48 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_48, 0, x_38);
x_49 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_49, 0, x_38);
if (lean_is_scalar(x_46)) {
 x_50 = lean_alloc_ctor(0, 7, 0);
} else {
 x_50 = x_46;
}
lean_ctor_set(x_50, 0, x_37);
lean_ctor_set(x_50, 1, x_42);
lean_ctor_set(x_50, 2, x_44);
lean_ctor_set(x_50, 3, x_45);
lean_ctor_set(x_50, 4, x_47);
lean_ctor_set(x_50, 5, x_48);
lean_ctor_set(x_50, 6, x_49);
return x_50;
}
}
}
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubringClass_toLinearOrderedRing___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedCommRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubringClass_toLinearOrderedRing___rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubringClass_toLinearOrderedCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubringClass_toLinearOrderedCommRing___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subring_toOrderedRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubringClass_toOrderedRing___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subring_toOrderedRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subring_toOrderedRing___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subring_toOrderedCommRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubringClass_toOrderedRing___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subring_toOrderedCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subring_toOrderedCommRing___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubringClass_toLinearOrderedRing___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subring_toLinearOrderedRing___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedCommRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubringClass_toLinearOrderedRing___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subring_toLinearOrderedCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subring_toLinearOrderedCommRing___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Subring_orderedSubtype___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subring_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subring_orderedSubtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subring_orderedSubtype___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subring_orderedSubtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subring_orderedSubtype(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Hom_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Subring_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Hom_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Subring_orderedSubtype___closed__1 = _init_l_Subring_orderedSubtype___closed__1();
lean_mark_persistent(l_Subring_orderedSubtype___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
