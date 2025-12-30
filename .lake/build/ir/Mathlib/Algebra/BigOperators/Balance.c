// Lean compiler output
// Module: Mathlib.Algebra.BigOperators.Balance
// Imports: Init Mathlib.Algebra.BigOperators.Expect
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
LEAN_EXPORT lean_object* l_Finset_sum___at_Fintype_balance___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Finset_dens___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_expect___at_Fintype_balance___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_balance___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_balance___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_balance(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Fintype_balance___spec__2(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Rat_inv(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_balance___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_expect___at_Fintype_balance___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Fintype_balance___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Fintype_balance___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Fintype_balance___spec__3___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Fintype_balance___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Fintype_balance___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_expect___at_Fintype_balance___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_3, x_5);
x_7 = l_Nat_cast___at_Finset_dens___spec__1(x_6);
x_8 = l_Rat_inv(x_7);
x_9 = l_Finset_sum___at_Fintype_balance___spec__2___rarg(x_1, x_3, x_4);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_expect___at_Fintype_balance___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_expect___at_Fintype_balance___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_balance___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_balance___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Fintype_balance___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
lean_inc(x_4);
x_7 = l_Finset_expect___at_Fintype_balance___spec__1___rarg(x_2, x_3, x_1, x_4);
x_8 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_Pi_instSub___elambda__1___rarg(x_6, x_4, x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Fintype_balance(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_balance___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_Fintype_balance___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_balance___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fintype_balance___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Expect(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_BigOperators_Balance(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Expect(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
