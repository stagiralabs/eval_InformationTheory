// Lean compiler output
// Module: Mathlib.Dynamics.PeriodicPts.Defs
// Imports: Init Batteries.Data.Nat.Gcd Mathlib.Algebra.Group.Action.Defs Mathlib.Algebra.Order.Group.Nat Mathlib.Algebra.Order.Sub.Basic Mathlib.Data.Int.Basic Mathlib.Data.List.Cycle Mathlib.Data.PNat.Notation Mathlib.Dynamics.FixedPoints.Basic
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
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_IsPeriodicPt_instDecidableOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_IsPeriodicPt_instDecidableOfDecidableEq(lean_object*);
lean_object* l_Function_IsFixedPt_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_IsPeriodicPt_instDecidableOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Nat_iterate___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Function_IsFixedPt_decidable___rarg(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_IsPeriodicPt_instDecidableOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_IsPeriodicPt_instDecidableOfDecidableEq___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Nat_Gcd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Cycle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Dynamics_FixedPoints_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Dynamics_PeriodicPts_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Nat_Gcd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Cycle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Dynamics_FixedPoints_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
