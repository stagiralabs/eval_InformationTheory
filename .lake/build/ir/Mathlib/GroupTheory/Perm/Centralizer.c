// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Centralizer
// Imports: Init Mathlib.Algebra.Order.BigOperators.GroupWithZero.Multiset Mathlib.Algebra.Order.BigOperators.Ring.Finset Mathlib.GroupTheory.Finiteness Mathlib.GroupTheory.NoncommCoprod Mathlib.GroupTheory.Perm.ConjAct Mathlib.GroupTheory.Perm.Cycle.PossibleTypes Mathlib.GroupTheory.Perm.DomMulAct
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
lean_object* l_Equiv_sumCompl___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Equiv_Perm_subtypePerm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5(lean_object*);
static lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2;
static lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
static lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2(lean_object*);
static lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1;
lean_object* l_Fintype_decidableEqEquivFintype___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_kerParam___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_sumCompl___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_range__toPermHom_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1;
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__2;
lean_object* l_Equiv_Perm_permGroup(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom(lean_object*);
lean_object* l_Multiset_noncommProd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_IsFixedPt_decidable___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
static lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_kerParam(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__4___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2;
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_range__toPermHom_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun(lean_object*);
lean_object* l_Equiv_Perm_cycleFactorsFinset___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1;
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6(lean_object*, lean_object*);
lean_object* l_Equiv_equivCongr___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6___boxed(lean_object*, lean_object*);
static lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__4(lean_object*);
static lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___boxed(lean_object*);
lean_object* l_Subgroup_toGroup___rarg(lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__5(lean_object*);
lean_object* l_Equiv_sumCongr___rarg(lean_object*, lean_object*);
static lean_object* _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_Perm_permGroup(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Monoid_toMulOneClass___rarg(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
return x_3;
}
}
static lean_object* _init_l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__4___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjAct_toConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__2(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_ConjAct_toConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__2(lean_box(0));
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_1);
lean_inc(x_5);
x_6 = l_Equiv_trans___rarg(x_2, x_5);
x_7 = l_Equiv_symm___rarg(x_5);
x_8 = l_Equiv_trans___rarg(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Subgroup_toGroup___rarg(x_1, x_2);
x_5 = l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1;
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__1(lean_box(0), lean_box(0));
x_5 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1;
x_6 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_OnCycleFactors_toPermHom___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_toPermHom___at_Equiv_Perm_OnCycleFactors_toPermHom___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_toPermHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_OnCycleFactors_toPermHom___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_range__toPermHom_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_range__toPermHom_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_OnCycleFactors_range__toPermHom_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_instDFunLikeBasisSubtypeMemFinsetCycleFactorsFinset(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__2___rarg), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
x_9 = l_Equiv_sumCongr___rarg(x_6, x_7);
lean_inc(x_8);
x_10 = l_Equiv_equivCongr___elambda__2___rarg(x_8, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_8 = l_Equiv_equivCongr___elambda__2___rarg(x_7, x_7, x_6);
x_9 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1;
x_10 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1;
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_6 = l_Equiv_Perm_subtypePerm___rarg(x_4, lean_box(0));
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1), 2, 1);
lean_closure_set(x_10, 0, x_3);
lean_inc(x_4);
lean_inc(x_6);
x_11 = lean_apply_1(x_4, x_6);
lean_inc(x_8);
x_12 = l_Nat_iterate___rarg(x_10, x_8, x_11);
lean_inc(x_1);
lean_inc(x_5);
x_13 = lean_apply_2(x_1, x_12, x_5);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_8, x_15);
lean_dec(x_8);
x_7 = lean_box(0);
x_8 = x_16;
x_9 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, lean_box(0), x_11, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, lean_box(0), x_11, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_Nat_iterate___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Nat_iterate___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Perm_Basis_ofPermHomFun___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Fintype_decidableEqEquivFintype___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_inc(x_6);
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Equiv_Perm_cycleOf___at_Equiv_Perm_Basis_ofPermHomFun___spec__1___rarg(x_1, x_2, x_3, x_3, x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Equiv_Perm_cycleFactorsFinset___rarg(x_1, x_2, x_3);
lean_inc(x_8);
x_10 = l_Multiset_decidableMem___rarg(x_7, x_8, x_9);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(x_1, x_2, x_3, x_4, x_6, x_8, lean_box(0), x_11, lean_box(0));
lean_dec(x_2);
x_13 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_3);
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_apply_1(x_14, x_8);
x_16 = lean_apply_1(x_4, x_15);
x_17 = l_Nat_iterate___rarg(x_13, x_12, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_Basis_ofPermHomFun(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_Basis_ofPermHomFun___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_Basis_ofPermHomFun___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_Basis_ofPermHomFun___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_findX___at_Equiv_Perm_Basis_ofPermHomFun___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_find___at_Equiv_Perm_Basis_ofPermHomFun___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Equiv_Perm_Basis_ofPermHomFun___spec__8___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Function_IsFixedPt_decidable___rarg(x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_sumCompl___at_Equiv_Perm_OnCycleFactors_kerParam___spec__5___rarg(x_1, x_2);
x_6 = l_Equiv_sumCongr___rarg(x_3, x_4);
lean_inc(x_5);
x_7 = l_Equiv_equivCongr___elambda__2___rarg(x_5, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = l_Equiv_equivCongr___elambda__2___rarg(x_4, x_4, x_3);
x_6 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1;
x_7 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_OnCycleFactors_kerParam___spec__4___rarg(x_1, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1;
x_5 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_OnCycleFactors_kerParam___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Multiset_map___rarg(x_3, x_2);
x_7 = l_Multiset_noncommProd___rarg(x_5, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1;
x_11 = l_Multiset_pmap___rarg(x_10, x_5, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___lambda__1), 3, 2);
lean_closure_set(x_12, 0, x_9);
lean_closure_set(x_12, 1, x_7);
x_13 = l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___rarg(x_4, x_11, x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___boxed), 9, 0);
return x_2;
}
}
static lean_object* _init_l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1;
return x_2;
}
}
static lean_object* _init_l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6___boxed), 2, 1);
lean_closure_set(x_7, 0, lean_box(0));
x_8 = l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_7);
lean_closure_set(x_9, 6, x_8);
lean_closure_set(x_9, 7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_apply_1(x_2, x_7);
x_9 = l_Equiv_trans___rarg(x_8, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_kerParam___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSubtype___at_Equiv_Perm_OnCycleFactors_kerParam___spec__2___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Equiv_Perm_cycleFactorsFinset___rarg(x_1, x_2, x_3);
x_6 = l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1;
x_7 = l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg(x_1, x_2, x_3, x_6, x_5, lean_box(0));
x_8 = lean_alloc_closure((void*)(l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___rarg), 4, 3);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
lean_closure_set(x_8, 2, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_OnCycleFactors_kerParam(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_OnCycleFactors_kerParam___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_zpowers___at_Equiv_Perm_OnCycleFactors_kerParam___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_noncommProd___at_Equiv_Perm_OnCycleFactors_kerParam___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_noncommCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_GroupWithZero_Multiset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Finiteness(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_NoncommCoprod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_ConjAct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Cycle_PossibleTypes(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_DomMulAct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Centralizer(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_GroupWithZero_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Finiteness(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_NoncommCoprod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_ConjAct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Cycle_PossibleTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_DomMulAct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1 = _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1();
lean_mark_persistent(l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__1);
l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__2 = _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__2();
lean_mark_persistent(l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__2);
l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3 = _init_l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3();
lean_mark_persistent(l_Subgroup_centralizer___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__1___closed__3);
l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1 = _init_l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1();
lean_mark_persistent(l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__1);
l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2 = _init_l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2();
lean_mark_persistent(l_ConjAct_ofConjAct___at_Equiv_Perm_OnCycleFactors_Subgroup_Centralizer_cycleFactorsFinset__mulAction___spec__3___closed__2);
l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1 = _init_l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1();
lean_mark_persistent(l_Equiv_Perm_OnCycleFactors_instMulActionSubtypeMemSubgroupCentralizerSingletonSetFinsetCycleFactorsFinset___closed__1);
l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1 = _init_l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1();
lean_mark_persistent(l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__1);
l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2 = _init_l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2();
lean_mark_persistent(l_Equiv_sumCompl___at_Equiv_Perm_Basis_ofPermHomFun___spec__5___rarg___closed__2);
l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1 = _init_l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1();
lean_mark_persistent(l_Equiv_Perm_extendDomain___at_Equiv_Perm_Basis_ofPermHomFun___spec__3___rarg___closed__1);
l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__1 = _init_l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__1();
lean_mark_persistent(l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__1);
l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__2 = _init_l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__2();
lean_mark_persistent(l_Equiv_Perm_Basis_ofPermHomFun___rarg___closed__2);
l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1 = _init_l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1();
lean_mark_persistent(l_MonoidHom_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__8___rarg___closed__1);
l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1 = _init_l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___lambda__1___closed__1);
l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1 = _init_l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1();
lean_mark_persistent(l_Subgroup_noncommPiCoprod___at_Equiv_Perm_OnCycleFactors_kerParam___spec__7___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
