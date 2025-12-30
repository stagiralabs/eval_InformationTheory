// Lean compiler output
// Module: Mathlib.GroupTheory.GroupAction.ConjAct
// Imports: Init Mathlib.Algebra.Group.Subgroup.ZPowers.Basic Mathlib.Data.Fintype.Card Mathlib.GroupTheory.GroupAction.Defs Mathlib.GroupTheory.Subgroup.Centralizer
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
static lean_object* l_ConjAct_ofConjAct___closed__2;
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instMulDistribMulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAut_conjNormal(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_MulAut_conjNormal___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_rec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulAut_conjNormal___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction(lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instFintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_rec___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submonoid_toMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_ConjAct_ofConjAct___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_ConjAct_unitsScalar___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instFintype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_MulAut_conjNormal___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instFintype(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_rec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5(lean_object*);
lean_object* l_Units_instDivInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_unitsMulDistribMulAction(lean_object*);
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_unitsMulDistribMulAction___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instSMul(lean_object*);
static lean_object* l_ConjAct_toConjAct___closed__1;
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instMulDistribMulAction(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Submonoid_centralizer___rarg(lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_ConjAct_unitsScalar___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instGroup___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_MulAut_conjNormal___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_MulAut_conjNormal___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instGroup(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_instGroup___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instGroup___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instGroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_instGroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instDivInvMonoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instDivInvMonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_instDivInvMonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instFintype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instFintype___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instFintype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_instFintype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_ConjAct_ofConjAct___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ConjAct_ofConjAct___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ConjAct_ofConjAct___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_ConjAct_toConjAct___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ConjAct_ofConjAct___closed__2;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_toConjAct___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_toConjAct(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_rec___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_rec(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ConjAct_rec___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjAct_rec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ConjAct_rec(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Monoid_toMulOneClass___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_apply_2(x_6, x_2, x_3);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_2);
x_10 = lean_apply_2(x_6, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instSMul___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_ConjAct_unitsScalar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Monoid_toMulOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_apply_2(x_5, x_6, x_3);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_unitsScalar___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_ConjAct_unitsScalar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___at_ConjAct_unitsScalar___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_unitsScalar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ConjAct_unitsScalar___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjAct_unitsMulDistribMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_unitsScalar___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_unitsMulDistribMulAction(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_unitsMulDistribMulAction___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instMulDistribMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instSMul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_instMulDistribMulAction(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_instMulDistribMulAction___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Monoid_toMulOneClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
lean_inc(x_4);
x_9 = lean_apply_2(x_8, x_4, x_5);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, x_4);
x_12 = lean_apply_2(x_8, x_9, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_Subgroup_conjAction___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ConjAct_Subgroup_conjAction___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Monoid_toMulOneClass___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_3);
x_7 = lean_apply_2(x_6, x_3, x_4);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_1(x_8, x_3);
x_10 = lean_apply_2(x_6, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ConjAct_Subgroup_conjMulDistribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ConjAct_Subgroup_conjMulDistribMulAction___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Monoid_toMulOneClass___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_apply_2(x_6, x_2, x_4);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_apply_1(x_8, x_2);
x_10 = lean_apply_2(x_6, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = l_ConjAct_Subgroup_conjMulDistribMulAction___rarg(x_1, x_2, lean_box(0));
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_MulAut_conjNormal___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_MulAut_conjNormal___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_toPermHom___at_MulAut_conjNormal___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg(x_1, x_2, lean_box(0), x_4);
x_6 = l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg(x_1, x_2, lean_box(0), x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_MulAut_conjNormal___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_MulAut_conjNormal___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulAut___at_MulAut_conjNormal___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_MulAut_conjNormal___spec__7___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAut_conjNormal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
x_5 = l_ConjAct_toConjAct(lean_box(0), x_1);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulAut_conjNormal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAut_conjNormal___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulDistribMulAction_toMonoidHom___at_MulAut_conjNormal___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___at_MulAut_conjNormal___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulDistribMulAction_toMulEquiv___at_MulAut_conjNormal___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulEquiv_toMonoidHom___at_MulAut_conjNormal___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MulAut_conjNormal___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonoidHom_comp___at_MulAut_conjNormal___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_4);
x_9 = lean_apply_1(x_1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Submonoid_toMonoid___rarg(x_1, x_5);
x_8 = lean_alloc_closure((void*)(l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_Equiv_symm___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg___boxed), 1, 0);
x_7 = l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg(x_1, x_3, x_2, x_6);
x_8 = lean_apply_1(x_7, x_4);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_apply_1(x_9, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_3 = l_Units_instDivInvMonoid___rarg(x_1);
x_4 = l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg(x_1, x_2);
x_5 = l_Submonoid_centralizer___rarg(x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_unitsCentralizerEquiv___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
x_8 = lean_alloc_closure((void*)(l_unitsCentralizerEquiv___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
lean_closure_set(x_8, 2, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Equiv_symm___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_unitsCentralizerEquiv___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulAction_stabilizerSubmonoid___at_unitsCentralizerEquiv___spec__2___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulAction_stabilizer___at_unitsCentralizerEquiv___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_liftRight___at_unitsCentralizerEquiv___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Units_liftRight___at_unitsCentralizerEquiv___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_toHomUnits___at_unitsCentralizerEquiv___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjAct_ofConjAct___at_unitsCentralizerEquiv___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_toConjAct___at_unitsCentralizerEquiv___spec__6___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_subtype___at_unitsCentralizerEquiv___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_mk_x27___at_unitsCentralizerEquiv___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Units_map___at_unitsCentralizerEquiv___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulEquiv_symm___at_unitsCentralizerEquiv___spec__12(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_unitsCentralizerEquiv___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_unitsCentralizerEquiv___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_unitsCentralizerEquiv___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_ZPowers_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subgroup_Centralizer(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupAction_ConjAct(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_ZPowers_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subgroup_Centralizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ConjAct_ofConjAct___closed__1 = _init_l_ConjAct_ofConjAct___closed__1();
lean_mark_persistent(l_ConjAct_ofConjAct___closed__1);
l_ConjAct_ofConjAct___closed__2 = _init_l_ConjAct_ofConjAct___closed__2();
lean_mark_persistent(l_ConjAct_ofConjAct___closed__2);
l_ConjAct_toConjAct___closed__1 = _init_l_ConjAct_toConjAct___closed__1();
lean_mark_persistent(l_ConjAct_toConjAct___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
