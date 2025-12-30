// Lean compiler output
// Module: Mathlib.RingTheory.Nilpotent.Basic
// Imports: Init Mathlib.Algebra.GeomSum Mathlib.Algebra.Group.Action.Prod Mathlib.Algebra.GroupWithZero.NonZeroDivisors Mathlib.Algebra.NoZeroSMulDivisors.Defs Mathlib.Algebra.SMulWithZero Mathlib.Data.Nat.Choose.Sum Mathlib.Data.Nat.Lattice Mathlib.RingTheory.Nilpotent.Defs
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GeomSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_NonZeroDivisors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_NoZeroSMulDivisors_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_SMulWithZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Nilpotent_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GeomSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_NonZeroDivisors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_NoZeroSMulDivisors_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_SMulWithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
