// Lean compiler output
// Module: Mathlib.NumberTheory.PythagoreanTriples
// Imports: Init Mathlib.Data.Int.NatPrime Mathlib.Data.ZMod.Basic Mathlib.RingTheory.Int.Basic Mathlib.Tactic.FieldSimp
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
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__1(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__2(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen___rarg(lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_6);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_Ring_toAddGroupWithOne___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_2(x_10, x_11, x_15);
x_17 = lean_apply_2(x_4, x_5, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_circleEquivGen___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_1);
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_7);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_Ring_toAddGroupWithOne___rarg(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_apply_1(x_13, x_14);
lean_inc(x_2);
x_16 = lean_apply_2(x_9, x_15, x_2);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_12, 2);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Field_toSemifield___rarg(x_1);
lean_dec(x_1);
x_20 = l_Semifield_toDivisionSemiring___rarg(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 3);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_2(x_22, x_14, x_2);
lean_inc(x_23);
lean_inc(x_18);
x_24 = lean_apply_2(x_17, x_18, x_23);
lean_inc(x_4);
lean_inc(x_24);
x_25 = lean_apply_2(x_4, x_16, x_24);
x_26 = l_AddGroupWithOne_toAddGroup___rarg(x_11);
lean_dec(x_11);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_apply_2(x_27, x_18, x_23);
x_29 = lean_apply_2(x_4, x_28, x_24);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_circleEquivGen___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_circleEquivGen___elambda__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_circleEquivGen___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_circleEquivGen___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_circleEquivGen___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_circleEquivGen(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_circleEquivGen___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_NatPrime(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Int_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_PythagoreanTriples(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_NatPrime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Int_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
