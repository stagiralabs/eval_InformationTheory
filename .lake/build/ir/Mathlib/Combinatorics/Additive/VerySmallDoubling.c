// Lean compiler output
// Module: Mathlib.Combinatorics.Additive.VerySmallDoubling
// Imports: Init Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Algebra.Group.Pointwise.Finset.Basic Mathlib.Algebra.Group.Submonoid.Pointwise Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.GroupTheory.GroupAction.Defs Mathlib.SetTheory.Cardinal.Finite Mathlib.Tactic.Linarith Mathlib.Tactic.Qify
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
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2(lean_object*);
lean_object* l_Finset_image___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1;
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_invMulSubgroup___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_invMulSubgroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_invMulSubgroup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_product___rarg(x_3, x_4);
x_7 = l_Finset_image___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__2___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Monoid_toMulOneClass___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Finset_image___rarg(x_2, x_9, x_3);
x_11 = l_Finset_image_u2082___at_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___spec__1___rarg(x_2, x_7, x_10, x_3);
x_12 = l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1;
x_13 = l_Multiset_pmap___rarg(x_12, x_11, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Qify(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Additive_VerySmallDoubling(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Qify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1 = _init_l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1();
lean_mark_persistent(l_Finset_instFintypeSubtypeMemSubgroupInvMulSubgroup___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
