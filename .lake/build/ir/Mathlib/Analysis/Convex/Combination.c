// Lean compiler output
// Module: Mathlib.Analysis.Convex.Combination
// Imports: Init Mathlib.Algebra.Order.BigOperators.Ring.Finset Mathlib.Analysis.Convex.Hull Mathlib.LinearAlgebra.AffineSpace.Basis
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
lean_object* l_LinearOrderedSemifield_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__1(lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_centerMass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_centerMass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexHullAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DFunLike_coe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_convexHullAddMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Finset_centerMass___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexHullAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_6);
x_8 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Multiset_map___rarg(x_3, x_2);
x_11 = l_Multiset_sum___rarg(x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Finset_centerMass___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Finset_centerMass___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Finset_centerMass___spec__3___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_centerMass___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Finset_centerMass___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_centerMass___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_centerMass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_7 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
x_8 = l_LinearOrderedSemifield_toSemifield___rarg(x_7);
x_9 = l_Semifield_toCommGroupWithZero___rarg(x_8);
x_10 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_9);
x_11 = l_DivInvOneMonoid_toInvOneClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Finset_sum___at_Finset_centerMass___spec__1___rarg(x_1, x_4, x_5);
x_14 = lean_apply_1(x_12, x_13);
lean_inc(x_3);
x_15 = lean_alloc_closure((void*)(l_Finset_centerMass___rarg___lambda__1), 4, 3);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_3);
x_16 = l_Finset_sum___at_Finset_centerMass___spec__2___rarg(x_2, x_4, x_15);
x_17 = lean_apply_2(x_3, x_14, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Finset_centerMass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_centerMass___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_Finset_centerMass___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_convexHullAddMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_DFunLike_coe___rarg), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_convexHullAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_convexHullAddMonoidHom___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_convexHullAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_convexHullAddMonoidHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_Hull(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_Basis(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Convex_Combination(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_Hull(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_Basis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_convexHullAddMonoidHom___closed__1 = _init_l_convexHullAddMonoidHom___closed__1();
lean_mark_persistent(l_convexHullAddMonoidHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
