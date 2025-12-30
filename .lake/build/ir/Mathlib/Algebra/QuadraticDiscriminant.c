// Lean compiler output
// Module: Mathlib.Algebra.QuadraticDiscriminant
// Imports: Init Mathlib.Order.Filter.AtTopBot.Field Mathlib.Tactic.FieldSimp Mathlib.Tactic.LinearCombination Mathlib.Tactic.Linarith.Frontend
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
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_discrim(lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_discrim___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_discrim___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_1);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_6 = l_AddGroupWithOne_toAddGroup___rarg(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = lean_apply_2(x_9, x_10, x_3);
x_12 = l_Ring_toNonAssocRing___rarg(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(4u);
x_18 = lean_apply_1(x_16, x_17);
lean_inc(x_14);
x_19 = lean_apply_2(x_14, x_18, x_2);
x_20 = lean_apply_2(x_14, x_19, x_4);
x_21 = lean_apply_2(x_7, x_11, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_discrim(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_discrim___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Frontend(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_QuadraticDiscriminant(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Frontend(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
