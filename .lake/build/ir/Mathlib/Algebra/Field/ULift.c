// Lean compiler output
// Module: Mathlib.Algebra.Field.ULift
// Imports: Init Mathlib.Algebra.Field.Defs Mathlib.Algebra.GroupWithZero.ULift Mathlib.Algebra.Ring.ULift
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
lean_object* l_DivisionRing_toDivisionSemiring___rarg(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_field(lean_object*);
lean_object* l_DivisionSemiring_toGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionRing(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instRatCast___rarg(lean_object*, lean_object*);
lean_object* l_ULift_smul___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instNNRatCast___rarg(lean_object*, lean_object*);
lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionSemiring(lean_object*);
LEAN_EXPORT lean_object* l_ULift_field___rarg(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instNNRatCast(lean_object*);
LEAN_EXPORT lean_object* l_ULift_semifield(lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionSemiring___rarg(lean_object*);
lean_object* l_ULift_subNegAddMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_semifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instRatCast(lean_object*);
lean_object* l_ULift_groupWithZero___rarg(lean_object*);
lean_object* l_ULift_ring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_ULift_semiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instNNRatCast___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_instNNRatCast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_instNNRatCast___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_instRatCast___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_instRatCast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_instRatCast___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_2 = l_DivisionSemiring_toGroupWithZero___rarg(x_1);
lean_inc(x_2);
x_3 = l_ULift_groupWithZero___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_ULift_semiring___rarg(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_ULift_instNNRatCast___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_ULift_divisionSemiring___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_7);
lean_ctor_set(x_12, 3, x_8);
lean_ctor_set(x_12, 4, x_10);
lean_ctor_set(x_12, 5, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_divisionSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_semifield___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Semifield_toDivisionSemiring___rarg(x_1);
lean_inc(x_2);
x_3 = l_ULift_divisionSemiring___rarg(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 5);
lean_dec(x_5);
x_6 = lean_ctor_get(x_3, 3);
lean_dec(x_6);
x_7 = l_DivisionSemiring_toGroupWithZero___rarg(x_2);
x_8 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
lean_ctor_set(x_3, 5, x_9);
lean_ctor_set(x_3, 3, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 4);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_14 = l_DivisionSemiring_toGroupWithZero___rarg(x_2);
x_15 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_1);
x_17 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_17, 2, x_12);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_13);
lean_ctor_set(x_17, 5, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_ULift_semifield(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_semifield___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 7);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = l_DivisionRing_toDivisionSemiring___rarg(x_1);
x_3 = l_DivisionSemiring_toGroupWithZero___rarg(x_2);
lean_inc(x_3);
x_4 = l_ULift_groupWithZero___rarg(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_ULift_ring___rarg(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_3);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_ULift_instNNRatCast___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_ULift_instRatCast___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_ULift_divisionRing___rarg___lambda__1), 3, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_alloc_closure((void*)(l_ULift_divisionRing___rarg___lambda__2), 3, 1);
lean_closure_set(x_15, 0, x_1);
x_16 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_7);
lean_ctor_set(x_16, 2, x_8);
lean_ctor_set(x_16, 3, x_9);
lean_ctor_set(x_16, 4, x_11);
lean_ctor_set(x_16, 5, x_13);
lean_ctor_set(x_16, 6, x_14);
lean_ctor_set(x_16, 7, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_ULift_divisionRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_divisionRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_field___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_2 = l_Field_toSemifield___rarg(x_1);
lean_inc(x_2);
x_3 = l_ULift_semifield___rarg(x_2);
lean_inc(x_1);
x_4 = l_Field_toDivisionRing___rarg(x_1);
lean_inc(x_4);
x_5 = l_ULift_divisionRing___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 4);
lean_inc(x_10);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_12 = lean_ctor_get(x_5, 7);
lean_dec(x_12);
x_13 = lean_ctor_get(x_5, 6);
lean_dec(x_13);
x_14 = lean_ctor_get(x_5, 4);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 3);
lean_dec(x_15);
x_16 = lean_ctor_get(x_5, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_5, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_5, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_6, 3);
lean_dec(x_20);
x_21 = lean_ctor_get(x_6, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
lean_dec(x_4);
x_23 = l_Ring_toAddGroupWithOne___rarg(x_22);
x_24 = l_AddGroupWithOne_toAddGroup___rarg(x_23);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_27, 0, x_26);
lean_ctor_set(x_6, 3, x_27);
lean_ctor_set(x_6, 0, x_7);
lean_inc(x_2);
x_28 = l_Semifield_toDivisionSemiring___rarg(x_2);
x_29 = l_DivisionSemiring_toGroupWithZero___rarg(x_28);
x_30 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_31, 0, x_2);
x_32 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_32, 0, x_1);
lean_ctor_set(x_5, 7, x_32);
lean_ctor_set(x_5, 6, x_31);
lean_ctor_set(x_5, 4, x_10);
lean_ctor_set(x_5, 3, x_30);
lean_ctor_set(x_5, 2, x_9);
lean_ctor_set(x_5, 1, x_8);
return x_5;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_33 = lean_ctor_get(x_6, 1);
x_34 = lean_ctor_get(x_6, 2);
x_35 = lean_ctor_get(x_6, 4);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_6);
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
lean_dec(x_4);
x_37 = l_Ring_toAddGroupWithOne___rarg(x_36);
x_38 = l_AddGroupWithOne_toAddGroup___rarg(x_37);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 3);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_40, 0, x_39);
x_41 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_42, 0, x_7);
lean_ctor_set(x_42, 1, x_33);
lean_ctor_set(x_42, 2, x_34);
lean_ctor_set(x_42, 3, x_41);
lean_ctor_set(x_42, 4, x_35);
lean_inc(x_2);
x_43 = l_Semifield_toDivisionSemiring___rarg(x_2);
x_44 = l_DivisionSemiring_toGroupWithZero___rarg(x_43);
x_45 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_45, 0, x_44);
x_46 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_46, 0, x_2);
x_47 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_47, 0, x_1);
lean_ctor_set(x_5, 7, x_47);
lean_ctor_set(x_5, 6, x_46);
lean_ctor_set(x_5, 4, x_10);
lean_ctor_set(x_5, 3, x_45);
lean_ctor_set(x_5, 2, x_9);
lean_ctor_set(x_5, 1, x_8);
lean_ctor_set(x_5, 0, x_42);
return x_5;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_48 = lean_ctor_get(x_5, 5);
lean_inc(x_48);
lean_dec(x_5);
x_49 = lean_ctor_get(x_6, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_6, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_6, 4);
lean_inc(x_51);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_52 = x_6;
} else {
 lean_dec_ref(x_6);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_4, 0);
lean_inc(x_53);
lean_dec(x_4);
x_54 = l_Ring_toAddGroupWithOne___rarg(x_53);
x_55 = l_AddGroupWithOne_toAddGroup___rarg(x_54);
lean_dec(x_54);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_57, 0, x_56);
x_58 = lean_alloc_closure((void*)(l_ULift_subNegAddMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_58, 0, x_57);
if (lean_is_scalar(x_52)) {
 x_59 = lean_alloc_ctor(0, 5, 0);
} else {
 x_59 = x_52;
}
lean_ctor_set(x_59, 0, x_7);
lean_ctor_set(x_59, 1, x_49);
lean_ctor_set(x_59, 2, x_50);
lean_ctor_set(x_59, 3, x_58);
lean_ctor_set(x_59, 4, x_51);
lean_inc(x_2);
x_60 = l_Semifield_toDivisionSemiring___rarg(x_2);
x_61 = l_DivisionSemiring_toGroupWithZero___rarg(x_60);
x_62 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_62, 0, x_61);
x_63 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_63, 0, x_2);
x_64 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_64, 0, x_1);
x_65 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_8);
lean_ctor_set(x_65, 2, x_9);
lean_ctor_set(x_65, 3, x_62);
lean_ctor_set(x_65, 4, x_10);
lean_ctor_set(x_65, 5, x_48);
lean_ctor_set(x_65, 6, x_63);
lean_ctor_set(x_65, 7, x_64);
return x_65;
}
}
}
LEAN_EXPORT lean_object* l_ULift_field(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_field___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_ULift(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Field_ULift(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
