// Lean compiler output
// Module: Mathlib.RingTheory.Ideal.Over
// Imports: Init Mathlib.Algebra.Algebra.Tower Mathlib.Algebra.Group.Subgroup.Actions Mathlib.RingTheory.Ideal.Pointwise Mathlib.RingTheory.Ideal.Quotient.Operations
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
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg(lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1;
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Submonoid_instSMulSubtypeMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddHomClass_toAddHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___rarg(lean_object*);
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12(lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_under___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ideal_quotientMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1(lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_under___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2;
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5(lean_object*);
lean_object* l_Ideal_quotientEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient(lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom(lean_object*, lean_object*);
lean_object* l_Subgroup_toGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_under(lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_span___at_Ideal_span___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_6, lean_box(0));
lean_dec(x_6);
x_9 = lean_alloc_closure((void*)(l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_5);
x_10 = lean_alloc_closure((void*)(l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___rarg), 4, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, lean_box(0));
x_11 = l_Ideal_quotientMap___rarg(x_1, lean_box(0), x_3, x_4, x_8, lean_box(0), lean_box(0), x_7, lean_box(0));
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_op___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__8___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_quotientRel___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__5___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quotient_lift_u2082___at_Ideal_Quotient_algebraQuotientMapQuotient___spec__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_Quotient_algebraQuotientMapQuotient___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_comap___at_Ideal_under___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_under___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = l_Ideal_comap___at_Ideal_under___spec__1___rarg(x_1, lean_box(0), x_3, x_6, lean_box(0), x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_under(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_under___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_Ideal_under___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_comap___at_Ideal_under___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_under___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_under___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Ideal_Quotient_algebraQuotientMapQuotient___rarg___lambda__1), 3, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = lean_alloc_closure((void*)(l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___rarg), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, lean_box(0));
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Ideal_quotientMap___rarg(x_1, lean_box(0), x_2, x_5, x_4, lean_box(0), lean_box(0), x_9, lean_box(0));
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Quotient_algebraOfLiesOver___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_toAddSubgroup___at_Ideal_Quotient_algebraOfLiesOver___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_op___at_Ideal_Quotient_algebraOfLiesOver___spec__8___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuotientAddGroup_leftRel___at_Ideal_Quotient_algebraOfLiesOver___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_quotientRel___at_Ideal_Quotient_algebraOfLiesOver___spec__5___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quotient_lift_u2082___at_Ideal_Quotient_algebraOfLiesOver___spec__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algebraOfLiesOver___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_Quotient_algebraOfLiesOver___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_EquivLike_toEquiv___rarg(x_11, x_13);
x_16 = l_Ideal_quotientEquiv___rarg(x_1, lean_box(0), x_2, x_5, x_6, lean_box(0), lean_box(0), x_15, lean_box(0));
return x_16;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Ideal_Quotient_algEquivOfEqMap___rarg___boxed), 14, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Ideal_Quotient_algEquivOfEqMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ideal_Quotient_algEquivOfEqMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Ideal_Quotient_algEquivOfEqMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, lean_box(0), lean_box(0), lean_box(0), x_11, lean_box(0), x_13, lean_box(0));
return x_15;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Ideal_Quotient_algEquivOfEqComap___rarg___boxed), 14, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Ideal_Quotient_algEquivOfEqComap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqComap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ideal_Quotient_algEquivOfEqComap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg___boxed), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Subgroup_toGroup___rarg(x_1, x_3);
x_6 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_6, 0, x_2);
lean_inc(x_4);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___rarg), 4, 3);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_7);
x_9 = l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___rarg(x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg___boxed), 5, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(x_1, x_3, lean_box(0), x_5, x_6, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___lambda__2), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg(x_11);
lean_inc(x_2);
x_14 = l_Ideal_quotientEquiv___rarg(x_2, lean_box(0), x_2, x_7, x_8, lean_box(0), lean_box(0), x_13, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(x_2, x_4, lean_box(0), x_5, x_6, x_7, x_9);
lean_inc_n(x_4, 2);
x_11 = l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg(x_1, x_2, x_3, x_4, x_8, lean_box(0), x_4, x_4, x_8, lean_box(0), x_10, lean_box(0));
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg(x_8, x_9, x_4);
x_12 = lean_alloc_closure((void*)(l_Ideal_Quotient_stabilizerHom___rarg___lambda__1___boxed), 9, 8);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_8);
lean_closure_set(x_12, 5, x_9);
lean_closure_set(x_12, 6, x_11);
lean_closure_set(x_12, 7, x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_Quotient_stabilizerHom___rarg), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulAction_stabilizerSubmonoid___at_Ideal_Quotient_stabilizerHom___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_stabilizer___at_Ideal_Quotient_stabilizerHom___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_DistribSMul_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_DistribMulAction_toAddMonoidHom___at_Ideal_Quotient_stabilizerHom___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___at_Ideal_Quotient_stabilizerHom___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulAction_toPermHom___at_Ideal_Quotient_stabilizerHom___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_DistribMulAction_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulSemiringAction_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MulSemiringAction_toAlgHom___at_Ideal_Quotient_stabilizerHom___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulSemiringAction_toAlgEquiv___at_Ideal_Quotient_stabilizerHom___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulHomClass_toMulHom___at_Ideal_Quotient_stabilizerHom___spec__15(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulEquivClass_toMulEquiv___at_Ideal_Quotient_stabilizerHom___spec__13___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__17(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddHomClass_toAddHom___at_Ideal_Quotient_stabilizerHom___spec__18(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddEquivClass_toAddEquiv___at_Ideal_Quotient_stabilizerHom___spec__16___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingEquivClass_toRingEquiv___at_Ideal_Quotient_stabilizerHom___spec__12___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Ideal_Quotient_algEquivOfEqMap___at_Ideal_Quotient_stabilizerHom___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Ideal_Quotient_stabilizerHom___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Ideal_Quotient_stabilizerHom___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Ideal_primesOver_mk___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primesOver_mk___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primesOver_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_primesOver_mk(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Actions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Ideal_Over(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Actions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1 = _init_l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1();
lean_mark_persistent(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__1);
l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2 = _init_l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2();
lean_mark_persistent(l_EquivLike_toEquiv___at_Ideal_Quotient_stabilizerHom___spec__14___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
