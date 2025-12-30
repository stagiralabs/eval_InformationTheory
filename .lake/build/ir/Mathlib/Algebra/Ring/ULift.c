// Lean compiler output
// Module: Mathlib.Algebra.Ring.ULift
// Imports: Init Mathlib.Algebra.Group.ULift Mathlib.Algebra.Ring.Equiv
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
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ringEquiv___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_semiring(lean_object*);
static lean_object* l_ULift_ringEquiv___closed__2;
LEAN_EXPORT lean_object* l_ULift_distrib(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroClass___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing(lean_object*);
lean_object* l_NonAssocRing_toAddCommGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroClass___rarg(lean_object*);
lean_object* l_ULift_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommSemiring___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_ULift_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing(lean_object*);
lean_object* l_ULift_smul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalRing(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroClass(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ringEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_ring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalSemiring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_semiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_commRing(lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_commSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ring___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distrib___rarg(lean_object*);
lean_object* l_ULift_addMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distrib___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonAssocRing(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ring___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distrib___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_ULift_neg___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_ULift_subNegAddMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_commSemiring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_commRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ringEquiv___lambda__1(lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommSemiring(lean_object*);
lean_object* l_ULift_mul___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_ULift_ringEquiv___closed__1;
LEAN_EXPORT lean_object* l_ULift_semiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg(lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_ringEquiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroClass___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulZeroClass___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_mulZeroClass___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_dec(x_4);
lean_ctor_set(x_1, 0, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_ULift_mulZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulZeroClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_distrib___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_distrib___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_distrib___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_distrib___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_ULift_distrib___rarg___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distrib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_distrib___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_19, 0, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
lean_inc(x_2);
x_3 = l_ULift_addMonoidWithOne___rarg(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_ctor_get(x_4, 2);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
lean_ctor_set(x_4, 2, x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_ctor_get(x_3, 2);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 2);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_3, 2);
lean_inc(x_29);
lean_dec(x_3);
x_30 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_30, 0, x_2);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_31, 2, x_30);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_19, 0, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_semiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_semiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_3 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_2);
lean_inc(x_3);
x_4 = l_ULift_addMonoidWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_ctor_get(x_5, 2);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
lean_ctor_set(x_5, 2, x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_4, 2);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_17, 0, x_3);
x_18 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_18, 0, x_1);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_17);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_25);
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_ctor_get(x_4, 2);
lean_inc(x_31);
lean_dec(x_4);
x_32 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_32, 0, x_3);
x_33 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_33, 0, x_1);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_30);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_34, 3, x_33);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_ULift_semiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_semiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_ringEquiv___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_ULift_ringEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_ringEquiv___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ULift_ringEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ULift_ringEquiv___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_ringEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ULift_ringEquiv___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_ringEquiv___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ULift_ringEquiv___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_ringEquiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ULift_ringEquiv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_19, 0, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalCommSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_commSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = l_ULift_semiring___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 3);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_dec(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_4, 2);
lean_dec(x_12);
x_13 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_14 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
lean_ctor_set(x_4, 2, x_18);
x_19 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_19, 0, x_14);
x_20 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_20, 0, x_1);
lean_ctor_set(x_2, 3, x_20);
lean_ctor_set(x_2, 2, x_19);
return x_2;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_24 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_23);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_27, 0, x_26);
x_28 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_22);
lean_ctor_set(x_29, 2, x_28);
lean_ctor_set(x_3, 0, x_29);
x_30 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_30, 0, x_24);
x_31 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_31, 0, x_1);
lean_ctor_set(x_2, 3, x_31);
lean_ctor_set(x_2, 2, x_30);
return x_2;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_dec(x_3);
x_33 = lean_ctor_get(x_4, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_4, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_35 = x_4;
} else {
 lean_dec_ref(x_4);
 x_35 = lean_box(0);
}
x_36 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_37 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_40, 0, x_39);
x_41 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_41, 0, x_40);
if (lean_is_scalar(x_35)) {
 x_42 = lean_alloc_ctor(0, 3, 0);
} else {
 x_42 = x_35;
}
lean_ctor_set(x_42, 0, x_33);
lean_ctor_set(x_42, 1, x_34);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_32);
x_44 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_44, 0, x_37);
x_45 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_45, 0, x_1);
lean_ctor_set(x_2, 3, x_45);
lean_ctor_set(x_2, 2, x_44);
lean_ctor_set(x_2, 0, x_43);
return x_2;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_46 = lean_ctor_get(x_2, 1);
lean_inc(x_46);
lean_dec(x_2);
x_47 = lean_ctor_get(x_3, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_48 = x_3;
} else {
 lean_dec_ref(x_3);
 x_48 = lean_box(0);
}
x_49 = lean_ctor_get(x_4, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_4, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_51 = x_4;
} else {
 lean_dec_ref(x_4);
 x_51 = lean_box(0);
}
x_52 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_53 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_52);
lean_dec(x_52);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_54, 2);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_56, 0, x_55);
x_57 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_57, 0, x_56);
if (lean_is_scalar(x_51)) {
 x_58 = lean_alloc_ctor(0, 3, 0);
} else {
 x_58 = x_51;
}
lean_ctor_set(x_58, 0, x_49);
lean_ctor_set(x_58, 1, x_50);
lean_ctor_set(x_58, 2, x_57);
if (lean_is_scalar(x_48)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_48;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_47);
x_60 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_60, 0, x_53);
x_61 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_61, 0, x_1);
x_62 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_46);
lean_ctor_set(x_62, 2, x_60);
lean_ctor_set(x_62, 3, x_61);
return x_62;
}
}
}
LEAN_EXPORT lean_object* l_ULift_commSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_commSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_5 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_8);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_ctor_get(x_8, 3);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_16);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_23, 0, x_1);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_4, 0, x_22);
return x_4;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_24 = lean_ctor_get(x_4, 1);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_29);
x_31 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_25);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_33, 0, x_32);
x_34 = lean_ctor_get(x_25, 2);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_ctor_get(x_25, 3);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_40, 0, x_1);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalNonAssocRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_8);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_ctor_get(x_8, 3);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_16);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_23, 0, x_1);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_4, 0, x_22);
return x_4;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_24 = lean_ctor_get(x_4, 1);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_29);
x_31 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_25);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_33, 0, x_32);
x_34 = lean_ctor_get(x_25, 2);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_ctor_get(x_25, 3);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_40, 0, x_1);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_2, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonAssocRing___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_3);
x_4 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_3);
x_5 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_4);
lean_dec(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = l_NonAssocRing_toAddCommGroupWithOne___rarg(x_1);
x_10 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_7);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = l_AddGroupWithOne_toAddGroup___rarg(x_10);
lean_dec(x_10);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
x_23 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_ctor_get(x_21, 3);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_25, 0, x_24);
x_26 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_20);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_28, 0, x_3);
lean_ctor_set(x_5, 1, x_28);
lean_ctor_set(x_5, 0, x_27);
x_29 = lean_ctor_get(x_11, 2);
lean_inc(x_29);
x_30 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_30, 0, x_11);
x_31 = lean_alloc_closure((void*)(l_ULift_nonAssocRing___rarg___lambda__2), 2, 1);
lean_closure_set(x_31, 0, x_1);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 2, x_30);
lean_ctor_set(x_32, 3, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_33 = lean_ctor_get(x_5, 1);
lean_inc(x_33);
lean_dec(x_5);
x_34 = l_NonAssocRing_toAddCommGroupWithOne___rarg(x_1);
x_35 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 2);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_39, 0, x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_2);
lean_ctor_set(x_41, 1, x_33);
lean_ctor_set(x_41, 2, x_40);
x_42 = lean_ctor_get(x_3, 0);
lean_inc(x_42);
x_43 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_42);
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_45, 0, x_44);
x_46 = l_AddGroupWithOne_toAddGroup___rarg(x_35);
lean_dec(x_35);
x_47 = lean_ctor_get(x_46, 2);
lean_inc(x_47);
x_48 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_48, 0, x_47);
x_49 = lean_ctor_get(x_46, 3);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_50, 0, x_49);
x_51 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_41);
lean_ctor_set(x_52, 1, x_45);
lean_ctor_set(x_52, 2, x_48);
lean_ctor_set(x_52, 3, x_51);
x_53 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_53, 0, x_3);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_ctor_get(x_36, 2);
lean_inc(x_55);
x_56 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_56, 0, x_36);
x_57 = lean_alloc_closure((void*)(l_ULift_nonAssocRing___rarg___lambda__2), 2, 1);
lean_closure_set(x_57, 0, x_1);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_54);
lean_ctor_set(x_58, 1, x_55);
lean_ctor_set(x_58, 2, x_56);
lean_ctor_set(x_58, 3, x_57);
return x_58;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonAssocRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonAssocRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_ring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Ring_toNonAssocRing___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, x_2, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ULift_ring___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_ring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_ring___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_4);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_8 = lean_ctor_get(x_6, 1);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_inc(x_1);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_17, 0, x_4);
lean_ctor_set(x_6, 1, x_17);
lean_ctor_set(x_6, 0, x_16);
x_18 = lean_ctor_get(x_11, 2);
lean_inc(x_18);
x_19 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_19, 0, x_11);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_21);
x_23 = l_Ring_toAddCommGroup___rarg(x_1);
x_24 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_23);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = l_AddGroupWithOne_toAddGroup___rarg(x_10);
lean_dec(x_10);
x_28 = lean_ctor_get(x_27, 2);
lean_inc(x_28);
x_29 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_ctor_get(x_27, 3);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_31, 0, x_30);
x_32 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_32, 0, x_31);
x_33 = lean_alloc_closure((void*)(l_ULift_ring___rarg___lambda__2), 2, 1);
lean_closure_set(x_33, 0, x_1);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_32);
lean_ctor_set(x_34, 4, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_35 = lean_ctor_get(x_6, 1);
lean_inc(x_35);
lean_dec(x_6);
lean_inc(x_1);
x_36 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_40, 0, x_39);
x_41 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_43, 0, x_4);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_ctor_get(x_37, 2);
lean_inc(x_45);
x_46 = lean_alloc_closure((void*)(l_ULift_nonAssocSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_46, 0, x_37);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_alloc_closure((void*)(l_ULift_semiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_45);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_49, 3, x_48);
x_50 = l_Ring_toAddCommGroup___rarg(x_1);
x_51 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_50);
lean_dec(x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_53, 0, x_52);
x_54 = l_AddGroupWithOne_toAddGroup___rarg(x_36);
lean_dec(x_36);
x_55 = lean_ctor_get(x_54, 2);
lean_inc(x_55);
x_56 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_56, 0, x_55);
x_57 = lean_ctor_get(x_54, 3);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_58, 0, x_57);
x_59 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_59, 0, x_58);
x_60 = lean_alloc_closure((void*)(l_ULift_ring___rarg___lambda__2), 2, 1);
lean_closure_set(x_60, 0, x_1);
x_61 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_61, 0, x_49);
lean_ctor_set(x_61, 1, x_53);
lean_ctor_set(x_61, 2, x_56);
lean_ctor_set(x_61, 3, x_59);
lean_ctor_set(x_61, 4, x_60);
return x_61;
}
}
}
LEAN_EXPORT lean_object* l_ULift_ring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_ring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_1);
x_5 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalCommRing___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_1);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_8);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_ctor_get(x_8, 3);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_16);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_23, 0, x_3);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_4, 0, x_22);
return x_4;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_24 = lean_ctor_get(x_4, 1);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_closure((void*)(l_ULift_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_29);
x_31 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_25);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_closure((void*)(l_ULift_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_33, 0, x_32);
x_34 = lean_ctor_get(x_25, 2);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_ULift_sub___elambda__1___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_ctor_get(x_25, 3);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_nonUnitalNonAssocSemiring___rarg___lambda__2), 3, 1);
lean_closure_set(x_40, 0, x_3);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_ULift_nonUnitalCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_nonUnitalCommRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_commRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ULift_ring___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_commRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_commRing___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Equiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_ULift(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ULift_ringEquiv___closed__1 = _init_l_ULift_ringEquiv___closed__1();
lean_mark_persistent(l_ULift_ringEquiv___closed__1);
l_ULift_ringEquiv___closed__2 = _init_l_ULift_ringEquiv___closed__2();
lean_mark_persistent(l_ULift_ringEquiv___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
