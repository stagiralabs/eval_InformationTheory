// Lean compiler output
// Module: Mathlib.Algebra.Order.Field.InjSurj
// Imports: Init Mathlib.Algebra.Field.Basic Mathlib.Algebra.Order.Field.Defs Mathlib.Algebra.Order.Ring.InjSurj
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
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg___boxed(lean_object**);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_cast___rarg(lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_cast___rarg(lean_object*, lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_Injective_linearOrderedSemifield___rarg___closed__1;
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_2);
x_6 = lean_apply_1(x_2, x_3);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_2(x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_1(x_1, x_4);
x_7 = l_instDecidableLe__mathlib___rarg(x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_1(x_1, x_4);
x_7 = l_instDecidableEq__mathlib___rarg(x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_1(x_1, x_4);
x_7 = l_instDecidableLt__mathlib___rarg(x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Function_Injective_linearOrderedSemifield___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31) {
_start:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_32 = lean_ctor_get(x_17, 0);
lean_inc(x_32);
lean_dec(x_17);
lean_inc(x_32);
x_33 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_32);
x_34 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_33);
x_35 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_34);
lean_inc(x_15);
x_36 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__1), 4, 2);
lean_closure_set(x_36, 0, x_32);
lean_closure_set(x_36, 1, x_15);
lean_inc(x_35);
lean_inc(x_15);
x_37 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__2), 4, 2);
lean_closure_set(x_37, 0, x_15);
lean_closure_set(x_37, 1, x_35);
lean_inc(x_35);
lean_inc(x_15);
x_38 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__3), 4, 2);
lean_closure_set(x_38, 0, x_15);
lean_closure_set(x_38, 1, x_35);
x_39 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__4), 4, 2);
lean_closure_set(x_39, 0, x_15);
lean_closure_set(x_39, 1, x_35);
x_40 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_40, 0, x_6);
x_41 = lean_alloc_closure((void*)(l_Nat_cast___rarg), 2, 1);
lean_closure_set(x_41, 0, x_8);
x_42 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__5), 3, 1);
lean_closure_set(x_42, 0, x_5);
x_43 = l_Function_Injective_linearOrderedSemifield___rarg___closed__1;
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_3);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_40);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_4);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_2);
lean_ctor_set(x_46, 2, x_41);
lean_ctor_set(x_46, 3, x_42);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_43);
x_48 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_14);
lean_ctor_set(x_48, 2, x_13);
lean_ctor_set(x_48, 3, x_36);
lean_ctor_set(x_48, 4, x_37);
lean_ctor_set(x_48, 5, x_38);
lean_ctor_set(x_48, 6, x_39);
x_49 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__5), 3, 1);
lean_closure_set(x_49, 0, x_12);
x_50 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_10);
lean_ctor_set(x_50, 2, x_11);
lean_ctor_set(x_50, 3, x_49);
lean_ctor_set(x_50, 4, x_9);
lean_ctor_set(x_50, 5, x_7);
return x_50;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___boxed), 31, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedSemifield___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
_start:
{
lean_object* x_32; 
x_32 = l_Function_Injective_linearOrderedSemifield___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31);
return x_32;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_2);
x_6 = lean_apply_1(x_2, x_3);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_2(x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33, lean_object* x_34, lean_object* x_35, lean_object* x_36, lean_object* x_37, lean_object* x_38, lean_object* x_39, lean_object* x_40, lean_object* x_41, lean_object* x_42, lean_object* x_43) {
_start:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_44 = lean_ctor_get(x_23, 0);
lean_inc(x_44);
lean_dec(x_23);
x_45 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__5), 3, 1);
lean_closure_set(x_45, 0, x_7);
lean_inc(x_44);
x_46 = l_LinearOrderedRing_toLinearOrder___rarg(x_44);
lean_inc(x_21);
x_47 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedField___rarg___lambda__1), 4, 2);
lean_closure_set(x_47, 0, x_44);
lean_closure_set(x_47, 1, x_21);
lean_inc(x_46);
lean_inc(x_21);
x_48 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__2), 4, 2);
lean_closure_set(x_48, 0, x_21);
lean_closure_set(x_48, 1, x_46);
lean_inc(x_46);
lean_inc(x_21);
x_49 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__3), 4, 2);
lean_closure_set(x_49, 0, x_21);
lean_closure_set(x_49, 1, x_46);
x_50 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__4), 4, 2);
lean_closure_set(x_50, 0, x_21);
lean_closure_set(x_50, 1, x_46);
x_51 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_51, 0, x_8);
x_52 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_52, 0, x_9);
x_53 = l_Function_Injective_linearOrderedSemifield___rarg___closed__1;
x_54 = lean_alloc_closure((void*)(l_Nat_cast___rarg), 2, 1);
lean_closure_set(x_54, 0, x_12);
x_55 = lean_alloc_closure((void*)(l_Int_cast___rarg), 2, 1);
lean_closure_set(x_55, 0, x_13);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_3);
lean_ctor_set(x_56, 1, x_1);
lean_ctor_set(x_56, 2, x_51);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_4);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_2);
lean_ctor_set(x_58, 2, x_54);
lean_ctor_set(x_58, 3, x_45);
x_59 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_5);
lean_ctor_set(x_59, 2, x_6);
lean_ctor_set(x_59, 3, x_52);
lean_ctor_set(x_59, 4, x_55);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_53);
x_61 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_20);
lean_ctor_set(x_61, 2, x_19);
lean_ctor_set(x_61, 3, x_47);
lean_ctor_set(x_61, 4, x_48);
lean_ctor_set(x_61, 5, x_49);
lean_ctor_set(x_61, 6, x_50);
x_62 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedSemifield___rarg___lambda__5), 3, 1);
lean_closure_set(x_62, 0, x_18);
x_63 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_16);
lean_ctor_set(x_63, 2, x_17);
lean_ctor_set(x_63, 3, x_62);
lean_ctor_set(x_63, 4, x_14);
lean_ctor_set(x_63, 5, x_15);
lean_ctor_set(x_63, 6, x_10);
lean_ctor_set(x_63, 7, x_11);
return x_63;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Injective_linearOrderedField___rarg___boxed), 43, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_linearOrderedField___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
lean_object* x_34 = _args[33];
lean_object* x_35 = _args[34];
lean_object* x_36 = _args[35];
lean_object* x_37 = _args[36];
lean_object* x_38 = _args[37];
lean_object* x_39 = _args[38];
lean_object* x_40 = _args[39];
lean_object* x_41 = _args[40];
lean_object* x_42 = _args[41];
lean_object* x_43 = _args[42];
_start:
{
lean_object* x_44; 
x_44 = l_Function_Injective_linearOrderedField___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36, x_37, x_38, x_39, x_40, x_41, x_42, x_43);
return x_44;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_InjSurj(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Field_InjSurj(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Function_Injective_linearOrderedSemifield___rarg___closed__1 = _init_l_Function_Injective_linearOrderedSemifield___rarg___closed__1();
lean_mark_persistent(l_Function_Injective_linearOrderedSemifield___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
