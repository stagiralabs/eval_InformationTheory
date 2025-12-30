// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.EllipticCurve.NormalForms
// Imports: Init Mathlib.AlgebraicGeometry.EllipticCurve.VariableChange Mathlib.Algebra.CharP.Defs
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
lean_object* l_WeierstrassCurve_VariableChange_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJNeZeroNF(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNFOfCharThree___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoNF(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoNF___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNF___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharThreeNF(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNF(lean_object*);
lean_object* l_WeierstrassCurve_variableChange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNFOfCharThree(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJNeZeroNF___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharThreeNF___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_7);
lean_inc(x_1);
x_9 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_10 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_9);
x_11 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Ring_toAddCommGroup___rarg(x_1);
lean_dec(x_1);
x_15 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_14);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_inc(x_16);
x_18 = lean_apply_1(x_16, x_17);
lean_inc(x_13);
lean_inc(x_3);
x_19 = lean_apply_2(x_13, x_3, x_18);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_1(x_16, x_20);
x_22 = lean_apply_2(x_13, x_3, x_21);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_12);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_22);
return x_23;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharNeTwoNF___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_Semiring_toMonoidWithZero___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_8);
lean_inc(x_1);
x_10 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_11 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = l_Ring_toAddCommGroup___rarg(x_1);
x_14 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_WeierstrassCurve_toCharNeTwoNF___rarg(x_1, x_2, x_3);
lean_inc(x_16);
lean_inc(x_1);
x_17 = l_WeierstrassCurve_variableChange___rarg(x_1, x_2, x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_apply_1(x_15, x_18);
x_20 = lean_apply_2(x_12, x_4, x_19);
x_21 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_11);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_22);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_22);
x_24 = l_WeierstrassCurve_VariableChange_comp___rarg(x_1, x_23, x_16);
return x_24;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toShortNF___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc(x_1);
x_3 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_apply_1(x_5, x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = l_Semiring_toMonoidWithZero___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_11);
lean_inc(x_1);
x_13 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_14 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_13);
x_15 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Ring_toAddCommGroup___rarg(x_1);
lean_dec(x_1);
x_19 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_18);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_inc(x_20);
x_22 = lean_apply_1(x_20, x_21);
lean_inc(x_17);
lean_inc(x_7);
x_23 = lean_apply_2(x_17, x_7, x_22);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_apply_1(x_20, x_24);
x_26 = lean_apply_2(x_17, x_7, x_25);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_12);
lean_ctor_set(x_27, 1, x_16);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNFOfCharThree___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toShortNFOfCharThree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toShortNFOfCharThree___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharThreeNF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_Semiring_toMonoidWithZero___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_4);
x_11 = l_WeierstrassCurve_toCharNeTwoNF___at_WeierstrassCurve_toShortNFOfCharThree___spec__1___rarg(x_4, x_3);
lean_inc(x_11);
lean_inc(x_4);
x_12 = l_WeierstrassCurve_variableChange___rarg(x_4, x_3, x_11);
x_13 = lean_ctor_get(x_12, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_2(x_10, x_13, x_14);
lean_inc(x_4);
x_16 = l_CommRing_toNonUnitalCommRing___rarg(x_4);
x_17 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_19);
x_21 = l_WeierstrassCurve_VariableChange_comp___rarg(x_4, x_20, x_11);
return x_21;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharThreeNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharThreeNF___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Semiring_toMonoidWithZero___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_10 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_9);
x_11 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_12);
lean_inc(x_8);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set(x_13, 3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = lean_apply_1(x_5, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJNeZeroNF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Field_toSemifield___rarg(x_1);
x_6 = l_Semifield_toDivisionSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_7);
x_8 = l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg(x_1, x_7, lean_box(0));
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_10);
x_11 = lean_apply_2(x_9, x_10, x_7);
x_12 = l_CommRing_toNonUnitalCommRing___rarg(x_4);
x_13 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_12);
x_14 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_13);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_ctor_get(x_6, 0);
lean_inc(x_19);
lean_dec(x_6);
x_20 = lean_ctor_get(x_19, 3);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(2u);
lean_inc(x_20);
lean_inc(x_7);
x_22 = lean_apply_2(x_20, x_21, x_7);
x_23 = lean_ctor_get(x_2, 3);
lean_inc(x_23);
lean_dec(x_2);
x_24 = lean_apply_2(x_18, x_22, x_23);
lean_inc(x_20);
x_25 = lean_apply_2(x_20, x_21, x_10);
x_26 = lean_apply_2(x_17, x_24, x_25);
x_27 = lean_unsigned_to_nat(3u);
x_28 = lean_apply_2(x_20, x_27, x_7);
x_29 = lean_apply_2(x_9, x_26, x_28);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_8);
lean_ctor_set(x_30, 1, x_11);
lean_ctor_set(x_30, 2, x_15);
lean_ctor_set(x_30, 3, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoJNeZeroNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharTwoJNeZeroNF___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_mk0___at_WeierstrassCurve_toCharTwoJNeZeroNF___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoNF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_3, x_4, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_5);
x_12 = l_WeierstrassCurve_toCharTwoJNeZeroNF___rarg(x_1, x_2, lean_box(0));
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_WeierstrassCurve_toCharTwoJEqZeroNF___rarg(x_5, x_2);
lean_dec(x_2);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_toCharTwoNF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_toCharTwoNF___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_VariableChange(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_NormalForms(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_EllipticCurve_VariableChange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
