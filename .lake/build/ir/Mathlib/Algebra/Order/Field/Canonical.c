// Lean compiler output
// Module: Mathlib.Algebra.Order.Field.Canonical
// Imports: Init Mathlib.Algebra.Order.Field.Defs Mathlib.Algebra.Order.GroupWithZero.Canonical Mathlib.Algebra.Order.Ring.Canonical
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
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toLinearOrderedCommGroupWithZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toLinearOrderedCommGroupWithZero(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 11);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 9);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_10 = lean_ctor_get(x_4, 1);
lean_ctor_set(x_4, 1, x_5);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_6);
lean_ctor_set(x_11, 2, x_7);
lean_ctor_set(x_11, 3, x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 5);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 6);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_14);
lean_ctor_set(x_19, 3, x_15);
lean_ctor_set(x_19, 4, x_16);
lean_ctor_set(x_19, 5, x_17);
lean_ctor_set(x_19, 6, x_18);
x_20 = lean_ctor_get(x_1, 7);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 8);
lean_inc(x_21);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2___rarg), 3, 1);
lean_closure_set(x_22, 0, x_1);
x_23 = lean_ctor_get(x_1, 10);
lean_inc(x_23);
x_24 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1___rarg), 3, 1);
lean_closure_set(x_24, 0, x_1);
x_25 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = lean_ctor_get(x_4, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_4);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_5);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_6);
lean_ctor_set(x_29, 2, x_7);
lean_ctor_set(x_29, 3, x_8);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 2);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 3);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 4);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 5);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 6);
lean_inc(x_36);
x_37 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_31);
lean_ctor_set(x_37, 2, x_32);
lean_ctor_set(x_37, 3, x_33);
lean_ctor_set(x_37, 4, x_34);
lean_ctor_set(x_37, 5, x_35);
lean_ctor_set(x_37, 6, x_36);
x_38 = lean_ctor_get(x_1, 7);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 8);
lean_inc(x_39);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__2___rarg), 3, 1);
lean_closure_set(x_40, 0, x_1);
x_41 = lean_ctor_get(x_1, 10);
lean_inc(x_41);
x_42 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___elambda__1___rarg), 3, 1);
lean_closure_set(x_42, 0, x_1);
x_43 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_43, 1, x_38);
lean_ctor_set(x_43, 2, x_39);
lean_ctor_set(x_43, 3, x_40);
lean_ctor_set(x_43, 4, x_41);
lean_ctor_set(x_43, 5, x_42);
return x_43;
}
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedSemifield_toLinearOrderedSemifield___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toLinearOrderedCommGroupWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 3);
x_17 = lean_ctor_get(x_5, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_4, 0, x_19);
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
lean_dec(x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_20, 2);
lean_dec(x_22);
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_25 = l_Semifield_toDivisionSemiring___rarg(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Semiring_toNonAssocSemiring___rarg(x_26);
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_28);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
lean_ctor_set(x_20, 2, x_30);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_5, 3, x_8);
lean_ctor_set(x_5, 2, x_7);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_20);
return x_5;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_dec(x_20);
x_32 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_33 = l_Semifield_toDivisionSemiring___rarg(x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_Semiring_toNonAssocSemiring___rarg(x_34);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_3);
lean_ctor_set(x_39, 1, x_31);
lean_ctor_set(x_39, 2, x_38);
lean_ctor_set(x_5, 3, x_8);
lean_ctor_set(x_5, 2, x_7);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_39);
return x_5;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = lean_ctor_get(x_5, 1);
x_42 = lean_ctor_get(x_5, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_5);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_42);
lean_ctor_set(x_4, 0, x_44);
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
lean_dec(x_40);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 lean_ctor_release(x_45, 2);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_49 = l_Semifield_toDivisionSemiring___rarg(x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_Semiring_toNonAssocSemiring___rarg(x_50);
lean_dec(x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_52);
lean_dec(x_52);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
if (lean_is_scalar(x_47)) {
 x_55 = lean_alloc_ctor(0, 3, 0);
} else {
 x_55 = x_47;
}
lean_ctor_set(x_55, 0, x_3);
lean_ctor_set(x_55, 1, x_46);
lean_ctor_set(x_55, 2, x_54);
x_56 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_6);
lean_ctor_set(x_56, 2, x_7);
lean_ctor_set(x_56, 3, x_8);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_57 = lean_ctor_get(x_4, 1);
lean_inc(x_57);
lean_dec(x_4);
x_58 = lean_ctor_get(x_5, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_5, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_5, 3);
lean_inc(x_60);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 x_61 = x_5;
} else {
 lean_dec_ref(x_5);
 x_61 = lean_box(0);
}
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_59);
lean_ctor_set(x_63, 2, x_60);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_57);
lean_ctor_set(x_3, 0, x_64);
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
lean_dec(x_58);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 lean_ctor_release(x_65, 2);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
x_68 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_69 = l_Semifield_toDivisionSemiring___rarg(x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l_Semiring_toNonAssocSemiring___rarg(x_70);
lean_dec(x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
lean_dec(x_71);
x_73 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_72);
lean_dec(x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
if (lean_is_scalar(x_67)) {
 x_75 = lean_alloc_ctor(0, 3, 0);
} else {
 x_75 = x_67;
}
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_66);
lean_ctor_set(x_75, 2, x_74);
if (lean_is_scalar(x_61)) {
 x_76 = lean_alloc_ctor(0, 4, 0);
} else {
 x_76 = x_61;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_6);
lean_ctor_set(x_76, 2, x_7);
lean_ctor_set(x_76, 3, x_8);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_77 = lean_ctor_get(x_3, 1);
x_78 = lean_ctor_get(x_3, 2);
x_79 = lean_ctor_get(x_3, 3);
x_80 = lean_ctor_get(x_3, 4);
x_81 = lean_ctor_get(x_3, 5);
x_82 = lean_ctor_get(x_3, 6);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_3);
x_83 = lean_ctor_get(x_4, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_84 = x_4;
} else {
 lean_dec_ref(x_4);
 x_84 = lean_box(0);
}
x_85 = lean_ctor_get(x_5, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_5, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_5, 3);
lean_inc(x_87);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 x_88 = x_5;
} else {
 lean_dec_ref(x_5);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_86);
lean_ctor_set(x_90, 2, x_87);
if (lean_is_scalar(x_84)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_84;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_83);
x_92 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_77);
lean_ctor_set(x_92, 2, x_78);
lean_ctor_set(x_92, 3, x_79);
lean_ctor_set(x_92, 4, x_80);
lean_ctor_set(x_92, 5, x_81);
lean_ctor_set(x_92, 6, x_82);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
lean_dec(x_85);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 lean_ctor_release(x_93, 2);
 x_95 = x_93;
} else {
 lean_dec_ref(x_93);
 x_95 = lean_box(0);
}
x_96 = l_LinearOrderedSemifield_toSemifield___rarg(x_1);
x_97 = l_Semifield_toDivisionSemiring___rarg(x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
lean_dec(x_97);
x_99 = l_Semiring_toNonAssocSemiring___rarg(x_98);
lean_dec(x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
lean_dec(x_99);
x_101 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_100);
lean_dec(x_100);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
if (lean_is_scalar(x_95)) {
 x_103 = lean_alloc_ctor(0, 3, 0);
} else {
 x_103 = x_95;
}
lean_ctor_set(x_103, 0, x_92);
lean_ctor_set(x_103, 1, x_94);
lean_ctor_set(x_103, 2, x_102);
if (lean_is_scalar(x_88)) {
 x_104 = lean_alloc_ctor(0, 4, 0);
} else {
 x_104 = x_88;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_6);
lean_ctor_set(x_104, 2, x_7);
lean_ctor_set(x_104, 3, x_8);
return x_104;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toLinearOrderedCommGroupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toLinearOrderedCommGroupWithZero___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Canonical(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Field_Canonical(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
