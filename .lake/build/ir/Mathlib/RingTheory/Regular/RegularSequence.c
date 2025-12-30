// Lean compiler output
// Module: Mathlib.RingTheory.Regular.RegularSequence
// Imports: Init Mathlib.RingTheory.Regular.IsSMulRegular Mathlib.RingTheory.Artinian.Module Mathlib.RingTheory.Nakayama Mathlib.Algebra.Equiv.TransferInstance Mathlib.RingTheory.LocalRing.MaximalIdeal.Basic Mathlib.RingTheory.Noetherian.Basic
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
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1(lean_object*);
lean_object* l_AddSubmonoid_smul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecWithRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_Quotient_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_Quotient_instSMul_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__3___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofList___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2;
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Ideal_ofList___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___rarg(lean_object*);
lean_object* l_Submodule_quotientQuotientEquivQuotientSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Quot_congr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__30___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_Quotient_mk___at_Ideal_Quotient_mk___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31___rarg(lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofList(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__29___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Module_instQuotientIdealSpanSingletonSetSubmoduleHSMulTop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular(lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31(lean_object*, lean_object*);
static lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___boxed(lean_object**);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_quotEquivOfEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_quotEquivOfEq___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3;
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientAddGroup_Quotient_addGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___boxed(lean_object**);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15___boxed(lean_object**);
lean_object* l_Ideal_Quotient_ring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecWithRing(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__30(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_span___at_Ideal_span___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofList___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_ofList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_ofList___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_ofList___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_ofList___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg___boxed), 3, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
x_18 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___rarg), 1, 0);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg___boxed), 14, 0);
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Submodule_Quotient_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___rarg(x_18);
x_21 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16___rarg), 2, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___rarg), 1, 0);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___rarg(x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg___boxed), 17, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
x_18 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___rarg), 1, 0);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg___boxed), 14, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30) {
_start:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
x_33 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_33, 0, x_31);
lean_closure_set(x_33, 1, x_32);
x_34 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___rarg(x_29);
x_35 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___rarg(x_30);
x_36 = l_Equiv_trans___rarg(x_34, x_35);
x_37 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg___boxed), 30, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__30(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1;
x_2 = l_Quot_congr___rarg(x_1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2;
x_2 = lean_alloc_closure((void*)(l_Submodule_quotEquivOfEq___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2;
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_dec(x_11);
x_12 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3;
lean_ctor_set(x_9, 1, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; 
x_23 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32___rarg), 2, 0);
return x_23;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___rarg), 1, 0);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___rarg(x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg___boxed), 17, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; 
x_24 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___rarg), 1, 0);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___rarg(x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg___boxed), 20, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33) {
_start:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_36, 0, x_34);
lean_closure_set(x_36, 1, x_35);
x_37 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___rarg(x_32);
x_38 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___rarg(x_33);
x_39 = l_Equiv_trans___rarg(x_37, x_38);
x_40 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg___boxed), 33, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Semiring_toModule___rarg(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
x_10 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_6, lean_box(0));
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
x_12 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_8);
x_15 = l_AddSubmonoid_smul___elambda__1___rarg(x_8, x_14, x_3, x_10, x_11);
lean_inc(x_3);
lean_inc(x_4);
x_16 = lean_apply_1(x_3, x_4);
x_17 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_18 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg(x_2, x_3, x_17, lean_box(0), x_16, x_11);
x_19 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1;
x_20 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg(x_1, x_2, x_3, x_4, x_8, x_17, lean_box(0), x_19, x_15);
x_21 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg(x_2, x_3, x_17, lean_box(0), x_16, x_11);
lean_inc(x_2);
x_22 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_2, x_21, lean_box(0));
lean_inc(x_21);
lean_inc(x_3);
x_23 = lean_alloc_closure((void*)(l_Submodule_Quotient_instSMul_x27___rarg___boxed), 5, 3);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, lean_box(0));
lean_closure_set(x_23, 2, x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, lean_box(0));
lean_inc(x_25);
lean_inc(x_23);
lean_inc(x_24);
x_26 = l_AddSubmonoid_smul___elambda__1___rarg(x_24, x_14, x_23, x_10, x_25);
lean_dec(x_14);
x_27 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg(x_2, x_3, x_17, lean_box(0), x_16, x_11);
lean_dec(x_16);
x_28 = l_Submodule_quotEquivOfEq___rarg(x_1, x_2, x_3, x_15, x_11, lean_box(0));
lean_inc(x_18);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l_Submodule_quotientQuotientEquivQuotientSup___rarg(x_1, x_2, x_3, x_18, x_15);
x_30 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_6, x_18, x_10, x_15, x_17, x_17, lean_box(0), lean_box(0), x_29);
lean_dec(x_18);
x_31 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_10, x_15, x_27, x_17, x_17, x_17, x_17, x_17, x_17, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_28, x_30);
lean_dec(x_27);
lean_dec(x_15);
x_32 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg(x_1, x_2, x_3, x_4, x_8, x_20, x_26, lean_box(0));
lean_dec(x_26);
lean_dec(x_20);
x_33 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_1, x_7, x_8, x_9, x_10, x_11, x_10, x_21, x_23, x_24, x_25, x_17, x_17, x_17, x_17, x_17, x_17, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_31, x_32);
lean_dec(x_17);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_33;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__19___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
_start:
{
lean_object* x_31; 
x_31 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_31;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__23(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__25___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__24(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__29___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__28(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__26___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__30___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__30(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
_start:
{
lean_object* x_23; 
x_23 = l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__32(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_23;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__34(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__33___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__36(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__35___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
_start:
{
lean_object* x_34; 
x_34 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__31___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_34;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg___boxed), 13, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_2(x_1, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg___boxed), 10, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg___boxed), 3, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___rarg), 1, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___rarg(x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___rarg(x_18);
x_21 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15___rarg), 2, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___rarg), 1, 0);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___rarg(x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg___boxed), 17, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___rarg), 1, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___rarg(x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32) {
_start:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_35, 0, x_33);
lean_closure_set(x_35, 1, x_34);
x_36 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___rarg(x_31);
x_37 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___rarg(x_32);
x_38 = l_Equiv_trans___rarg(x_36, x_37);
x_39 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg___boxed), 32, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg___boxed), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_box(0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_box(0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg___boxed), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_box(0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_box(0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__29(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2;
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 1);
lean_dec(x_16);
x_17 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3;
lean_ctor_set(x_14, 1, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg___boxed), 13, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31___rarg), 2, 0);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___rarg), 1, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___rarg(x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___rarg), 1, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___rarg(x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg___boxed), 18, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31) {
_start:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
x_34 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_34, 0, x_32);
lean_closure_set(x_34, 1, x_33);
x_35 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___rarg(x_30);
x_36 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___rarg(x_31);
x_37 = l_Equiv_trans___rarg(x_35, x_36);
x_38 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_34);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg___boxed), 31, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Semiring_toModule___rarg(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
x_10 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_6, lean_box(0));
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
x_12 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_8);
x_15 = l_AddSubmonoid_smul___elambda__1___rarg(x_8, x_14, x_3, x_10, x_11);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_4);
x_16 = lean_apply_1(x_3, x_4);
x_17 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_18 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg(x_2, x_3, x_17, lean_box(0), x_16, x_11);
lean_dec(x_16);
x_19 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1;
x_20 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg(x_2, x_3, x_5, x_6, x_7, x_8, x_10, x_6, x_11, x_17, lean_box(0), x_19, x_18);
lean_inc(x_2);
x_21 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_2, x_15, lean_box(0));
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, lean_box(0));
lean_inc(x_4);
lean_inc(x_10);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_24 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg___boxed), 10, 9);
lean_closure_set(x_24, 0, x_3);
lean_closure_set(x_24, 1, x_5);
lean_closure_set(x_24, 2, x_6);
lean_closure_set(x_24, 3, x_7);
lean_closure_set(x_24, 4, x_8);
lean_closure_set(x_24, 5, x_11);
lean_closure_set(x_24, 6, x_10);
lean_closure_set(x_24, 7, lean_box(0));
lean_closure_set(x_24, 8, x_4);
x_25 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg(x_2, x_3, x_5, x_6, x_7, x_8, x_11, x_10, x_17, lean_box(0), x_24, x_23);
lean_dec(x_23);
lean_dec(x_24);
x_26 = l_Submodule_quotEquivOfEq___rarg(x_1, x_2, x_3, x_15, x_11, lean_box(0));
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Submodule_quotientQuotientEquivQuotientSup___rarg(x_1, x_2, x_3, x_15, x_18);
x_28 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10, x_6, x_11, x_15, x_18, x_17, x_17, lean_box(0), lean_box(0), x_27);
x_29 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_10, x_6, x_11, x_18, x_15, x_17, x_17, x_17, x_17, x_17, x_17, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_26, x_28);
lean_dec(x_15);
lean_dec(x_18);
x_30 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_10, x_6, x_11, x_20, x_25, lean_box(0));
lean_dec(x_25);
lean_dec(x_20);
x_31 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_10, x_6, x_11, x_22, x_17, x_17, x_17, x_17, x_17, x_17, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_29, x_30);
lean_dec(x_17);
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_31;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
lean_object* x_20; 
x_20 = l_LinearMap_inverse___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_20;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
_start:
{
lean_object* x_33; 
x_33 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_33;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__22(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__24(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__23(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__21___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Submodule_toAddSubgroup___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__26(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_op___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__28(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_QuotientAddGroup_leftRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Submodule_quotientRel___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__25___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__29___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__29(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__20___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_LinearMap_comp___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__31(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__33(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__32___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_LinearEquiv_toAddEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__35(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toEquiv___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__34___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
_start:
{
lean_object* x_32; 
x_32 = l_LinearEquiv_trans___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopOuter___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_32;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, lean_box(0), x_3, x_4, x_5, x_6, lean_box(0), lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_3(x_3, lean_box(0), x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_4);
x_13 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1), 9, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
lean_inc(x_7);
lean_inc(x_11);
x_15 = lean_apply_1(x_7, x_11);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_17 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg(x_6, x_7, x_16, lean_box(0), x_15, x_14);
lean_dec(x_14);
lean_dec(x_15);
lean_dec(x_16);
lean_inc(x_6);
x_18 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_6, x_17, lean_box(0));
lean_inc(x_7);
x_19 = lean_alloc_closure((void*)(l_Submodule_Quotient_instSMul_x27___rarg___boxed), 5, 3);
lean_closure_set(x_19, 0, x_7);
lean_closure_set(x_19, 1, lean_box(0));
lean_closure_set(x_19, 2, x_17);
lean_inc(x_12);
x_20 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg(x_1, lean_box(0), x_3, x_13, lean_box(0), x_18, x_19, x_12, lean_box(0));
x_21 = lean_apply_8(x_4, lean_box(0), x_6, x_7, x_11, x_12, lean_box(0), lean_box(0), x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1), 9, 1);
lean_closure_set(x_10, 0, x_4);
x_11 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg(x_1, lean_box(0), x_3, x_10, lean_box(0), x_6, x_7, x_8, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsWeaklyRegular_ndrecIterModByRegular___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_11; 
lean_dec(x_8);
x_11 = l_List_reverse___rarg(x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_8);
x_15 = lean_apply_1(x_8, x_13);
lean_ctor_set(x_9, 1, x_10);
lean_ctor_set(x_9, 0, x_15);
{
lean_object* _tmp_8 = x_14;
lean_object* _tmp_9 = x_9;
x_9 = _tmp_8;
x_10 = _tmp_9;
}
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
lean_inc(x_8);
x_19 = lean_apply_1(x_8, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
x_9 = x_18;
x_10 = x_20;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6, x_7, x_8, lean_box(0), lean_box(0), x_11);
return x_12;
}
}
static lean_object* _init_l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Submodule_Quotient_mk___at_Ideal_Quotient_mk___spec__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_5(x_1, lean_box(0), x_4, lean_box(0), x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_2);
x_13 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___lambda__1), 11, 1);
lean_closure_set(x_13, 0, x_2);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_14, lean_box(0));
lean_inc(x_4);
x_16 = l_Ideal_Quotient_ring___rarg(x_4, x_15, lean_box(0));
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, lean_box(0));
lean_inc(x_7);
lean_inc(x_11);
x_18 = lean_apply_1(x_7, x_11);
x_19 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_20 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg(x_6, x_7, x_19, lean_box(0), x_18, x_17);
lean_dec(x_17);
lean_dec(x_18);
lean_dec(x_19);
lean_inc(x_6);
x_21 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_6, x_20, lean_box(0));
lean_dec(x_20);
lean_inc(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_22 = l_Module_instQuotientIdealSpanSingletonSetSubmoduleHSMulTop___rarg(x_4, x_6, x_7, x_11);
x_23 = l_Semiring_toNonAssocSemiring___rarg(x_14);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
x_25 = l_Semiring_toNonAssocSemiring___rarg(x_24);
lean_dec(x_24);
x_26 = lean_box(0);
x_27 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1;
lean_inc(x_12);
x_28 = l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg(x_4, x_11, x_4, x_14, x_15, x_23, x_25, x_27, x_12, x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_15);
lean_dec(x_14);
x_29 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(x_1, x_13, lean_box(0), x_16, lean_box(0), x_21, x_22, x_28, lean_box(0));
x_30 = lean_apply_10(x_2, lean_box(0), x_4, lean_box(0), x_6, x_7, x_11, x_12, lean_box(0), lean_box(0), x_29);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_mapTR_loop___at_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecWithRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___lambda__1), 11, 1);
lean_closure_set(x_10, 0, x_2);
x_11 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(x_1, x_10, lean_box(0), x_4, lean_box(0), x_6, x_7, x_8, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_ndrecWithRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_ndrecWithRing___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_3(x_3, lean_box(0), x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_4);
x_13 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1), 9, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
lean_inc(x_7);
lean_inc(x_11);
x_15 = lean_apply_1(x_7, x_11);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_17 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg(x_6, x_7, x_16, lean_box(0), x_15, x_14);
lean_dec(x_14);
lean_dec(x_15);
lean_dec(x_16);
lean_inc(x_6);
x_18 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_6, x_17, lean_box(0));
lean_inc(x_7);
x_19 = lean_alloc_closure((void*)(l_Submodule_Quotient_instSMul_x27___rarg___boxed), 5, 3);
lean_closure_set(x_19, 0, x_7);
lean_closure_set(x_19, 1, lean_box(0));
lean_closure_set(x_19, 2, x_17);
lean_inc(x_12);
x_20 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg(x_1, lean_box(0), x_3, x_13, lean_box(0), x_18, x_19, x_12, lean_box(0));
x_21 = lean_apply_8(x_4, lean_box(0), x_6, x_7, x_11, x_12, lean_box(0), lean_box(0), x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_4(x_1, lean_box(0), x_3, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_apply_1(x_9, lean_box(0));
x_12 = lean_apply_8(x_1, lean_box(0), x_3, x_4, x_5, x_6, lean_box(0), lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__1), 5, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__2), 10, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg(x_1, lean_box(0), x_10, x_11, lean_box(0), x_6, x_7, x_8, lean_box(0));
x_13 = lean_apply_1(x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_recIterModByRegular___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_3(x_3, lean_box(0), x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_4);
x_13 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___rarg___lambda__1), 9, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
lean_inc(x_7);
lean_inc(x_11);
x_15 = lean_apply_1(x_7, x_11);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_17 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg(x_6, x_7, x_16, lean_box(0), x_15, x_14);
lean_dec(x_14);
lean_dec(x_15);
lean_dec(x_16);
lean_inc(x_6);
x_18 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_6, x_17, lean_box(0));
lean_inc(x_7);
x_19 = lean_alloc_closure((void*)(l_Submodule_Quotient_instSMul_x27___rarg___boxed), 5, 3);
lean_closure_set(x_19, 0, x_7);
lean_closure_set(x_19, 1, lean_box(0));
lean_closure_set(x_19, 2, x_17);
lean_inc(x_12);
x_20 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg(x_1, lean_box(0), x_3, x_13, lean_box(0), x_18, x_19, x_12, lean_box(0));
x_21 = lean_apply_8(x_4, lean_box(0), x_6, x_7, x_11, x_12, lean_box(0), lean_box(0), x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__1), 5, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___rarg___lambda__2), 10, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg(x_1, lean_box(0), x_10, x_11, lean_box(0), x_6, x_7, x_8, lean_box(0));
x_13 = lean_apply_1(x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_6, x_7, x_8, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsRegular_recIterModByRegular___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsRegular_ndrecIterModByRegular___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_6(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_apply_1(x_11, lean_box(0));
x_14 = lean_apply_10(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6, x_7, x_8, lean_box(0), lean_box(0), x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__1), 7, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__2), 12, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(x_10, x_11, lean_box(0), x_4, lean_box(0), x_6, x_7, x_8, lean_box(0));
x_13 = lean_apply_1(x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__1), 7, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___rarg___lambda__2), 12, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg(x_10, x_11, lean_box(0), x_4, lean_box(0), x_6, x_7, x_8, lean_box(0));
x_13 = lean_apply_1(x_12, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingTheory_Sequence_IsRegular_recIterModByRegularWithRing___at_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___spec__1___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), x_6, x_7, x_8, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingTheory_Sequence_IsRegular_ndrecIterModByRegularWithRing___rarg), 9, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Regular_IsSMulRegular(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Artinian_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nakayama(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Equiv_TransferInstance(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Regular_RegularSequence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Regular_IsSMulRegular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Artinian_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nakayama(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Equiv_TransferInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1 = _init_l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__1___closed__1);
l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1 = _init_l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_symm___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__11___rarg___closed__1);
l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1 = _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1();
lean_mark_persistent(l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__1);
l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2 = _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2();
lean_mark_persistent(l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__2);
l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3 = _init_l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3();
lean_mark_persistent(l_Submodule_quotEquivOfEq___at_Submodule_quotOfListConsSMulTopEquivQuotSMulTopInner___spec__21___rarg___closed__3);
l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1 = _init_l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1();
lean_mark_persistent(l_RingTheory_Sequence_IsWeaklyRegular_recIterModByRegularWithRing___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
