// Lean compiler output
// Module: Mathlib.NumberTheory.EllipticDivisibilitySequence
// Imports: Init Mathlib.Data.Nat.EvenOddRec Mathlib.Tactic.Linarith Mathlib.Tactic.LinearCombination
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
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_normEDS___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Int_instDecidablePredEven(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l_Nat_instDecidablePredEven(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_normEDS(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_normEDS___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS_x27(lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS(lean_object*);
LEAN_EXPORT lean_object* l_preNormEDS_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_5, x_8);
x_10 = lean_nat_dec_eq(x_9, x_6);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_nat_sub(x_9, x_8);
lean_dec(x_9);
x_12 = lean_nat_dec_eq(x_11, x_6);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_nat_sub(x_11, x_8);
lean_dec(x_11);
x_14 = lean_nat_dec_eq(x_13, x_6);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_nat_sub(x_13, x_8);
lean_dec(x_13);
x_16 = lean_nat_dec_eq(x_15, x_6);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_nat_sub(x_15, x_8);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_div(x_17, x_18);
x_20 = l_Nat_instDecidablePredEven(x_17);
lean_dec(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_inc(x_1);
x_21 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_22 = l_AddGroupWithOne_toAddGroup___rarg(x_21);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_1);
x_24 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_25 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_nat_add(x_19, x_18);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_28);
lean_dec(x_28);
x_30 = lean_ctor_get(x_27, 3);
lean_inc(x_30);
lean_dec(x_27);
lean_inc(x_30);
x_31 = lean_apply_2(x_30, x_18, x_29);
x_32 = lean_unsigned_to_nat(3u);
x_33 = lean_nat_add(x_19, x_32);
lean_inc(x_2);
lean_inc(x_1);
x_34 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_33);
lean_dec(x_33);
lean_inc(x_26);
lean_inc(x_34);
x_35 = lean_apply_2(x_26, x_31, x_34);
x_36 = lean_unsigned_to_nat(5u);
x_37 = lean_nat_add(x_19, x_36);
lean_inc(x_2);
lean_inc(x_1);
x_38 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_37);
lean_dec(x_37);
lean_inc(x_26);
x_39 = lean_apply_2(x_26, x_35, x_38);
x_40 = lean_nat_add(x_19, x_8);
lean_inc(x_2);
lean_inc(x_1);
x_41 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_40);
lean_dec(x_40);
lean_inc(x_26);
x_42 = lean_apply_2(x_26, x_41, x_34);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_nat_add(x_19, x_43);
lean_dec(x_19);
x_45 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_44);
lean_dec(x_44);
x_46 = lean_apply_2(x_30, x_18, x_45);
x_47 = lean_apply_2(x_26, x_42, x_46);
x_48 = lean_apply_2(x_23, x_39, x_47);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_inc(x_1);
x_49 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_50 = l_AddGroupWithOne_toAddGroup___rarg(x_49);
x_51 = lean_ctor_get(x_50, 2);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_1);
x_52 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_53 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_52);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_unsigned_to_nat(4u);
x_56 = lean_nat_add(x_19, x_55);
lean_inc(x_2);
lean_inc(x_1);
x_57 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_56);
lean_dec(x_56);
x_58 = lean_ctor_get(x_1, 0);
lean_inc(x_58);
x_59 = lean_nat_add(x_19, x_18);
lean_inc(x_2);
lean_inc(x_1);
x_60 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_59);
lean_dec(x_59);
x_61 = lean_ctor_get(x_58, 3);
lean_inc(x_61);
lean_dec(x_58);
x_62 = lean_unsigned_to_nat(3u);
lean_inc(x_61);
x_63 = lean_apply_2(x_61, x_62, x_60);
lean_inc(x_54);
x_64 = lean_apply_2(x_54, x_57, x_63);
x_65 = l_Nat_instDecidablePredEven(x_19);
x_66 = lean_nat_add(x_19, x_8);
lean_inc(x_2);
lean_inc(x_1);
x_67 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_66);
lean_dec(x_66);
x_68 = lean_nat_add(x_19, x_62);
lean_dec(x_19);
lean_inc(x_2);
x_69 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_68);
lean_dec(x_68);
x_70 = lean_apply_2(x_61, x_62, x_69);
lean_inc(x_54);
x_71 = lean_apply_2(x_54, x_67, x_70);
if (x_65 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_49, 1);
lean_inc(x_72);
lean_dec(x_49);
x_73 = lean_ctor_get(x_72, 2);
lean_inc(x_73);
lean_dec(x_72);
lean_inc(x_54);
x_74 = lean_apply_2(x_54, x_64, x_73);
x_75 = lean_apply_2(x_54, x_71, x_2);
x_76 = lean_apply_2(x_51, x_74, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_inc(x_54);
x_77 = lean_apply_2(x_54, x_64, x_2);
x_78 = lean_ctor_get(x_49, 1);
lean_inc(x_78);
lean_dec(x_49);
x_79 = lean_ctor_get(x_78, 2);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_apply_2(x_54, x_71, x_79);
x_81 = lean_apply_2(x_51, x_77, x_80);
return x_81;
}
}
}
else
{
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_4);
return x_4;
}
}
else
{
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_11);
lean_dec(x_2);
x_82 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_ctor_get(x_83, 2);
lean_inc(x_84);
lean_dec(x_83);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_9);
lean_dec(x_2);
x_85 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_ctor_get(x_86, 2);
lean_inc(x_87);
lean_dec(x_86);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_2);
x_88 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_89 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_88);
x_90 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_89);
lean_dec(x_89);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
return x_91;
}
}
}
LEAN_EXPORT lean_object* l_preNormEDS_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_preNormEDS_x27___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_preNormEDS_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_1, x_10);
x_12 = lean_nat_dec_eq(x_11, x_8);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_nat_sub(x_11, x_10);
lean_dec(x_11);
x_14 = lean_nat_dec_eq(x_13, x_8);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_nat_sub(x_13, x_10);
lean_dec(x_13);
x_16 = lean_nat_dec_eq(x_15, x_8);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_nat_sub(x_15, x_10);
lean_dec(x_15);
x_18 = lean_nat_dec_eq(x_17, x_8);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_nat_sub(x_17, x_10);
lean_dec(x_17);
x_20 = lean_apply_1(x_7, x_19);
return x_20;
}
else
{
lean_dec(x_17);
lean_dec(x_7);
lean_inc(x_6);
return x_6;
}
}
else
{
lean_dec(x_15);
lean_dec(x_7);
lean_inc(x_5);
return x_5;
}
}
else
{
lean_dec(x_13);
lean_dec(x_7);
lean_inc(x_4);
return x_4;
}
}
else
{
lean_dec(x_11);
lean_dec(x_7);
lean_inc(x_3);
return x_3;
}
}
else
{
lean_dec(x_7);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_NumberTheory_EllipticDivisibilitySequence_0__preNormEDS_x27_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_preNormEDS___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = l_Int_sign(x_5);
x_11 = lean_apply_1(x_9, x_10);
x_12 = lean_nat_abs(x_5);
x_13 = l_preNormEDS_x27___rarg(x_1, x_2, x_3, x_4, x_12);
lean_dec(x_12);
x_14 = lean_apply_2(x_8, x_11, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_preNormEDS(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_preNormEDS___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_preNormEDS___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_preNormEDS___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_normEDS___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(4u);
lean_inc(x_2);
x_12 = lean_apply_2(x_10, x_11, x_2);
lean_inc(x_1);
x_13 = l_preNormEDS___rarg(x_1, x_12, x_3, x_4, x_5);
x_14 = l_Int_instDecidablePredEven(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_15 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_apply_2(x_8, x_13, x_17);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_apply_2(x_8, x_13, x_2);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_normEDS(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_normEDS___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_normEDS___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_normEDS___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_EvenOddRec(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_EllipticDivisibilitySequence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_EvenOddRec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
