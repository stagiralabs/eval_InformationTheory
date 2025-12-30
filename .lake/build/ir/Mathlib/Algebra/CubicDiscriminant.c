// Lean compiler output
// Module: Mathlib.Algebra.CubicDiscriminant
// Imports: Init Mathlib.Algebra.Polynomial.Splits Mathlib.Tactic.IntervalCases
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
LEAN_EXPORT lean_object* l_Cubic_instInhabited___rarg(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_map(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_instZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cubic_map___rarg(lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_disc(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_disc___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_instZero(lean_object*);
LEAN_EXPORT lean_object* l_Cubic_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc_n(x_1, 3);
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cubic_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cubic_instInhabited___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cubic_instZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc_n(x_1, 3);
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cubic_instZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cubic_instZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cubic_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_1, x_9);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_6);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Cubic_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Cubic_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cubic_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Cubic_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cubic_disc___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_inc(x_1);
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_4);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_9 = l_AddGroupWithOne_toAddGroup___rarg(x_8);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 3);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(2u);
lean_inc(x_14);
lean_inc(x_13);
x_16 = lean_apply_2(x_14, x_15, x_13);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
lean_inc(x_14);
lean_inc(x_17);
x_18 = lean_apply_2(x_14, x_15, x_17);
lean_inc(x_11);
x_19 = lean_apply_2(x_11, x_16, x_18);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_dec(x_8);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_unsigned_to_nat(4u);
lean_inc(x_21);
x_23 = lean_apply_1(x_21, x_22);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_inc(x_11);
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_apply_2(x_11, x_23, x_24);
x_26 = lean_unsigned_to_nat(3u);
lean_inc(x_14);
lean_inc(x_17);
x_27 = lean_apply_2(x_14, x_26, x_17);
lean_inc(x_11);
x_28 = lean_apply_2(x_11, x_25, x_27);
lean_inc(x_10);
x_29 = lean_apply_2(x_10, x_19, x_28);
lean_inc(x_14);
lean_inc(x_13);
x_30 = lean_apply_2(x_14, x_26, x_13);
lean_inc(x_11);
x_31 = lean_apply_2(x_11, x_23, x_30);
x_32 = lean_ctor_get(x_2, 3);
lean_inc(x_32);
lean_dec(x_2);
lean_inc(x_11);
lean_inc(x_32);
x_33 = lean_apply_2(x_11, x_31, x_32);
lean_inc(x_10);
x_34 = lean_apply_2(x_10, x_29, x_33);
x_35 = lean_unsigned_to_nat(27u);
lean_inc(x_21);
x_36 = lean_apply_1(x_21, x_35);
lean_inc(x_14);
lean_inc(x_24);
x_37 = lean_apply_2(x_14, x_15, x_24);
lean_inc(x_11);
x_38 = lean_apply_2(x_11, x_36, x_37);
lean_inc(x_32);
x_39 = lean_apply_2(x_14, x_15, x_32);
lean_inc(x_11);
x_40 = lean_apply_2(x_11, x_38, x_39);
x_41 = lean_apply_2(x_10, x_34, x_40);
x_42 = lean_unsigned_to_nat(18u);
x_43 = lean_apply_1(x_21, x_42);
lean_inc(x_11);
x_44 = lean_apply_2(x_11, x_43, x_24);
lean_inc(x_11);
x_45 = lean_apply_2(x_11, x_44, x_13);
lean_inc(x_11);
x_46 = lean_apply_2(x_11, x_45, x_17);
x_47 = lean_apply_2(x_11, x_46, x_32);
x_48 = lean_apply_2(x_7, x_41, x_47);
return x_48;
}
}
LEAN_EXPORT lean_object* l_Cubic_disc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cubic_disc___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Splits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_CubicDiscriminant(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Splits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
