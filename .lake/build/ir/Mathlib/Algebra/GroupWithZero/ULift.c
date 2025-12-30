// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.ULift
// Imports: Init Mathlib.Algebra.Group.ULift Mathlib.Algebra.GroupWithZero.InjSurj
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
lean_object* l_ULift_div___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroOneClass___rarg(lean_object*);
lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object*);
lean_object* l_ULift_inv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_commMonoidWithZero(lean_object*);
LEAN_EXPORT lean_object* l_ULift_groupWithZero(lean_object*);
LEAN_EXPORT lean_object* l_ULift_commGroupWithZero(lean_object*);
lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_monoidWithZero___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_monoidWithZero___rarg(lean_object*);
lean_object* l_CommGroupWithZero_toGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_commGroupWithZero___rarg(lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_commMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_monoidWithZero(lean_object*);
LEAN_EXPORT lean_object* l_ULift_groupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroOneClass(lean_object*);
lean_object* l_ULift_mul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulZeroOneClass___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_MulZeroOneClass_toMulZeroClass___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ULift_mulZeroOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulZeroOneClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_monoidWithZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_ULift_monoidWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_1);
lean_inc(x_2);
x_3 = l_MulZeroOneClass_toMulZeroClass___rarg(x_2);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_10, 0, x_5);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_18, 0, x_12);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_13);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_ULift_monoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_commMonoidWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
lean_inc(x_2);
x_3 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_2);
lean_inc(x_3);
x_4 = l_MulZeroOneClass_toMulZeroClass___rarg(x_3);
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
lean_dec(x_3);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_14);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_ULift_commMonoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_commMonoidWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_groupWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_inc(x_2);
x_3 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_2);
lean_inc(x_3);
x_4 = l_MulZeroOneClass_toMulZeroClass___rarg(x_3);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_ULift_inv___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_ULift_div___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_15, 0, x_6);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_10);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_2, 0, x_16);
x_17 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_1);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_2, 0);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_2);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
lean_dec(x_4);
x_22 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_dec(x_3);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
x_26 = lean_alloc_closure((void*)(l_ULift_inv___rarg), 2, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_ULift_div___rarg), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_29, 0, x_19);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_20);
x_32 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_32, 0, x_1);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_28);
lean_ctor_set(x_33, 3, x_32);
return x_33;
}
}
}
LEAN_EXPORT lean_object* l_ULift_groupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_groupWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_commGroupWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = l_CommGroupWithZero_toGroupWithZero___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_3);
x_4 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_3);
lean_inc(x_4);
x_5 = l_MulZeroOneClass_toMulZeroClass___rarg(x_4);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_ULift_inv___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_alloc_closure((void*)(l_ULift_div___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_16, 0, x_7);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_2);
lean_ctor_set(x_3, 0, x_17);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
x_22 = lean_ctor_get(x_5, 0);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_ctor_get(x_4, 0);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_alloc_closure((void*)(l_ULift_inv___rarg), 2, 1);
lean_closure_set(x_27, 0, x_26);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_alloc_closure((void*)(l_ULift_div___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_closure((void*)(l_ULift_monoidWithZero___rarg___lambda__1), 3, 1);
lean_closure_set(x_30, 0, x_20);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_25);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_32, 0, x_2);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_27);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_32);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_ULift_commGroupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_commGroupWithZero___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_InjSurj(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_ULift(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
