// Lean compiler output
// Module: Mathlib.GroupTheory.SpecificGroups.Dihedral
// Imports: Init Mathlib.Data.Finite.Sum Mathlib.Data.ZMod.Basic Mathlib.GroupTheory.Exponent Mathlib.GroupTheory.GroupAction.CardCommute Mathlib.GroupTheory.SpecificGroups.Cyclic
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_Multiset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_DihedralGroup_instGroup___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_unitOfCoprime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv(lean_object*, lean_object*);
static lean_object* l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_fintype(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqDihedralGroup(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
uint8_t l_ZMod_decidableEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_inv(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_DihedralGroup_instGroup___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_instGroup(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___boxed(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqDihedralGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___rarg(lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_DihedralGroup_instGroup___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_DihedralGroup_instGroup___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_instFintypeOfNeZeroNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_DihedralGroup_instGroup___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_DihedralGroup_instGroup___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_DihedralGroup_instGroup___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_DihedralGroup_instGroup___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_instInhabited(lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_ZMod_decidableEq(x_1, x_4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_3, 0);
x_11 = l_ZMod_decidableEq(x_1, x_9, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqDihedralGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqDihedralGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_instDecidableEqDihedralGroup(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_ZMod_commRing(x_1);
x_8 = l_CommRing_toNonUnitalCommRing___rarg(x_7);
x_9 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_8);
x_10 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, x_4, x_6);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = l_ZMod_commRing(x_1);
x_15 = l_CommRing_toNonUnitalCommRing___rarg(x_14);
x_16 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_15);
x_17 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_apply_2(x_18, x_4, x_13);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = l_ZMod_commRing(x_1);
x_25 = l_Ring_toAddGroupWithOne___rarg(x_24);
x_26 = l_AddGroupWithOne_toAddGroup___rarg(x_25);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_apply_2(x_27, x_23, x_21);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
lean_dec(x_3);
x_30 = l_ZMod_commRing(x_1);
x_31 = l_Ring_toAddGroupWithOne___rarg(x_30);
x_32 = l_AddGroupWithOne_toAddGroup___rarg(x_31);
lean_dec(x_31);
x_33 = lean_ctor_get(x_32, 2);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_apply_2(x_33, x_29, x_21);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
return x_35;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_3);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = l_ZMod_commRing(x_1);
x_40 = l_CommRing_toNonUnitalCommRing___rarg(x_39);
x_41 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_40);
x_42 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_41);
lean_dec(x_41);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_apply_2(x_43, x_36, x_38);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_44);
return x_3;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_3, 0);
lean_inc(x_45);
lean_dec(x_3);
x_46 = l_ZMod_commRing(x_1);
x_47 = l_CommRing_toNonUnitalCommRing___rarg(x_46);
x_48 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_47);
x_49 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_48);
lean_dec(x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_apply_2(x_50, x_36, x_45);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
return x_52;
}
}
else
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_2, 0);
lean_inc(x_53);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_3);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_3, 0);
x_56 = l_ZMod_commRing(x_1);
x_57 = l_Ring_toAddGroupWithOne___rarg(x_56);
x_58 = l_AddGroupWithOne_toAddGroup___rarg(x_57);
lean_dec(x_57);
x_59 = lean_ctor_get(x_58, 2);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_apply_2(x_59, x_55, x_53);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_60);
return x_3;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_3, 0);
lean_inc(x_61);
lean_dec(x_3);
x_62 = l_ZMod_commRing(x_1);
x_63 = l_Ring_toAddGroupWithOne___rarg(x_62);
x_64 = l_AddGroupWithOne_toAddGroup___rarg(x_63);
lean_dec(x_63);
x_65 = lean_ctor_get(x_64, 2);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_apply_2(x_65, x_61, x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_ZMod_commRing(x_1);
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_inv(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_ZMod_commRing(x_1);
x_6 = l_Ring_toAddCommGroup___rarg(x_5);
lean_dec(x_5);
x_7 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_4);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_ZMod_commRing(x_1);
x_12 = l_Ring_toAddCommGroup___rarg(x_11);
lean_dec(x_11);
x_13 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_1(x_14, x_10);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
return x_2;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_2(x_4, x_10, x_11);
return x_12;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_2(x_5, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_apply_2(x_6, x_16, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0____private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__decEqDihedralGroup_match__1_splitter____x40_Mathlib_GroupTheory_SpecificGroups_Dihedral___hyg_36_(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_DihedralGroup_instGroup___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_land(x_8, x_3);
x_10 = lean_nat_dec_eq(x_9, x_6);
lean_dec(x_9);
x_11 = lean_nat_shiftr(x_3, x_8);
lean_dec(x_3);
if (x_10 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_inc_n(x_5, 2);
lean_inc(x_1);
x_12 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(x_1, x_5, x_5);
lean_inc(x_1);
x_13 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(x_1, x_4, x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_15; 
lean_inc(x_5);
lean_inc(x_1);
x_15 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(x_1, x_5, x_5);
x_3 = x_11;
x_5 = x_15;
goto _start;
}
}
else
{
lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_apply_2(x_2, x_4, x_5);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1;
x_6 = l_Nat_binaryRec___at_DihedralGroup_instGroup___spec__4(x_1, x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_DihedralGroup_instGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(x_1);
x_5 = lean_alloc_closure((void*)(l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1___boxed), 2, 0);
x_6 = l_Nat_binaryRec___at_DihedralGroup_instGroup___spec__4(x_1, x_5, x_2, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_DihedralGroup_instGroup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowBinRec___at_DihedralGroup_instGroup___spec__2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_DihedralGroup_instGroup___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_inv(x_1, x_3);
x_5 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_DihedralGroup_instGroup___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_npowRec___at_DihedralGroup_instGroup___spec__6(x_1, x_7, x_3);
lean_dec(x_7);
x_9 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul(x_1, x_8, x_3);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(x_1);
return x_10;
}
}
}
static lean_object* _init_l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_DihedralGroup_instGroup___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1;
x_6 = lean_int_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = lean_nat_abs(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_13 = lean_apply_2(x_2, x_12, x_4);
x_14 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_inv(x_1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_instGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_mul), 3, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_one(x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_DihedralGroup_instGroup___spec__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_inv), 2, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_DihedralGroup_instGroup___spec__5), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_npowRec___at_DihedralGroup_instGroup___spec__6___boxed), 3, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_closure((void*)(l_zpowRec___at_DihedralGroup_instGroup___spec__7___boxed), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_DihedralGroup_instGroup___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowRec___at_DihedralGroup_instGroup___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_DihedralGroup_instGroup___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zpowRec___at_DihedralGroup_instGroup___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper___elambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_ZMod_fintype(x_1, lean_box(0));
lean_inc(x_5);
x_6 = l_Multiset_disjSum___rarg(x_5, x_5);
x_7 = l_Multiset_map___rarg(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2(x_1, lean_box(0), x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_instFintypeOfNeZeroNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l___private_Mathlib_GroupTheory_SpecificGroups_Dihedral_0__DihedralGroup_fintypeHelper(x_1);
x_4 = l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1(x_1, lean_box(0), x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fintype_ofBijective___at_DihedralGroup_instFintypeOfNeZeroNat___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fintype_ofEquiv___at_DihedralGroup_instFintypeOfNeZeroNat___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_ctor_set_tag(x_4, 1);
x_6 = l_ZMod_commRing(x_1);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_6);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_ZMod_commRing(x_1);
x_16 = l_CommRing_toNonUnitalCommRing___rarg(x_15);
x_17 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_4);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = l_ZMod_commRing(x_1);
x_27 = l_CommRing_toNonUnitalCommRing___rarg(x_26);
x_28 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_27);
x_29 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_28);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
lean_ctor_set(x_23, 0, x_30);
lean_ctor_set(x_4, 0, x_25);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_4);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_23, 0);
lean_inc(x_32);
lean_dec(x_23);
x_33 = l_ZMod_commRing(x_1);
x_34 = l_CommRing_toNonUnitalCommRing___rarg(x_33);
x_35 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_34);
x_36 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_35);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_4, 0, x_32);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_4);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_free_object(x_4);
x_40 = !lean_is_exclusive(x_23);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_23, 0);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
lean_free_object(x_23);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = l_ZMod_commRing(x_1);
x_45 = l_CommRing_toNonUnitalCommRing___rarg(x_44);
x_46 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_ctor_get(x_3, 1);
lean_inc(x_48);
lean_dec(x_3);
x_49 = lean_apply_2(x_47, x_48, x_43);
lean_ctor_set_tag(x_41, 1);
lean_ctor_set(x_41, 0, x_49);
lean_inc(x_41);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_41);
lean_ctor_set(x_50, 1, x_41);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_ctor_get(x_41, 0);
lean_inc(x_51);
lean_dec(x_41);
x_52 = l_ZMod_commRing(x_1);
x_53 = l_CommRing_toNonUnitalCommRing___rarg(x_52);
x_54 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_53);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get(x_3, 1);
lean_inc(x_56);
lean_dec(x_3);
x_57 = lean_apply_2(x_55, x_56, x_51);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
lean_inc(x_58);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_41);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_41, 0);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
lean_ctor_set_tag(x_41, 0);
lean_ctor_set(x_41, 0, x_63);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_64);
lean_ctor_set(x_61, 1, x_23);
lean_ctor_set(x_61, 0, x_41);
return x_61;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_61, 0);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_61);
lean_ctor_set_tag(x_41, 0);
lean_ctor_set(x_41, 0, x_65);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_66);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_41);
lean_ctor_set(x_67, 1, x_23);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_41, 0);
lean_inc(x_68);
lean_dec(x_41);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_70);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_23);
return x_73;
}
}
}
else
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_23, 0);
lean_inc(x_74);
lean_dec(x_23);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 x_76 = x_74;
} else {
 lean_dec_ref(x_74);
 x_76 = lean_box(0);
}
x_77 = l_ZMod_commRing(x_1);
x_78 = l_CommRing_toNonUnitalCommRing___rarg(x_77);
x_79 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_78);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
lean_dec(x_3);
x_82 = lean_apply_2(x_80, x_81, x_75);
if (lean_is_scalar(x_76)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_76;
 lean_ctor_set_tag(x_83, 1);
}
lean_ctor_set(x_83, 0, x_82);
lean_inc(x_83);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_3);
lean_dec(x_1);
x_85 = lean_ctor_get(x_74, 0);
lean_inc(x_85);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 x_86 = x_74;
} else {
 lean_dec_ref(x_74);
 x_86 = lean_box(0);
}
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_89 = x_85;
} else {
 lean_dec_ref(x_85);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_90 = lean_alloc_ctor(0, 1, 0);
} else {
 x_90 = x_86;
 lean_ctor_set_tag(x_90, 0);
}
lean_ctor_set(x_90, 0, x_87);
x_91 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_91, 0, x_88);
if (lean_is_scalar(x_89)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_89;
}
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_4, 0);
lean_inc(x_93);
lean_dec(x_4);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_3);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 x_95 = x_93;
} else {
 lean_dec_ref(x_93);
 x_95 = lean_box(0);
}
x_96 = l_ZMod_commRing(x_1);
x_97 = l_CommRing_toNonUnitalCommRing___rarg(x_96);
x_98 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_97);
x_99 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_98);
lean_dec(x_98);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
if (lean_is_scalar(x_95)) {
 x_101 = lean_alloc_ctor(0, 1, 0);
} else {
 x_101 = x_95;
}
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_94);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_93, 0);
lean_inc(x_104);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 x_105 = x_93;
} else {
 lean_dec_ref(x_93);
 x_105 = lean_box(0);
}
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_105);
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
x_108 = l_ZMod_commRing(x_1);
x_109 = l_CommRing_toNonUnitalCommRing___rarg(x_108);
x_110 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_109);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_112 = lean_ctor_get(x_3, 1);
lean_inc(x_112);
lean_dec(x_3);
x_113 = lean_apply_2(x_111, x_112, x_106);
if (lean_is_scalar(x_107)) {
 x_114 = lean_alloc_ctor(1, 1, 0);
} else {
 x_114 = x_107;
 lean_ctor_set_tag(x_114, 1);
}
lean_ctor_set(x_114, 0, x_113);
lean_inc(x_114);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_3);
lean_dec(x_1);
x_116 = lean_ctor_get(x_104, 0);
lean_inc(x_116);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 x_117 = x_104;
} else {
 lean_dec_ref(x_104);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_116, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_120 = x_116;
} else {
 lean_dec_ref(x_116);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_121 = lean_alloc_ctor(0, 1, 0);
} else {
 x_121 = x_117;
 lean_ctor_set_tag(x_121, 0);
}
lean_ctor_set(x_121, 0, x_118);
if (lean_is_scalar(x_105)) {
 x_122 = lean_alloc_ctor(0, 1, 0);
} else {
 x_122 = x_105;
 lean_ctor_set_tag(x_122, 0);
}
lean_ctor_set(x_122, 0, x_119);
if (lean_is_scalar(x_120)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_120;
}
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 0);
lean_dec(x_6);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_5, 0);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_5);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
lean_ctor_set(x_2, 1, x_13);
lean_ctor_set(x_2, 0, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_14);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_18 = x_5;
} else {
 lean_dec_ref(x_5);
 x_18 = lean_box(0);
}
lean_ctor_set(x_2, 1, x_17);
lean_ctor_set(x_2, 0, x_16);
if (lean_is_scalar(x_18)) {
 x_19 = lean_alloc_ctor(1, 1, 0);
} else {
 x_19 = x_18;
 lean_ctor_set_tag(x_19, 1);
}
lean_ctor_set(x_19, 0, x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_free_object(x_2);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_3, 0);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
lean_ctor_set_tag(x_5, 0);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_5);
return x_3;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_5, 0);
lean_inc(x_25);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_26);
return x_3;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_3);
x_27 = lean_ctor_get(x_5, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_28 = x_5;
} else {
 lean_dec_ref(x_5);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 1, 0);
} else {
 x_29 = x_28;
 lean_ctor_set_tag(x_29, 0);
}
lean_ctor_set(x_29, 0, x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_3, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_33 = x_3;
} else {
 lean_dec_ref(x_3);
 x_33 = lean_box(0);
}
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_35 = x_31;
} else {
 lean_dec_ref(x_31);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_34);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(1, 1, 0);
} else {
 x_37 = x_35;
 lean_ctor_set_tag(x_37, 1);
}
lean_ctor_set(x_37, 0, x_36);
if (lean_is_scalar(x_33)) {
 x_38 = lean_alloc_ctor(1, 1, 0);
} else {
 x_38 = x_33;
 lean_ctor_set_tag(x_38, 1);
}
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_40 = x_3;
} else {
 lean_dec_ref(x_3);
 x_40 = lean_box(0);
}
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_42 = x_31;
} else {
 lean_dec_ref(x_31);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 1, 0);
} else {
 x_43 = x_42;
 lean_ctor_set_tag(x_43, 0);
}
lean_ctor_set(x_43, 0, x_41);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(1, 1, 0);
} else {
 x_44 = x_40;
 lean_ctor_set_tag(x_44, 1);
}
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_dec(x_2);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
x_48 = lean_ctor_get(x_3, 0);
lean_inc(x_48);
lean_dec(x_3);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
x_49 = lean_ctor_get(x_3, 0);
lean_inc(x_49);
lean_dec(x_3);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_3);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_45);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_3, 0);
x_54 = lean_ctor_get(x_45, 0);
x_55 = l_ZMod_commRing(x_1);
x_56 = l_CommRing_toNonUnitalCommRing___rarg(x_55);
x_57 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_56);
x_58 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_57);
lean_dec(x_57);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_apply_2(x_59, x_53, x_54);
lean_ctor_set_tag(x_45, 0);
lean_ctor_set(x_45, 0, x_60);
lean_ctor_set(x_3, 0, x_45);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_3);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_62 = lean_ctor_get(x_3, 0);
x_63 = lean_ctor_get(x_45, 0);
lean_inc(x_63);
lean_dec(x_45);
x_64 = l_ZMod_commRing(x_1);
x_65 = l_CommRing_toNonUnitalCommRing___rarg(x_64);
x_66 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_65);
x_67 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_66);
lean_dec(x_66);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_apply_2(x_68, x_62, x_63);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_3, 0, x_70);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_3);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_72 = lean_ctor_get(x_3, 0);
lean_inc(x_72);
lean_dec(x_3);
x_73 = lean_ctor_get(x_45, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 x_74 = x_45;
} else {
 lean_dec_ref(x_45);
 x_74 = lean_box(0);
}
x_75 = l_ZMod_commRing(x_1);
x_76 = l_CommRing_toNonUnitalCommRing___rarg(x_75);
x_77 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_76);
x_78 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_77);
lean_dec(x_77);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_apply_2(x_79, x_72, x_73);
if (lean_is_scalar(x_74)) {
 x_81 = lean_alloc_ctor(0, 1, 0);
} else {
 x_81 = x_74;
 lean_ctor_set_tag(x_81, 0);
}
lean_ctor_set(x_81, 0, x_80);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_OddCommuteEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(2u);
lean_inc(x_1);
x_4 = l_ZMod_unitOfCoprime(x_1, x_3, lean_box(0));
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_DihedralGroup_OddCommuteEquiv___elambda__2), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_DihedralGroup_OddCommuteEquiv___elambda__1), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Exponent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_CardCommute(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_Cyclic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_Dihedral(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Exponent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_CardCommute(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_SpecificGroups_Cyclic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1 = _init_l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_DihedralGroup_instGroup___spec__3___closed__1);
l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1 = _init_l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1();
lean_mark_persistent(l_zpowRec___at_DihedralGroup_instGroup___spec__7___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
