// Lean compiler output
// Module: Mathlib.Combinatorics.Optimization.ValuedCSP
// Imports: Init Mathlib.Algebra.BigOperators.Fin Mathlib.Algebra.Order.BigOperators.Group.Multiset Mathlib.Data.Fin.VecNotation Mathlib.Data.Matrix.Notation
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
LEAN_EXPORT lean_object* l_FractionalOperation_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_tt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_tt___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_size___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_tt___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_size___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalOperation_tt___rarg(lean_object*, lean_object*);
lean_object* l_Function_swap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ValuedCSP_Term_evalSolution___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ValuedCSP_Term_evalSolution___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ValuedCSP_Term_evalSolution(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ValuedCSP_Term_evalSolution___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_ValuedCSP_Instance_evalSolution___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = l_Multiset_map___rarg(x_7, x_4);
x_9 = l_Multiset_sum___rarg(x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ValuedCSP_Instance_evalSolution(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ValuedCSP_Instance_evalSolution___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_size___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_lengthTRAux___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_size(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FractionalOperation_size___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_size___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FractionalOperation_size___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_size___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FractionalOperation_size(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_tt___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Function_swap___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_tt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_FractionalOperation_tt___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_map___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_tt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FractionalOperation_tt___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FractionalOperation_tt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FractionalOperation_tt(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Multiset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_VecNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Notation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Optimization_ValuedCSP(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_VecNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
