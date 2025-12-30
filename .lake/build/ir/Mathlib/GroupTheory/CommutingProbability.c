// Lean compiler output
// Module: Mathlib.GroupTheory.CommutingProbability
// Imports: Init Mathlib.Data.Nat.Cast.Field Mathlib.GroupTheory.Abelianization Mathlib.GroupTheory.GroupAction.CardCommute Mathlib.GroupTheory.SpecificGroups.Dihedral Mathlib.Tactic.FieldSimp Mathlib.Tactic.LinearCombination Mathlib.Tactic.Qify
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
LEAN_EXPORT lean_object* l_DihedralGroup_reciprocalFactors___boxed(lean_object*);
static lean_object* l_DihedralGroup_reciprocalFactors___closed__1;
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l_Nat_instDecidablePredEven(lean_object*);
LEAN_EXPORT lean_object* l_DihedralGroup_reciprocalFactors(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* _init_l_DihedralGroup_reciprocalFactors___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_reciprocalFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Nat_instDecidablePredEven(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_unsigned_to_nat(4u);
x_8 = lean_nat_mod(x_1, x_7);
x_9 = lean_nat_mul(x_8, x_1);
lean_dec(x_8);
x_10 = lean_nat_div(x_1, x_7);
x_11 = lean_nat_add(x_10, x_4);
lean_dec(x_10);
x_12 = l_DihedralGroup_reciprocalFactors(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_nat_div(x_1, x_14);
x_16 = l_DihedralGroup_reciprocalFactors(x_15);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(3u);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
else
{
lean_object* x_20; 
x_20 = l_DihedralGroup_reciprocalFactors___closed__1;
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_DihedralGroup_reciprocalFactors___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DihedralGroup_reciprocalFactors(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Abelianization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_CardCommute(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_Dihedral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Qify(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_CommutingProbability(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Abelianization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_CardCommute(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_SpecificGroups_Dihedral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Qify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DihedralGroup_reciprocalFactors___closed__1 = _init_l_DihedralGroup_reciprocalFactors___closed__1();
lean_mark_persistent(l_DihedralGroup_reciprocalFactors___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
