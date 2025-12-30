// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Finite
// Imports: Init Mathlib.Data.Finite.Sum Mathlib.Data.Finset.Fin Mathlib.Data.Int.Order.Units Mathlib.GroupTheory.OrderOfElement Mathlib.GroupTheory.Perm.Support Mathlib.Logic.Equiv.Fintype
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
lean_object* l_Equiv_Perm_subtypePerm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfFintype(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_subtypePerm___rarg(x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypePermOfFintype___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Order_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_OrderOfElement(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fintype(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Finite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Order_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_OrderOfElement(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fintype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
