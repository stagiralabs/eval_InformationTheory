// Lean compiler output
// Module: Mathlib.Combinatorics.Additive.ETransform
// Imports: Init Mathlib.Algebra.Group.Pointwise.Finset.Basic
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
LEAN_EXPORT lean_object* l_Finset_mulETransformLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulETransformLeft(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addDysonETransform___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulETransformRight(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addETransformRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addETransformLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addETransformRight(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulDysonETransform___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_Monoid_toOppositeMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulDysonETransform(lean_object*);
lean_object* l_Finset_smulFinset___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_vaddFinset___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toOppositeAddAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addDysonETransform(lean_object*);
lean_object* l_AddMonoid_toAddAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulETransformRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addETransformLeft(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulDysonETransform___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Monoid_toMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_7);
lean_inc(x_1);
x_9 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_7, x_3, x_8);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_9, x_5);
x_11 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_12, x_3);
lean_inc(x_1);
x_14 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_7, x_13, x_5);
x_15 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_14, x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Finset_mulDysonETransform(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mulDysonETransform___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addDysonETransform___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_AddMonoid_toAddAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_7);
lean_inc(x_1);
x_9 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_7, x_3, x_8);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_9, x_5);
x_11 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_12, x_3);
lean_inc(x_1);
x_14 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_7, x_13, x_5);
x_15 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_14, x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Finset_addDysonETransform(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addDysonETransform___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_mulETransformLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Monoid_toOppositeMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_7, x_3, x_5);
lean_inc(x_1);
x_9 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_8, x_5);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_Monoid_toMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_3);
lean_inc(x_10);
lean_inc(x_1);
x_15 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_11, x_14, x_10);
x_16 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_15, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Finset_mulETransformLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mulETransformLeft___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addETransformLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_AddMonoid_toOppositeAddAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_7, x_3, x_5);
lean_inc(x_1);
x_9 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_8, x_5);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_AddMonoid_toAddAction___rarg___boxed), 3, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_3);
lean_inc(x_10);
lean_inc(x_1);
x_15 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_11, x_14, x_10);
x_16 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_15, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Finset_addETransformLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addETransformLeft___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_mulETransformRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Monoid_toOppositeMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_7, x_3, x_5);
lean_inc(x_1);
x_9 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_8, x_5);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_Monoid_toMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_3);
lean_inc(x_10);
lean_inc(x_1);
x_15 = l_Finset_smulFinset___elambda__1___rarg(x_1, x_11, x_14, x_10);
x_16 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_15, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Finset_mulETransformRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mulETransformRight___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addETransformRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_AddMonoid_toOppositeAddAction___rarg___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_7, x_3, x_5);
lean_inc(x_1);
x_9 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_8, x_5);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_AddMonoid_toAddAction___rarg___boxed), 3, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_3);
lean_inc(x_10);
lean_inc(x_1);
x_15 = l_Finset_vaddFinset___elambda__1___rarg(x_1, x_11, x_14, x_10);
x_16 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_15, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Finset_addETransformRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addETransformRight___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Additive_ETransform(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
