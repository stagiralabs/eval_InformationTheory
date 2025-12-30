// Lean compiler output
// Module: Mathlib.LinearAlgebra.Lagrange
// Imports: Init Mathlib.Algebra.BigOperators.Group.Finset.Pi Mathlib.Algebra.Polynomial.FieldDivision Mathlib.LinearAlgebra.Vandermonde Mathlib.RingTheory.Polynomial.Basic
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
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight(lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2(lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
lean_object* l_CommRing_toCommMonoid___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Monoid_toMulOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_CommRing_toCommMonoid___rarg(x_3);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_foldrTR___rarg(x_5, x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Multiset_map___rarg(x_4, x_3);
x_6 = l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_5 = l_Field_toSemifield___rarg(x_1);
x_6 = l_Semifield_toCommGroupWithZero___rarg(x_5);
x_7 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_6);
x_8 = l_DivInvOneMonoid_toInvOneClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Field_toDivisionRing___rarg(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Ring_toAddGroupWithOne___rarg(x_11);
x_13 = l_AddGroupWithOne_toAddGroup___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_2);
x_15 = lean_apply_1(x_2, x_3);
x_16 = lean_apply_1(x_2, x_4);
x_17 = lean_apply_2(x_14, x_15, x_16);
x_18 = lean_apply_1(x_9, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_6);
x_7 = l_Multiset_erase___rarg(x_3, x_4, x_6);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lagrange_nodalWeight___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
lean_closure_set(x_8, 2, x_6);
x_9 = l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg(x_1, lean_box(0), x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lagrange_nodalWeight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lagrange_nodalWeight___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_prod___at_Lagrange_nodalWeight___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_prod___at_Lagrange_nodalWeight___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_FieldDivision(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Vandermonde(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Lagrange(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_FieldDivision(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Vandermonde(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
