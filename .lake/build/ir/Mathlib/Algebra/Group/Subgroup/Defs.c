// Lean compiler output
// Module: Mathlib.Algebra.Group.Subgroup.Defs
// Imports: Init Mathlib.Algebra.Group.Submonoid.Defs Mathlib.Tactic.Common Mathlib.Tactic.FastInstance
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
LEAN_EXPORT lean_object* l_SubgroupClass_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_IsCommutative_commGroup(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_IsCommutative_commGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InvMemClass_inv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup(lean_object*);
lean_object* l_Submonoid_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_SubgroupClass_inclusion___rarg___closed__1;
LEAN_EXPORT lean_object* l_SubgroupClass_div___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InvMemClass_inv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_mul(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_div___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_toAddGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_sub(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer(lean_object*);
lean_object* l_AddSubmonoid_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_neg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_div___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_npow___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_normalizer___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_IsCommutative_addCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_zpow___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_copy(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_toCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_toCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_normalizer(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_copy(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_ofDiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inclusion(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_npow(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_one(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_add___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_mul___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_div(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_sub___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_zpow(lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zero___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_one___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_one___rarg(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InvMemClass_inv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zero(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_zpow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_mul___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_toCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_div___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_toCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inv(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_zpow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_ofDiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubmonoidClass_toMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_toGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_toAddGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NegMemClass_neg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_toAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_IsCommutative_addCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_add(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul(lean_object*, lean_object*);
lean_object* l_AddSubmonoidClass_toAddMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_neg___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_normalizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_toGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_zpow___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_ofDiv(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_zpow___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_npow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NegMemClass_neg___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_inv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_toAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InvMemClass_inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InvMemClass_inv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_InvMemClass_inv___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_InvMemClass_inv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_InvMemClass_inv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NegMemClass_neg___elambda__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NegMemClass_neg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_NegMemClass_neg___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NegMemClass_neg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NegMemClass_neg___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NegMemClass_neg___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NegMemClass_neg___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_div___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_div(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubgroupClass_div___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_div___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubgroupClass_div___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroupClass_sub___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddSubgroupClass_sub___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroupClass_sub___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_sub___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroupClass_sub___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroupClass_zsmul___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_zsmul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubgroupClass_zsmul___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_zpow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_6, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_zpow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubgroupClass_zpow___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_zpow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubgroupClass_zpow___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_4);
x_7 = l_SubmonoidClass_toMonoid___rarg(x_6, lean_box(0), x_4, lean_box(0), x_3);
x_8 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_InvMemClass_inv___rarg___boxed), 5, 4);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_SubgroupClass_div___rarg___boxed), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, lean_box(0));
lean_closure_set(x_11, 3, x_3);
x_12 = lean_alloc_closure((void*)(l_SubgroupClass_toGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_toGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubgroupClass_toGroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_4);
x_7 = l_AddSubmonoidClass_toAddMonoid___rarg(x_6, lean_box(0), x_4, lean_box(0), x_3);
x_8 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_NegMemClass_neg___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_AddSubgroupClass_sub___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_3);
x_12 = lean_alloc_closure((void*)(l_AddSubgroupClass_toAddGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroupClass_toAddGroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_toCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubgroupClass_toGroup___rarg(x_3, lean_box(0), x_1, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_toCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubgroupClass_toCommGroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroupClass_toAddGroup___rarg(x_3, lean_box(0), x_1, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_toAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroupClass_toAddCommGroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SubgroupClass_subtype___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubgroupClass_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubgroupClass_subtype(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddSubgroupClass_subtype___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubgroupClass_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubgroupClass_subtype(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_SubgroupClass_inclusion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SubgroupClass_inclusion___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubgroupClass_inclusion___rarg___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubgroupClass_inclusion___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHom_mk_x27___at_SubgroupClass_inclusion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubgroupClass_inclusion___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubgroupClass_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubgroupClass_inclusion___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubgroupClass_inclusion___rarg___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroupClass_inclusion___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddMonoidHom_mk_x27___at_AddSubgroupClass_inclusion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddSubgroupClass_inclusion___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_ofDiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_ofDiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_ofDiv___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_ofDiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_ofDiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_ofSub___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_ofSub___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_ofSub___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_mul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Monoid_toMulOneClass___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Submonoid_mul___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_mul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_mul___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_mul___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_mul___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_add___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_AddSubmonoid_add___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_add(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_add___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_add___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_add___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_one___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Monoid_toMulOneClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_one(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_one___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_one___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_one___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_zero___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zero___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_zero___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_inv___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_inv___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_neg___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_neg___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroup_neg___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_neg___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_neg___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_neg___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_div___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_div(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_div___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_div___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_div___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_sub___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_sub___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroup_sub___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_sub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_sub___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_sub___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_sub___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_nsmul___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_nsmul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_nsmul___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_npow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_4, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_npow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_npow___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_npow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_npow___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_zsmul___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_zsmul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_zsmul___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_zpow___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_zpow___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_toGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubgroupClass_toGroup___rarg(x_1, lean_box(0), x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_toGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_toGroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_toAddGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_AddSubgroupClass_toAddGroup___rarg(x_1, lean_box(0), x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_toAddGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_toAddGroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_toCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubgroupClass_toGroup___rarg(x_1, lean_box(0), x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_toCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_toCommGroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_toAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_AddSubgroupClass_toAddGroup___rarg(x_1, lean_box(0), x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_toAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_toAddCommGroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subgroup_subtype___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_subtype(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubgroup_subtype___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubgroup_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_subtype(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubgroupClass_inclusion___rarg___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_inclusion___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_mk_x27___at_Subgroup_inclusion___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_inclusion___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubgroupClass_inclusion___rarg___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_inclusion___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_mk_x27___at_AddSubgroup_inclusion___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_inclusion___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_normalizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_normalizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_normalizer___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_normalizer___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_normalizer___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_normalizer___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_normalizer___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_normalizer___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_setNormalizer___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_setNormalizer___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_setNormalizer___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_setNormalizer___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_setNormalizer___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_setNormalizer___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_IsCommutative_commGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_toGroup___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_IsCommutative_commGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_IsCommutative_commGroup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_IsCommutative_addCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_toAddGroup___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_IsCommutative_addCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_IsCommutative_addCommGroup___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FastInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SubgroupClass_inclusion___rarg___closed__1 = _init_l_SubgroupClass_inclusion___rarg___closed__1();
lean_mark_persistent(l_SubgroupClass_inclusion___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
