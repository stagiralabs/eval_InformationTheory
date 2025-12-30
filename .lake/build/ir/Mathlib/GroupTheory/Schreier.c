// Lean compiler output
// Module: Mathlib.GroupTheory.Schreier
// Imports: Init Mathlib.Algebra.Group.Pointwise.Finset.Basic Mathlib.GroupTheory.Abelianization Mathlib.GroupTheory.Commutator.Finite Mathlib.GroupTheory.Transfer
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
LEAN_EXPORT lean_object* l_Subgroup_cardCommutatorBound___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_cardCommutatorBound(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_cardCommutatorBound(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_mul(x_2, x_1);
x_4 = lean_nat_pow(x_1, x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
lean_dec(x_3);
x_7 = lean_nat_pow(x_1, x_6);
lean_dec(x_6);
x_8 = lean_nat_add(x_7, x_5);
lean_dec(x_7);
x_9 = lean_nat_pow(x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subgroup_cardCommutatorBound___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_cardCommutatorBound(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Abelianization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Commutator_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Transfer(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Schreier(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Abelianization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Commutator_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Transfer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
