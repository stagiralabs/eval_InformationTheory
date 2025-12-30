// Lean compiler output
// Module: Mathlib.Algebra.Order.Field.Subfield
// Imports: Init Mathlib.Algebra.Order.Field.InjSurj Mathlib.Algebra.Field.Subfield.Defs
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
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_InvMemClass_inv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivisionRing_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toLinearOrderedField___rarg(lean_object*, lean_object*);
lean_object* l_SubfieldClass_instNNRatCast___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubgroupClass_div___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubfieldClass_toField___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubfieldClass_toLinearOrderedField___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubfieldClass_toLinearOrderedField(lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toLinearOrderedField(lean_object*);
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
lean_object* l_LinearOrderedField_toField___rarg(lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
lean_object* l_DivisionRing_toDivInvMonoid___rarg(lean_object*);
lean_object* l_SubfieldClass_instRatCast___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubfieldClass_toLinearOrderedField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_2);
x_5 = l_LinearOrderedField_toField___rarg(x_2);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_5);
x_6 = l_SubfieldClass_toField___rarg(x_5, x_1, lean_box(0), x_4);
x_7 = l_Field_toDivisionRing___rarg(x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 7);
lean_dec(x_10);
x_11 = lean_ctor_get(x_7, 6);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 5);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 4);
lean_dec(x_13);
x_14 = lean_ctor_get(x_7, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_7, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Subtype_partialOrder(lean_box(0), x_19, lean_box(0));
lean_dec(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_LinearOrderedRing_toLinearOrder___rarg(x_17);
lean_inc(x_22);
x_23 = l_Subtype_instLinearOrder___rarg(x_22, lean_box(0));
x_24 = l_LinearOrder_toLattice___rarg(x_23);
lean_inc(x_24);
x_25 = l_Lattice_toSemilatticeInf___rarg(x_24);
x_26 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_30 = lean_ctor_get(x_23, 6);
lean_dec(x_30);
x_31 = lean_ctor_get(x_23, 5);
lean_dec(x_31);
x_32 = lean_ctor_get(x_23, 4);
lean_dec(x_32);
x_33 = lean_ctor_get(x_23, 2);
lean_dec(x_33);
x_34 = lean_ctor_get(x_23, 1);
lean_dec(x_34);
x_35 = lean_ctor_get(x_23, 0);
lean_dec(x_35);
lean_inc(x_22);
x_36 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_36, 0, x_22);
lean_inc(x_22);
x_37 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_37, 0, x_22);
x_38 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_38, 0, x_22);
lean_ctor_set(x_23, 6, x_38);
lean_ctor_set(x_23, 5, x_37);
lean_ctor_set(x_23, 4, x_36);
lean_ctor_set(x_23, 2, x_28);
lean_ctor_set(x_23, 1, x_26);
lean_ctor_set(x_23, 0, x_21);
x_39 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_2);
x_40 = l_LinearOrderedSemifield_toSemifield___rarg(x_39);
x_41 = l_Semifield_toCommGroupWithZero___rarg(x_40);
x_42 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_41);
x_43 = l_DivInvOneMonoid_toInvOneClass___rarg(x_42);
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
lean_inc(x_4);
lean_inc(x_1);
x_45 = lean_alloc_closure((void*)(l_InvMemClass_inv___rarg___boxed), 5, 4);
lean_closure_set(x_45, 0, x_44);
lean_closure_set(x_45, 1, x_1);
lean_closure_set(x_45, 2, lean_box(0));
lean_closure_set(x_45, 3, x_4);
lean_inc(x_5);
x_46 = l_Field_toDivisionRing___rarg(x_5);
lean_inc(x_46);
x_47 = l_DivisionRing_toDivInvMonoid___rarg(x_46);
lean_inc(x_4);
lean_inc(x_1);
x_48 = lean_alloc_closure((void*)(l_SubgroupClass_div___rarg___boxed), 6, 4);
lean_closure_set(x_48, 0, x_47);
lean_closure_set(x_48, 1, x_1);
lean_closure_set(x_48, 2, lean_box(0));
lean_closure_set(x_48, 3, x_4);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_46);
x_49 = lean_alloc_closure((void*)(l_SubfieldClass_instNNRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_49, 0, x_46);
lean_closure_set(x_49, 1, lean_box(0));
lean_closure_set(x_49, 2, x_1);
lean_closure_set(x_49, 3, lean_box(0));
lean_closure_set(x_49, 4, x_4);
lean_inc(x_46);
x_50 = lean_alloc_closure((void*)(l_SubfieldClass_instRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_50, 0, x_46);
lean_closure_set(x_50, 1, lean_box(0));
lean_closure_set(x_50, 2, x_1);
lean_closure_set(x_50, 3, lean_box(0));
lean_closure_set(x_50, 4, x_4);
x_51 = lean_alloc_closure((void*)(l_DivisionRing_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_51, 0, x_46);
lean_inc(x_5);
x_52 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__2___rarg), 3, 1);
lean_closure_set(x_52, 0, x_5);
x_53 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_53, 0, x_5);
lean_ctor_set(x_7, 7, x_53);
lean_ctor_set(x_7, 6, x_52);
lean_ctor_set(x_7, 5, x_50);
lean_ctor_set(x_7, 4, x_49);
lean_ctor_set(x_7, 3, x_51);
lean_ctor_set(x_7, 2, x_48);
lean_ctor_set(x_7, 1, x_45);
lean_ctor_set(x_7, 0, x_23);
return x_7;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_54 = lean_ctor_get(x_23, 3);
lean_inc(x_54);
lean_dec(x_23);
lean_inc(x_22);
x_55 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_55, 0, x_22);
lean_inc(x_22);
x_56 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_56, 0, x_22);
x_57 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_57, 0, x_22);
x_58 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_58, 0, x_21);
lean_ctor_set(x_58, 1, x_26);
lean_ctor_set(x_58, 2, x_28);
lean_ctor_set(x_58, 3, x_54);
lean_ctor_set(x_58, 4, x_55);
lean_ctor_set(x_58, 5, x_56);
lean_ctor_set(x_58, 6, x_57);
x_59 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_2);
x_60 = l_LinearOrderedSemifield_toSemifield___rarg(x_59);
x_61 = l_Semifield_toCommGroupWithZero___rarg(x_60);
x_62 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_61);
x_63 = l_DivInvOneMonoid_toInvOneClass___rarg(x_62);
lean_dec(x_62);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
lean_inc(x_4);
lean_inc(x_1);
x_65 = lean_alloc_closure((void*)(l_InvMemClass_inv___rarg___boxed), 5, 4);
lean_closure_set(x_65, 0, x_64);
lean_closure_set(x_65, 1, x_1);
lean_closure_set(x_65, 2, lean_box(0));
lean_closure_set(x_65, 3, x_4);
lean_inc(x_5);
x_66 = l_Field_toDivisionRing___rarg(x_5);
lean_inc(x_66);
x_67 = l_DivisionRing_toDivInvMonoid___rarg(x_66);
lean_inc(x_4);
lean_inc(x_1);
x_68 = lean_alloc_closure((void*)(l_SubgroupClass_div___rarg___boxed), 6, 4);
lean_closure_set(x_68, 0, x_67);
lean_closure_set(x_68, 1, x_1);
lean_closure_set(x_68, 2, lean_box(0));
lean_closure_set(x_68, 3, x_4);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_66);
x_69 = lean_alloc_closure((void*)(l_SubfieldClass_instNNRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_69, 0, x_66);
lean_closure_set(x_69, 1, lean_box(0));
lean_closure_set(x_69, 2, x_1);
lean_closure_set(x_69, 3, lean_box(0));
lean_closure_set(x_69, 4, x_4);
lean_inc(x_66);
x_70 = lean_alloc_closure((void*)(l_SubfieldClass_instRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_70, 0, x_66);
lean_closure_set(x_70, 1, lean_box(0));
lean_closure_set(x_70, 2, x_1);
lean_closure_set(x_70, 3, lean_box(0));
lean_closure_set(x_70, 4, x_4);
x_71 = lean_alloc_closure((void*)(l_DivisionRing_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_71, 0, x_66);
lean_inc(x_5);
x_72 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__2___rarg), 3, 1);
lean_closure_set(x_72, 0, x_5);
x_73 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_73, 0, x_5);
lean_ctor_set(x_7, 7, x_73);
lean_ctor_set(x_7, 6, x_72);
lean_ctor_set(x_7, 5, x_70);
lean_ctor_set(x_7, 4, x_69);
lean_ctor_set(x_7, 3, x_71);
lean_ctor_set(x_7, 2, x_68);
lean_ctor_set(x_7, 1, x_65);
lean_ctor_set(x_7, 0, x_58);
return x_7;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_74 = lean_ctor_get(x_7, 0);
lean_inc(x_74);
lean_dec(x_7);
x_75 = lean_ctor_get(x_2, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = l_Subtype_partialOrder(lean_box(0), x_77, lean_box(0));
lean_dec(x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_74);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_LinearOrderedRing_toLinearOrder___rarg(x_75);
lean_inc(x_80);
x_81 = l_Subtype_instLinearOrder___rarg(x_80, lean_box(0));
x_82 = l_LinearOrder_toLattice___rarg(x_81);
lean_inc(x_82);
x_83 = l_Lattice_toSemilatticeInf___rarg(x_82);
x_84 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_84, 0, x_83);
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_86, 0, x_85);
x_87 = lean_ctor_get(x_81, 3);
lean_inc(x_87);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 lean_ctor_release(x_81, 2);
 lean_ctor_release(x_81, 3);
 lean_ctor_release(x_81, 4);
 lean_ctor_release(x_81, 5);
 lean_ctor_release(x_81, 6);
 x_88 = x_81;
} else {
 lean_dec_ref(x_81);
 x_88 = lean_box(0);
}
lean_inc(x_80);
x_89 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_89, 0, x_80);
lean_inc(x_80);
x_90 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_90, 0, x_80);
x_91 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_91, 0, x_80);
if (lean_is_scalar(x_88)) {
 x_92 = lean_alloc_ctor(0, 7, 0);
} else {
 x_92 = x_88;
}
lean_ctor_set(x_92, 0, x_79);
lean_ctor_set(x_92, 1, x_84);
lean_ctor_set(x_92, 2, x_86);
lean_ctor_set(x_92, 3, x_87);
lean_ctor_set(x_92, 4, x_89);
lean_ctor_set(x_92, 5, x_90);
lean_ctor_set(x_92, 6, x_91);
x_93 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_2);
x_94 = l_LinearOrderedSemifield_toSemifield___rarg(x_93);
x_95 = l_Semifield_toCommGroupWithZero___rarg(x_94);
x_96 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_95);
x_97 = l_DivInvOneMonoid_toInvOneClass___rarg(x_96);
lean_dec(x_96);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
lean_inc(x_4);
lean_inc(x_1);
x_99 = lean_alloc_closure((void*)(l_InvMemClass_inv___rarg___boxed), 5, 4);
lean_closure_set(x_99, 0, x_98);
lean_closure_set(x_99, 1, x_1);
lean_closure_set(x_99, 2, lean_box(0));
lean_closure_set(x_99, 3, x_4);
lean_inc(x_5);
x_100 = l_Field_toDivisionRing___rarg(x_5);
lean_inc(x_100);
x_101 = l_DivisionRing_toDivInvMonoid___rarg(x_100);
lean_inc(x_4);
lean_inc(x_1);
x_102 = lean_alloc_closure((void*)(l_SubgroupClass_div___rarg___boxed), 6, 4);
lean_closure_set(x_102, 0, x_101);
lean_closure_set(x_102, 1, x_1);
lean_closure_set(x_102, 2, lean_box(0));
lean_closure_set(x_102, 3, x_4);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_100);
x_103 = lean_alloc_closure((void*)(l_SubfieldClass_instNNRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_103, 0, x_100);
lean_closure_set(x_103, 1, lean_box(0));
lean_closure_set(x_103, 2, x_1);
lean_closure_set(x_103, 3, lean_box(0));
lean_closure_set(x_103, 4, x_4);
lean_inc(x_100);
x_104 = lean_alloc_closure((void*)(l_SubfieldClass_instRatCast___rarg___boxed), 6, 5);
lean_closure_set(x_104, 0, x_100);
lean_closure_set(x_104, 1, lean_box(0));
lean_closure_set(x_104, 2, x_1);
lean_closure_set(x_104, 3, lean_box(0));
lean_closure_set(x_104, 4, x_4);
x_105 = lean_alloc_closure((void*)(l_DivisionRing_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_105, 0, x_100);
lean_inc(x_5);
x_106 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__2___rarg), 3, 1);
lean_closure_set(x_106, 0, x_5);
x_107 = lean_alloc_closure((void*)(l_Field_toDivisionRing___elambda__1___rarg), 3, 1);
lean_closure_set(x_107, 0, x_5);
x_108 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_108, 0, x_92);
lean_ctor_set(x_108, 1, x_99);
lean_ctor_set(x_108, 2, x_102);
lean_ctor_set(x_108, 3, x_105);
lean_ctor_set(x_108, 4, x_103);
lean_ctor_set(x_108, 5, x_104);
lean_ctor_set(x_108, 6, x_106);
lean_ctor_set(x_108, 7, x_107);
return x_108;
}
}
}
LEAN_EXPORT lean_object* l_SubfieldClass_toLinearOrderedField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubfieldClass_toLinearOrderedField___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subfield_toLinearOrderedField___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubfieldClass_toLinearOrderedField___rarg(x_3, x_1, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_toLinearOrderedField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subfield_toLinearOrderedField___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Subfield_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Field_Subfield(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Subfield_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
