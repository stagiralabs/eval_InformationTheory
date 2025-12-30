// Lean compiler output
// Module: Mathlib.Data.List.ToFinsupp
// Imports: Init Mathlib.Algebra.BigOperators.Group.List.Basic Mathlib.Algebra.Group.Embedding Mathlib.Algebra.Group.Nat.Defs Mathlib.Data.Finsupp.Single Mathlib.Data.List.GetD
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
lean_object* l_Multiset_filter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp(lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_getD___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_toFinsupp___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinsupp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_2, x_4);
x_6 = l_List_range(x_5);
x_7 = l_Multiset_filter___rarg(x_3, x_6);
x_8 = lean_alloc_closure((void*)(l_List_toFinsupp___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_toFinsupp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_toFinsupp___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinsupp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_toFinsupp___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_List_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Embedding(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Single(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_GetD(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_ToFinsupp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Embedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Single(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_GetD(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
