// Lean compiler output
// Module: Mathlib.Algebra.Order.Nonneg.Field
// Imports: Init Mathlib.Algebra.Order.Field.Canonical Mathlib.Algebra.Order.Field.InjSurj Mathlib.Algebra.Order.Nonneg.Ring Mathlib.Data.Nat.Cast.Order.Ring
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
lean_object* l_LinearOrderedSemifield_toSemifield___rarg(lean_object*);
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_instNNRatSMul(lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_DivisionSemiring_toGroupWithZero___rarg(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero___rarg(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_div___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_zpow(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield___rarg(lean_object*);
lean_object* l_Set_Ici_semilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_inv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_instNNRatSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_inv(lean_object*);
lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_instNNRatCast(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_zpow___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Set_Ici_semilatticeSup___rarg(lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_instNNRatCast___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield(lean_object*);
lean_object* l_Nonneg_strictOrderedSemiring___rarg(lean_object*);
lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_div(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_inv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_4 = l_Semifield_toCommGroupWithZero___rarg(x_3);
x_5 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_4);
x_6 = l_DivInvOneMonoid_toInvOneClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nonneg_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_div___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nonneg_div(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_zpow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_5 = l_Semifield_toDivisionSemiring___rarg(x_4);
x_6 = l_DivisionSemiring_toGroupWithZero___rarg(x_5);
x_7 = l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(x_6, x_3, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nonneg_zpow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_zpow___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_instNNRatCast___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Nonneg_instNNRatCast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_instNNRatCast___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_instNNRatSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_5 = l_Semifield_toDivisionSemiring___elambda__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nonneg_instNNRatSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_instNNRatSMul___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_DivisionSemiring_toGroupWithZero___rarg(x_1);
x_5 = l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Nonneg_strictOrderedSemiring___rarg(x_3);
x_5 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_2);
x_6 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_5);
x_7 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_6);
x_8 = l_LinearOrder_toLattice___rarg(x_7);
lean_inc(x_8);
x_9 = l_Lattice_toSemilatticeInf___rarg(x_8);
lean_inc(x_1);
x_10 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
lean_inc(x_10);
x_11 = l_Semifield_toDivisionSemiring___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = l_Semiring_toNonAssocSemiring___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_14);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Set_Ici_semilatticeInf___rarg(x_9, x_16);
x_18 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = l_Set_Ici_semilatticeSup___rarg(x_19, x_16);
lean_dec(x_16);
x_21 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_21, 0, x_20);
lean_inc(x_7);
x_22 = l_Subtype_instLinearOrder___rarg(x_7, lean_box(0));
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_24 = lean_ctor_get(x_22, 6);
lean_dec(x_24);
x_25 = lean_ctor_get(x_22, 5);
lean_dec(x_25);
x_26 = lean_ctor_get(x_22, 4);
lean_dec(x_26);
x_27 = lean_ctor_get(x_22, 2);
lean_dec(x_27);
x_28 = lean_ctor_get(x_22, 1);
lean_dec(x_28);
x_29 = lean_ctor_get(x_22, 0);
lean_dec(x_29);
lean_inc(x_7);
x_30 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_7);
lean_inc(x_7);
x_31 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_31, 0, x_7);
x_32 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_32, 0, x_7);
lean_ctor_set(x_22, 6, x_32);
lean_ctor_set(x_22, 5, x_31);
lean_ctor_set(x_22, 4, x_30);
lean_ctor_set(x_22, 2, x_21);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 0, x_4);
lean_inc(x_1);
x_33 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_33, 0, x_1);
lean_inc(x_1);
x_34 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_34, 0, x_1);
x_35 = lean_alloc_closure((void*)(l_Nonneg_instNNRatCast___rarg), 2, 1);
lean_closure_set(x_35, 0, x_1);
x_36 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_36, 0, x_11);
x_37 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_37, 0, x_10);
x_38 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_38, 0, x_22);
lean_ctor_set(x_38, 1, x_33);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_36);
lean_ctor_set(x_38, 4, x_35);
lean_ctor_set(x_38, 5, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_ctor_get(x_22, 3);
lean_inc(x_39);
lean_dec(x_22);
lean_inc(x_7);
x_40 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_40, 0, x_7);
lean_inc(x_7);
x_41 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_41, 0, x_7);
x_42 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_42, 0, x_7);
x_43 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_18);
lean_ctor_set(x_43, 2, x_21);
lean_ctor_set(x_43, 3, x_39);
lean_ctor_set(x_43, 4, x_40);
lean_ctor_set(x_43, 5, x_41);
lean_ctor_set(x_43, 6, x_42);
lean_inc(x_1);
x_44 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_44, 0, x_1);
lean_inc(x_1);
x_45 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_45, 0, x_1);
x_46 = lean_alloc_closure((void*)(l_Nonneg_instNNRatCast___rarg), 2, 1);
lean_closure_set(x_46, 0, x_1);
x_47 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_47, 0, x_11);
x_48 = lean_alloc_closure((void*)(l_Semifield_toDivisionSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_48, 0, x_10);
x_49 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_44);
lean_ctor_set(x_49, 2, x_45);
lean_ctor_set(x_49, 3, x_47);
lean_ctor_set(x_49, 4, x_46);
lean_ctor_set(x_49, 5, x_48);
return x_49;
}
}
}
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedSemifield(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
lean_inc(x_2);
x_3 = l_Nonneg_linearOrderedSemifield___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_4, 6);
lean_dec(x_8);
x_9 = lean_ctor_get(x_4, 5);
lean_dec(x_9);
x_10 = lean_ctor_get(x_4, 4);
lean_dec(x_10);
x_11 = lean_ctor_get(x_4, 0);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_ctor_get(x_6, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_6, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_22);
x_23 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_23);
lean_ctor_set(x_5, 0, x_24);
x_25 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_20);
x_26 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_25);
x_27 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_26);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
lean_inc(x_27);
x_29 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_29, 0, x_27);
x_30 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_30, 0, x_27);
lean_ctor_set(x_4, 6, x_30);
lean_ctor_set(x_4, 5, x_29);
lean_ctor_set(x_4, 4, x_28);
x_31 = lean_ctor_get(x_15, 0);
lean_inc(x_31);
lean_dec(x_15);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_33 = lean_ctor_get(x_31, 2);
lean_dec(x_33);
x_34 = lean_ctor_get(x_31, 0);
lean_dec(x_34);
x_35 = l_Semiring_toNonAssocSemiring___rarg(x_22);
lean_dec(x_22);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_ctor_set(x_31, 2, x_38);
lean_ctor_set(x_31, 0, x_4);
lean_inc(x_2);
x_39 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_39, 0, x_2);
lean_inc(x_2);
x_40 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_40, 0, x_2);
x_41 = l_LinearOrderedSemifield_toSemifield___rarg(x_2);
x_42 = l_Semifield_toDivisionSemiring___rarg(x_41);
x_43 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_43, 0, x_42);
lean_ctor_set(x_6, 3, x_43);
lean_ctor_set(x_6, 2, x_40);
lean_ctor_set(x_6, 1, x_39);
lean_ctor_set(x_6, 0, x_31);
return x_6;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_44 = lean_ctor_get(x_31, 1);
lean_inc(x_44);
lean_dec(x_31);
x_45 = l_Semiring_toNonAssocSemiring___rarg(x_22);
lean_dec(x_22);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_46);
lean_dec(x_46);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_4);
lean_ctor_set(x_49, 1, x_44);
lean_ctor_set(x_49, 2, x_48);
lean_inc(x_2);
x_50 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_50, 0, x_2);
lean_inc(x_2);
x_51 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_51, 0, x_2);
x_52 = l_LinearOrderedSemifield_toSemifield___rarg(x_2);
x_53 = l_Semifield_toDivisionSemiring___rarg(x_52);
x_54 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_54, 0, x_53);
lean_ctor_set(x_6, 3, x_54);
lean_ctor_set(x_6, 2, x_51);
lean_ctor_set(x_6, 1, x_50);
lean_ctor_set(x_6, 0, x_49);
return x_6;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_55 = lean_ctor_get(x_6, 0);
x_56 = lean_ctor_get(x_6, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_6);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_2, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
lean_dec(x_59);
lean_inc(x_60);
x_61 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_56);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_5, 0, x_62);
x_63 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_58);
x_64 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_63);
x_65 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_64);
lean_inc(x_65);
x_66 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_66, 0, x_65);
lean_inc(x_65);
x_67 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_67, 0, x_65);
x_68 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_68, 0, x_65);
lean_ctor_set(x_4, 6, x_68);
lean_ctor_set(x_4, 5, x_67);
lean_ctor_set(x_4, 4, x_66);
x_69 = lean_ctor_get(x_55, 0);
lean_inc(x_69);
lean_dec(x_55);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 lean_ctor_release(x_69, 2);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
x_72 = l_Semiring_toNonAssocSemiring___rarg(x_60);
lean_dec(x_60);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_73);
lean_dec(x_73);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
if (lean_is_scalar(x_71)) {
 x_76 = lean_alloc_ctor(0, 3, 0);
} else {
 x_76 = x_71;
}
lean_ctor_set(x_76, 0, x_4);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_75);
lean_inc(x_2);
x_77 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_77, 0, x_2);
lean_inc(x_2);
x_78 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_78, 0, x_2);
x_79 = l_LinearOrderedSemifield_toSemifield___rarg(x_2);
x_80 = l_Semifield_toDivisionSemiring___rarg(x_79);
x_81 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_81, 0, x_80);
x_82 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_77);
lean_ctor_set(x_82, 2, x_78);
lean_ctor_set(x_82, 3, x_81);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_83 = lean_ctor_get(x_5, 1);
lean_inc(x_83);
lean_dec(x_5);
x_84 = lean_ctor_get(x_6, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_6, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 x_86 = x_6;
} else {
 lean_dec_ref(x_6);
 x_86 = lean_box(0);
}
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_2, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
lean_dec(x_89);
lean_inc(x_90);
x_91 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_91, 0, x_90);
x_92 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_85);
lean_ctor_set(x_92, 2, x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_83);
x_94 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_88);
x_95 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_94);
x_96 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_95);
lean_inc(x_96);
x_97 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_97, 0, x_96);
lean_inc(x_96);
x_98 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_98, 0, x_96);
x_99 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_99, 0, x_96);
lean_ctor_set(x_4, 6, x_99);
lean_ctor_set(x_4, 5, x_98);
lean_ctor_set(x_4, 4, x_97);
lean_ctor_set(x_4, 0, x_93);
x_100 = lean_ctor_get(x_84, 0);
lean_inc(x_100);
lean_dec(x_84);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 lean_ctor_release(x_100, 2);
 x_102 = x_100;
} else {
 lean_dec_ref(x_100);
 x_102 = lean_box(0);
}
x_103 = l_Semiring_toNonAssocSemiring___rarg(x_90);
lean_dec(x_90);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
lean_dec(x_103);
x_105 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_104);
lean_dec(x_104);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
if (lean_is_scalar(x_102)) {
 x_107 = lean_alloc_ctor(0, 3, 0);
} else {
 x_107 = x_102;
}
lean_ctor_set(x_107, 0, x_4);
lean_ctor_set(x_107, 1, x_101);
lean_ctor_set(x_107, 2, x_106);
lean_inc(x_2);
x_108 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_108, 0, x_2);
lean_inc(x_2);
x_109 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_109, 0, x_2);
x_110 = l_LinearOrderedSemifield_toSemifield___rarg(x_2);
x_111 = l_Semifield_toDivisionSemiring___rarg(x_110);
x_112 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_112, 0, x_111);
if (lean_is_scalar(x_86)) {
 x_113 = lean_alloc_ctor(0, 4, 0);
} else {
 x_113 = x_86;
}
lean_ctor_set(x_113, 0, x_107);
lean_ctor_set(x_113, 1, x_108);
lean_ctor_set(x_113, 2, x_109);
lean_ctor_set(x_113, 3, x_112);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_114 = lean_ctor_get(x_4, 1);
x_115 = lean_ctor_get(x_4, 2);
x_116 = lean_ctor_get(x_4, 3);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_4);
x_117 = lean_ctor_get(x_5, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_118 = x_5;
} else {
 lean_dec_ref(x_5);
 x_118 = lean_box(0);
}
x_119 = lean_ctor_get(x_6, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_6, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 x_121 = x_6;
} else {
 lean_dec_ref(x_6);
 x_121 = lean_box(0);
}
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
x_123 = lean_ctor_get(x_2, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
lean_dec(x_124);
lean_inc(x_125);
x_126 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedCommGroupWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_127, 0, x_122);
lean_ctor_set(x_127, 1, x_120);
lean_ctor_set(x_127, 2, x_126);
if (lean_is_scalar(x_118)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_118;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_117);
x_129 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_123);
x_130 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_129);
x_131 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_130);
lean_inc(x_131);
x_132 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_132, 0, x_131);
lean_inc(x_131);
x_133 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_133, 0, x_131);
x_134 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_134, 0, x_131);
x_135 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_114);
lean_ctor_set(x_135, 2, x_115);
lean_ctor_set(x_135, 3, x_116);
lean_ctor_set(x_135, 4, x_132);
lean_ctor_set(x_135, 5, x_133);
lean_ctor_set(x_135, 6, x_134);
x_136 = lean_ctor_get(x_119, 0);
lean_inc(x_136);
lean_dec(x_119);
x_137 = lean_ctor_get(x_136, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 x_138 = x_136;
} else {
 lean_dec_ref(x_136);
 x_138 = lean_box(0);
}
x_139 = l_Semiring_toNonAssocSemiring___rarg(x_125);
lean_dec(x_125);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
lean_dec(x_139);
x_141 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_140);
lean_dec(x_140);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
if (lean_is_scalar(x_138)) {
 x_143 = lean_alloc_ctor(0, 3, 0);
} else {
 x_143 = x_138;
}
lean_ctor_set(x_143, 0, x_135);
lean_ctor_set(x_143, 1, x_137);
lean_ctor_set(x_143, 2, x_142);
lean_inc(x_2);
x_144 = lean_alloc_closure((void*)(l_Nonneg_inv___rarg), 2, 1);
lean_closure_set(x_144, 0, x_2);
lean_inc(x_2);
x_145 = lean_alloc_closure((void*)(l_Nonneg_div___rarg), 3, 1);
lean_closure_set(x_145, 0, x_2);
x_146 = l_LinearOrderedSemifield_toSemifield___rarg(x_2);
x_147 = l_Semifield_toDivisionSemiring___rarg(x_146);
x_148 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedSemifield___rarg___lambda__1), 3, 1);
lean_closure_set(x_148, 0, x_147);
if (lean_is_scalar(x_121)) {
 x_149 = lean_alloc_ctor(0, 4, 0);
} else {
 x_149 = x_121;
}
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_144);
lean_ctor_set(x_149, 2, x_145);
lean_ctor_set(x_149, 3, x_148);
return x_149;
}
}
}
LEAN_EXPORT lean_object* l_Nonneg_linearOrderedCommGroupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_linearOrderedCommGroupWithZero___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Order_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Field(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Nonneg_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Order_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
