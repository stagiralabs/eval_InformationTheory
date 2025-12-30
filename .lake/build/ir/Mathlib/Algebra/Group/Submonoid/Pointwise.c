// Lean compiler output
// Module: Mathlib.Algebra.Group.Submonoid.Pointwise
// Imports: Init Mathlib.Algebra.Group.Hom.End Mathlib.Algebra.Group.Submonoid.Membership Mathlib.Algebra.Order.BigOperators.Group.List Mathlib.Data.Nat.Cast.Basic Mathlib.Data.Set.Pointwise.SMul Mathlib.Order.WellFoundedSet
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
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_involutiveNeg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___rarg(lean_object*);
static lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Submonoid_invOrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_invOrderIso(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_MulDistribMulAction_toMonoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_castAddMonoidHom___rarg(lean_object*);
extern lean_object* l_Nat_instAddMonoid;
lean_object* l_Nat_cast___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_involutiveInv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_negOrderIso___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_hasDistribNeg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___rarg(lean_object*);
static lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_invOrderIso___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Submonoid_invOrderIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_hasDistribNeg___rarg(lean_object*);
lean_object* l_DistribSMul_toAddMonoidHom___at_DistribMulAction_toAddMonoidHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_binaryRec___at_npowBinRec_go___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_one(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_neg___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_involutiveInv(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_neg(lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_one___rarg(lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubmonoid_instCompleteLattice___rarg(lean_object*);
lean_object* l_AddMonoidHom_mulLeft___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1___rarg(lean_object*);
lean_object* l_npowBinRec_go___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_negOrderIso(lean_object*);
static lean_object* l_AddSubmonoid_monoid___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_involutiveNeg___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_inv___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_inv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_inv___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_inv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_inv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_inv___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_neg___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_neg___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_involutiveInv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_inv___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_involutiveInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_involutiveInv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_involutiveNeg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_involutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_involutiveNeg___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Submonoid_invOrderIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_inv___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Submonoid_invOrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_inv___at_Submonoid_invOrderIso___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_invOrderIso___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_inv___at_Submonoid_invOrderIso___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_invOrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_invOrderIso___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_negOrderIso___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_neg___at_AddSubmonoid_negOrderIso___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_negOrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_negOrderIso___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg(x_1, lean_box(0), x_6, x_5);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_pointwiseMulAction___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_map___at_Submonoid_pointwiseMulAction___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_pointwiseMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submonoid_pointwiseMulAction___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_DistribMulAction_toAddMonoidHom___spec__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg(x_1, lean_box(0), x_6, x_5);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_pointwiseMulAction___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_pointwiseMulAction___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_pointwiseMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubmonoid_pointwiseMulAction___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instAddMonoid;
x_2 = l_AddMonoid_toAddZeroClass___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2;
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg(x_1, lean_box(0), x_3, x_4);
x_6 = l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg(x_1, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_one___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = l_Nat_castAddMonoidHom___rarg(x_1);
x_3 = l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg(x_1, lean_box(0), x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_one(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_one___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_one___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_copy___at_AddSubmonoid_one___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_6 = l_AddSubmonoid_instCompleteLattice___rarg(x_5);
x_7 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg(x_1, lean_box(0), x_5, x_3);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_AddSubmonoid_smul___elambda__1___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
x_7 = l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg(x_1, x_2, x_4, x_6);
lean_dec(x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_smul___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_smul___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_smul___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DistribSMul_toAddMonoidHom___at_AddSubmonoid_smul___elambda__1___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_smul___elambda__1___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iSup___at_AddSubmonoid_smul___elambda__1___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_smul___elambda__1___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_smul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubmonoid_smul___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_4);
x_6 = l_AddSubmonoid_instCompleteLattice___rarg(x_5);
x_7 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_mulLeft___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg(x_1, lean_box(0), x_4, x_2);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_mul___elambda__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg(x_1, x_2, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_mul___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_mul___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_mul___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_mul___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iSup___at_AddSubmonoid_mul___elambda__1___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_mul___elambda__1___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_mul___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_hasDistribNeg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_neg___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_hasDistribNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_hasDistribNeg___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Nat_cast___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2;
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg(x_1, lean_box(0), x_3, x_4);
x_6 = l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg(x_1, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_AddSubmonoid_mul___elambda__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg(x_1);
x_3 = l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg(x_1, lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_mulOneClass___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_mulOneClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_castAddMonoidHom___at_AddSubmonoid_mulOneClass___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AddSubmonoid_mulOneClass___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_copy___at_AddSubmonoid_mulOneClass___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_mrange___at_AddSubmonoid_mulOneClass___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_mulOneClass___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_mulOneClass___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_mul___elambda__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_semigroup___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_semigroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_semigroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_AddSubmonoid_monoid___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_AddSubmonoid_monoid___elambda__1___rarg___closed__1;
x_6 = l_Nat_binaryRec___at_npowBinRec_go___spec__1___rarg(x_1, x_5, x_3, x_2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_monoid___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_semigroup___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_dec(x_1);
x_5 = l_AddSubmonoid_mulOneClass___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_AddSubmonoid_monoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_monoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_monoid___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_monoid___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Hom_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Membership(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_List(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_WellFoundedSet(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Pointwise(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Hom_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Membership(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_WellFoundedSet(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__1 = _init_l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__1();
lean_mark_persistent(l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__1);
l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2 = _init_l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2();
lean_mark_persistent(l_AddMonoidHom_mrange___at_AddSubmonoid_one___spec__1___rarg___closed__2);
l_AddSubmonoid_monoid___elambda__1___rarg___closed__1 = _init_l_AddSubmonoid_monoid___elambda__1___rarg___closed__1();
lean_mark_persistent(l_AddSubmonoid_monoid___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
