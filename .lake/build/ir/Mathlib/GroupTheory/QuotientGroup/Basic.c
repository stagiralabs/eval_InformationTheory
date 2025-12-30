// Lean compiler output
// Module: Mathlib.GroupTheory.QuotientGroup.Basic
// Imports: Init Mathlib.Algebra.Group.Subgroup.Pointwise Mathlib.Data.Int.Cast.Lemmas Mathlib.GroupTheory.Congruence.Hom Mathlib.GroupTheory.Coset.Basic Mathlib.GroupTheory.QuotientGroup.Defs Mathlib.Algebra.BigOperators.Group.Finset.Defs
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
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9;
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientBot(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3;
LEAN_EXPORT lean_object* l_QuotientGroup_comapMk_x27OrderIso(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___rarg(lean_object*, lean_object*);
static lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22;
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21;
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubgroup_comap___at_AddSubgroup_addSubgroupOf___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientGroup_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_kerLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed(lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19;
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientAddGroup_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5;
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5(lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12;
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotient___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___rarg(lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6;
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23;
static lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2;
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4;
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11;
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientZSMulOfEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_MonoidHom_rangeRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1(lean_object*);
lean_object* l_Subgroup_comap___at_Subgroup_subgroupOf___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_comapMk_x27OrderIso(lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubgroupClass_inclusion___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotientAux(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9(lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14;
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg(lean_object*, lean_object*);
lean_object* l_MonoidHom_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8;
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg___boxed(lean_object*, lean_object*);
lean_object* l_QuotientGroup_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15;
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_kerLift(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_rangeKerLift(lean_object*);
lean_object* l_Subgroup_quotientEquivOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg(lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27;
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientZPowOfEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_AddSubgroup_quotientEquivOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10;
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16;
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2;
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe(lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18;
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddHomClass_toAddHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_comapMk_x27OrderIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotient(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_homQuotientZSMulOfHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__2(lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24;
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10;
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25;
static lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_homQuotientZPowOfHom(lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8;
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6;
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3(lean_object*);
lean_object* l_AddMonoidHom_rangeRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotient___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotientAux(lean_object*);
static lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1;
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12;
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13;
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26;
lean_object* l_QuotientAddGroup_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112_;
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_rangeKerLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18;
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1;
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2(lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9;
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_rangeKerLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2;
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3;
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_rangeKerLift(lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17;
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_kerLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1(lean_object*, lean_object*);
lean_object* l_AddMonoidHom_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15;
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16;
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotientAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_comapMk_x27OrderIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14;
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientAddGroup_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientZPowOfEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotient___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientZSMulOfEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6___rarg(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1;
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17;
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11;
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_homQuotientZPowOfHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotient___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotient(lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7;
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_homQuotientZSMulOfHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7;
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientGroup_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4(lean_object*);
static lean_object* l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5;
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotientAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9(lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19;
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientBot(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20;
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4;
static lean_object* l_QuotientGroup_quotientBot___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_kerLift(lean_object*);
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("QuotientGroup", 13, 13);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termQ", 5, 5);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GroupTheory", 11, 11);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Basic", 5, 5);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15;
x_2 = lean_unsigned_to_nat(112u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" Q ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112_() {
_start:
{
lean_object* x_1; 
x_1 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19;
return x_1;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_⧸_", 9, 7);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("G", 1, 1);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11;
x_2 = lean_unsigned_to_nat(23u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("⧸", 3, 1);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("N", 1, 1);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23;
x_2 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24;
x_2 = lean_unsigned_to_nat(25u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_8 = lean_ctor_get(x_2, 5);
lean_inc(x_8);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5;
lean_inc(x_11);
lean_inc(x_12);
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4;
x_16 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14;
lean_inc(x_10);
x_17 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_16);
x_18 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15;
lean_inc(x_10);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18;
x_21 = l_Lean_addMacroScope(x_12, x_20, x_11);
x_22 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17;
x_23 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27;
lean_inc(x_10);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_10);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2;
x_26 = l_Lean_Syntax_node3(x_10, x_25, x_17, x_19, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_kerLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
lean_dec(x_3);
x_7 = l_QuotientGroup_lift___rarg(x_1, x_6, lean_box(0), lean_box(0), x_5, x_4, lean_box(0));
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_kerLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_kerLift___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submonoid_comap___at_QuotientGroup_kerLift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_mker___at_QuotientGroup_kerLift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_ker___at_QuotientGroup_kerLift___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_kerLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
lean_dec(x_3);
x_7 = l_QuotientAddGroup_lift___rarg(x_1, x_6, lean_box(0), lean_box(0), x_5, x_4, lean_box(0));
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_kerLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_kerLift___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_kerLift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_mker___at_QuotientAddGroup_kerLift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_ker___at_QuotientAddGroup_kerLift___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_9);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_rangeKerLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
x_6 = l_MonoidHom_range___rarg(x_1, lean_box(0), x_3, x_4);
lean_inc(x_4);
x_7 = l_MonoidHom_rangeRestrict___rarg(x_1, lean_box(0), x_3, x_4);
x_8 = l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg(x_1, lean_box(0), x_3, x_4, x_6, x_5, x_7, lean_box(0));
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_rangeKerLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_rangeKerLift___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submonoid_comap___at_QuotientGroup_rangeKerLift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_mker___at_QuotientGroup_rangeKerLift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_ker___at_QuotientGroup_rangeKerLift___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_liftOn___at_QuotientGroup_rangeKerLift___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Con_lift___at_QuotientGroup_rangeKerLift___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientGroup_lift___at_QuotientGroup_rangeKerLift___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_9);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_rangeKerLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
x_6 = l_AddMonoidHom_range___rarg(x_1, lean_box(0), x_3, x_4);
lean_inc(x_4);
x_7 = l_AddMonoidHom_rangeRestrict___rarg(x_1, lean_box(0), x_3, x_4);
x_8 = l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg(x_1, lean_box(0), x_3, x_4, x_6, x_5, x_7, lean_box(0));
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_rangeKerLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_rangeKerLift___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_rangeKerLift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_mker___at_QuotientAddGroup_rangeKerLift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_ker___at_QuotientAddGroup_rangeKerLift___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_liftOn___at_QuotientAddGroup_rangeKerLift___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AddCon_lift___at_QuotientAddGroup_rangeKerLift___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientAddGroup_lift___at_QuotientAddGroup_rangeKerLift___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_QuotientGroup_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_QuotientGroup_kerLift___rarg(x_1, lean_box(0), x_3, x_4);
x_8 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientKerEquivOfRightInverse___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submonoid_comap___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_mker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_ker___at_QuotientGroup_quotientKerEquivOfRightInverse___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_QuotientAddGroup_kerLift___rarg(x_1, lean_box(0), x_3, x_4);
x_8 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_10 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoid_comap___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_mker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_ker___at_QuotientAddGroup_quotientKerEquivOfRightInverse___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg(x_1, lean_box(0), x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = l_QuotientGroup_kerLift___rarg(x_1, lean_box(0), x_1, x_2);
x_6 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup_quotientBot___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg___boxed), 1, 0);
x_3 = l_QuotientGroup_quotientBot___rarg___closed__1;
x_4 = l_QuotientGroup_quotientKerEquivOfRightInverse___at_QuotientGroup_quotientBot___spec__2___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientBot___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_QuotientGroup_quotientBot___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_comap___at_QuotientGroup_quotientBot___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonoidHom_mker___at_QuotientGroup_quotientBot___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_ker___at_QuotientGroup_quotientBot___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg(x_1, lean_box(0), x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = l_QuotientAddGroup_kerLift___rarg(x_1, lean_box(0), x_1, x_2);
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg___boxed), 1, 0);
x_3 = l_QuotientGroup_quotientBot___rarg___closed__1;
x_4 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___at_QuotientAddGroup_quotientBot___spec__2___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientBot___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_id___at_QuotientAddGroup_quotientBot___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_comap___at_QuotientAddGroup_quotientBot___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_mker___at_QuotientAddGroup_quotientBot___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_ker___at_QuotientAddGroup_quotientBot___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subgroup_quotientEquivOfEq___rarg(x_1, x_2, x_3, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientMulEquivOfEq___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMulEquivOfEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuotientGroup_quotientMulEquivOfEq___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubgroup_quotientEquivOfEq___rarg(x_1, x_2, x_3, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientAddEquivOfEq___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientAddEquivOfEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuotientAddGroup_quotientAddEquivOfEq___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg___boxed), 9, 8);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
lean_closure_set(x_12, 3, x_6);
lean_closure_set(x_12, 4, lean_box(0));
lean_closure_set(x_12, 5, x_11);
lean_closure_set(x_12, 6, x_9);
lean_closure_set(x_12, 7, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg(x_1, x_4, x_7, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_9);
x_13 = l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg(x_1, x_2, x_3, x_4, lean_box(0), x_7, lean_box(0), x_6, x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
static lean_object* _init_l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SubgroupClass_inclusion___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1;
x_11 = l_Subgroup_comap___at_Subgroup_subgroupOf___spec__1___rarg(x_1, x_3, x_10, x_2);
x_12 = l_Subgroup_comap___at_Subgroup_subgroupOf___spec__1___rarg(x_1, x_5, x_10, x_4);
x_13 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2;
x_14 = l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg(x_1, x_2, x_3, x_5, lean_box(0), x_11, x_12, lean_box(0), x_13, lean_box(0));
lean_dec(x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_mk___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_mk_x27___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_comp___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_op___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__11___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_leftRel___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientGroup_con___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__9___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Con_liftOn___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Con_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientGroup_lift___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientGroup_map___at_QuotientGroup_quotientMapSubgroupOfOfLe___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg___boxed), 9, 8);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
lean_closure_set(x_12, 3, x_6);
lean_closure_set(x_12, 4, lean_box(0));
lean_closure_set(x_12, 5, x_11);
lean_closure_set(x_12, 6, x_9);
lean_closure_set(x_12, 7, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg(x_1, x_4, x_7, lean_box(0));
x_12 = l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___rarg(x_11, x_9);
x_13 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg(x_1, x_2, x_3, x_4, lean_box(0), x_7, lean_box(0), x_6, x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
static lean_object* _init_l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddSubgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1;
x_11 = l_AddSubgroup_comap___at_AddSubgroup_addSubgroupOf___spec__1___rarg(x_1, x_3, x_10, x_2);
x_12 = l_AddSubgroup_comap___at_AddSubgroup_addSubgroupOf___spec__1___rarg(x_1, x_5, x_10, x_4);
x_13 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2;
x_14 = l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg(x_1, x_2, x_3, x_5, lean_box(0), x_11, x_12, lean_box(0), x_13, lean_box(0));
lean_dec(x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_comp___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_op___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__11___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_con___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__9___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddCon_liftOn___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AddCon_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientAddGroup_map___at_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_11 = l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg(x_1, x_4, x_5, x_2, x_3, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientSubgroupOfOfEq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuotientGroup_equivQuotientSubgroupOfOfEq___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_11 = l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg(x_1, x_4, x_5, x_2, x_3, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_12 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___rarg(x_10, x_11, lean_box(0), lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuotientAddGroup_equivQuotientAddSubgroupOfOfEq___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg___boxed), 7, 6);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_7);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_homQuotientZPowOfHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_zpowGroupHom___at_QuotientGroup_homQuotientZPowOfHom___spec__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_MonoidHom_range___rarg(x_1, lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg(x_1, x_2, x_4, x_6, x_8, lean_box(0));
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_homQuotientZPowOfHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientGroup_homQuotientZPowOfHom___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_comp___at_QuotientGroup_homQuotientZPowOfHom___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_liftOn___at_QuotientGroup_homQuotientZPowOfHom___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Con_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuotientGroup_lift___at_QuotientGroup_homQuotientZPowOfHom___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg___boxed), 7, 6);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_7);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_homQuotientZSMulOfHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_zsmulAddGroupHom___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_AddMonoidHom_range___rarg(x_1, lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___rarg(x_7, x_3);
x_9 = l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg(x_1, x_2, x_4, x_6, x_8, lean_box(0));
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_homQuotientZSMulOfHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientAddGroup_homQuotientZSMulOfHom___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_comp___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_liftOn___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddCon_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuotientAddGroup_lift___at_QuotientAddGroup_homQuotientZSMulOfHom___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zpowGroupHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7___rarg), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientZPowOfEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___lambda__1), 2, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_QuotientGroup_homQuotientZPowOfHom___rarg(x_1, x_2, x_6, x_4);
x_8 = l_Equiv_symm___rarg(x_3);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_5);
x_10 = l_QuotientGroup_homQuotientZPowOfHom___rarg(x_2, x_1, x_9, x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_equivQuotientZPowOfEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientGroup_equivQuotientZPowOfEquiv___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHomClass_toMonoidHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_toMulEquiv___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zsmulAddGroupHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
x_6 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
x_6 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___rarg), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientZSMulOfEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_QuotientAddGroup_homQuotientZSMulOfHom___rarg(x_1, x_2, x_6, x_4);
x_8 = l_Equiv_symm___rarg(x_3);
x_9 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_5);
x_10 = l_QuotientAddGroup_homQuotientZSMulOfHom___rarg(x_2, x_1, x_9, x_4);
x_11 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___rarg(x_7, x_10, lean_box(0), lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_equivQuotientZSMulOfEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuotientAddGroup_equivQuotientZSMulOfEquiv___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHomClass_toAddMonoidHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, lean_box(0));
lean_closure_set(x_10, 5, x_9);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotientAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(x_1, x_2, lean_box(0), x_7, x_4);
x_9 = lean_alloc_closure((void*)(l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed), 1, 0);
lean_inc(x_4);
lean_inc_n(x_1, 2);
x_10 = l_QuotientGroup_map___rarg(x_1, x_2, lean_box(0), lean_box(0), x_1, x_4, lean_box(0), x_9, lean_box(0));
x_11 = l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_8, x_10, lean_box(0));
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotientAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientQuotientEquivQuotientAux___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientGroup_con___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, lean_box(0));
lean_closure_set(x_10, 5, x_9);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotientAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(x_1, x_2, lean_box(0), x_7, x_4);
x_9 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed), 1, 0);
lean_inc(x_4);
lean_inc_n(x_1, 2);
x_10 = l_QuotientAddGroup_map___rarg(x_1, x_2, lean_box(0), lean_box(0), x_1, x_4, lean_box(0), x_9, lean_box(0));
x_11 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_8, x_10, lean_box(0));
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotientAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientQuotientEquivQuotientAux___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_id___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_con___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotientAux___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotient___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_closure((void*)(l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed), 9, 8);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, lean_box(0));
lean_closure_set(x_12, 3, x_6);
lean_closure_set(x_12, 4, lean_box(0));
lean_closure_set(x_12, 5, x_11);
lean_closure_set(x_12, 6, x_9);
lean_closure_set(x_12, 7, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg(x_1, x_2, lean_box(0), x_7, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_9);
x_13 = l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_7, lean_box(0), x_6, x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, lean_box(0), x_7, x_4);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_QuotientGroup_quotientQuotientEquivQuotientAux___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), lean_box(0));
x_10 = l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_4, x_8, lean_box(0), x_7, lean_box(0));
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_quotientQuotientEquivQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_quotientQuotientEquivQuotient___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subgroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subgroup_op___at_QuotientGroup_quotientQuotientEquivQuotient___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotient___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientGroup_leftRel___at_QuotientGroup_quotientQuotientEquivQuotient___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientGroup_mk___at_QuotientGroup_quotientQuotientEquivQuotient___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientGroup_mk_x27___at_QuotientGroup_quotientQuotientEquivQuotient___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_comp___at_QuotientGroup_quotientQuotientEquivQuotient___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_liftOn___at_QuotientGroup_quotientQuotientEquivQuotient___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Con_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientGroup_lift___at_QuotientGroup_quotientQuotientEquivQuotient___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientGroup_map___at_QuotientGroup_quotientQuotientEquivQuotient___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_toMulEquiv___at_QuotientGroup_quotientQuotientEquivQuotient___spec__12(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_closure((void*)(l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed), 9, 8);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, lean_box(0));
lean_closure_set(x_12, 3, x_6);
lean_closure_set(x_12, 4, lean_box(0));
lean_closure_set(x_12, 5, x_11);
lean_closure_set(x_12, 6, x_9);
lean_closure_set(x_12, 7, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg(x_1, x_2, lean_box(0), x_7, lean_box(0));
x_12 = l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___rarg(x_11, x_9);
x_13 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_7, lean_box(0), x_6, x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, lean_box(0), x_7, x_4);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_QuotientAddGroup_quotientQuotientEquivQuotientAux___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), lean_box(0));
x_10 = l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_4, x_8, lean_box(0), x_7, lean_box(0));
lean_dec(x_4);
x_11 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___rarg(x_9, x_10, lean_box(0), lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_quotientQuotientEquivQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_quotientQuotientEquivQuotient___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubgroup_op___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_leftRel___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_mk___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_mk_x27___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_comp___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_liftOn___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AddCon_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientAddGroup_lift___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuotientAddGroup_map___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_toAddEquiv___at_QuotientAddGroup_quotientQuotientEquivQuotient___spec__12(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_comapMk_x27OrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, lean_box(0));
lean_closure_set(x_5, 3, x_4);
x_6 = lean_alloc_closure((void*)(l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientGroup_comapMk_x27OrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientGroup_comapMk_x27OrderIso___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subgroup_comap___at_QuotientGroup_comapMk_x27OrderIso___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subgroup_map___at_QuotientGroup_comapMk_x27OrderIso___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_comapMk_x27OrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, lean_box(0));
lean_closure_set(x_5, 3, x_4);
x_6 = lean_alloc_closure((void*)(l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_comapMk_x27OrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_comapMk_x27OrderIso___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroup_comap___at_QuotientAddGroup_comapMk_x27OrderIso___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubgroup_map___at_QuotientAddGroup_comapMk_x27OrderIso___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Cast_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Congruence_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Coset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_QuotientGroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_QuotientGroup_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Cast_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Congruence_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Coset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_QuotientGroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__1);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__2);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__3);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__4);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__5);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__6);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__7);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__8);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__9);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__10);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__11);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__12);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__13);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__14);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__15);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__16);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__17);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__18);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19 = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112____closed__19);
l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112_ = _init_l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112_();
lean_mark_persistent(l_QuotientGroup_termQ____x40_Mathlib_GroupTheory_QuotientGroup_Basic___hyg_112_);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__1);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__2);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__3);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__4);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__5);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__6);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__7);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__8);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__9);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__10);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__11);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__12);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__13);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__14);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__15);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__16);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__17);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__18);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__19);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__20);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__21);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__22);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__23);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__24);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__25);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__26);
l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27 = _init_l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27();
lean_mark_persistent(l_QuotientGroup___aux__Mathlib__GroupTheory__QuotientGroup__Basic______macroRules__QuotientGroup__termQ__1___closed__27);
l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1 = _init_l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1();
lean_mark_persistent(l_QuotientGroup_quotientKerEquivOfRightInverse___rarg___closed__1);
l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1 = _init_l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1();
lean_mark_persistent(l_QuotientAddGroup_quotientKerEquivOfRightInverse___rarg___closed__1);
l_QuotientGroup_quotientBot___rarg___closed__1 = _init_l_QuotientGroup_quotientBot___rarg___closed__1();
lean_mark_persistent(l_QuotientGroup_quotientBot___rarg___closed__1);
l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1 = _init_l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1();
lean_mark_persistent(l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__1);
l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2 = _init_l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2();
lean_mark_persistent(l_QuotientGroup_quotientMapSubgroupOfOfLe___rarg___closed__2);
l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1 = _init_l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1();
lean_mark_persistent(l_QuotientAddGroup_quotientMapAddSubgroupOfOfLe___rarg___closed__1);
l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_QuotientGroup_equivQuotientZPowOfEquiv___spec__4___rarg___closed__1);
l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1 = _init_l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1();
lean_mark_persistent(l_AddHomClass_toAddHom___at_QuotientAddGroup_equivQuotientZSMulOfEquiv___spec__4___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
