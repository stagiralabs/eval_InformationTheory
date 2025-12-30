// Lean compiler output
// Module: Mathlib.Algebra.Algebra.Subalgebra.Basic
// Imports: Init Mathlib.RingTheory.SimpleRing.Basic Mathlib.Algebra.Algebra.Operations Mathlib.Algebra.Algebra.NonUnitalSubalgebra
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
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSetLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_equalizer___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubmoduleClass_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PLift_fintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra(lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instUnique___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_center(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_equivOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_adjoin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1;
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_adjoin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instUnique(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv(lean_object*, lean_object*);
lean_object* l_Submonoid_instSMulSubtypeMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subalgebra_equivOfEq___closed__1;
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Set_inclusion___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subsemiring_center_commSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subring_toRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_inclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_center___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_equalizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_val___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2;
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgEquiv_ofLeftInverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_Algebra_toTop___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_equalizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map(lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_ofSubsemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toRing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3(lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Subalgebra_inclusion___closed__1;
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subalgebra_topEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3___rarg(lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_toTop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SetLike_instPartialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_equivOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subring_instCommRingSubtypeMemCenter___rarg(lean_object*);
lean_object* l_Equiv_image___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toRing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_val___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Set_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_centralizer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_module_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_center___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_val___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subring_toCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_center___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_equalizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_adjoin___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toRing___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring(lean_object*, lean_object*);
lean_object* l_Subsemiring_centralizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toRing___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_gi___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_toTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_Algebra_instCompleteLatticeSubalgebra___spec__1;
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubalgebraClass_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_adjoin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_module_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_algebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_ofEq___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subsemiring_toSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra(lean_object*, lean_object*);
lean_object* l_AddSubmonoid_instInfSet___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_instSetLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSetLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_instSetLike(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_copy___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_copy___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_copy(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toNonUnitalSubalgebra___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toNonUnitalSubalgebra___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toNonUnitalSubalgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toNonUnitalSubalgebra(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toAddSubmonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_toAddSubmonoid___at_Subalgebra_toAddSubmonoid___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toAddSubmonoid___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAddSubmonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toAddSubmonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubring(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Subalgebra_toSubring___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subalgebra_toSubring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubring___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_toSubring(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_instInhabitedSubtypeMem___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_instInhabitedSubtypeMem___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instInhabitedSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_instInhabitedSubtypeMem(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_toSemiring___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toSemiring___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toSemiring___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSemiring___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toSemiring(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_toSemiring___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toCommSemiring___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toCommSemiring___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommSemiring___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toCommSemiring(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subring_toRing___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toRing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toRing___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toRing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toRing___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toRing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toRing(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subring_toCommRing___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toCommRing___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toCommRing___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toCommRing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toCommRing(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_toSubmodule___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toSubmodule___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmodule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_toSubmodule(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = l_Subalgebra_toSubmodule___rarg(x_1, x_2, x_3);
x_10 = l_Submodule_module_x27___rarg(x_8, x_9, x_4, x_5, x_6, lean_box(0));
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_module_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Subalgebra_module_x27___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_module_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_module_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subalgebra_module_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = l_Algebra_id___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = l_Subalgebra_module_x27___rarg(x_2, x_3, x_4, x_1, x_6, x_7, lean_box(0));
lean_dec(x_6);
lean_dec(x_1);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subalgebra_instModuleSubtypeMem___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instModuleSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subalgebra_instModuleSubtypeMem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg___boxed), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = l_Subalgebra_module_x27___rarg(x_2, x_3, x_4, x_5, x_6, x_9, lean_box(0));
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_4);
lean_closure_set(x_12, 2, lean_box(0));
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_algebra_x27___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_codRestrict___at_Subalgebra_algebra_x27___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_algebra_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = l_Algebra_id___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_3);
x_7 = l_Subalgebra_algebra_x27___rarg(x_1, x_2, x_3, x_4, x_1, x_6, x_3, lean_box(0));
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subalgebra_algebra___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_algebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subalgebra_algebra___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Subalgebra_val___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subalgebra_val___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_val(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
static lean_object* _init_l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1;
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_ofEq___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1;
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_dec(x_9);
x_10 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2;
lean_ctor_set(x_7, 1, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Subalgebra_toSubmodule___rarg(x_2, x_3, x_4);
x_6 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg(x_1, x_2, x_3, x_5, x_5, lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subalgebra_toSubmoduleEquiv___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toSubmoduleEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subalgebra_toSubmoduleEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg(x_4, x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_map___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_Subalgebra_map___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_Subalgebra_map___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Subalgebra_map___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subalgebra_map___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Subalgebra_map___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_map___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg(x_2, x_4, x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_comap___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_Subalgebra_comap___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_Subalgebra_comap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_Subalgebra_comap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_comap___at_Subalgebra_comap___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_comap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = l_SubmoduleClass_module___rarg(x_1, x_10, x_11, x_4, lean_box(0), lean_box(0), x_7);
lean_dec(x_10);
x_13 = lean_alloc_closure((void*)(l_SubalgebraClass_toAlgebra___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubalgebraClass_toAlgebra___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_toAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubalgebraClass_toAlgebra___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_val___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_val(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_SubalgebraClass_val___rarg___boxed), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_val___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubalgebraClass_val___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubalgebraClass_val___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_SubalgebraClass_val(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_toSubalgebra___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_toSubalgebra___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_toSubalgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_toSubalgebra(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_AlgHom_range___spec__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_Subsemiring_map___at_AlgHom_range___spec__2___rarg(x_2, x_3, x_4);
lean_dec(x_4);
x_6 = l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg(x_2, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AlgHom_range___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgHom_range___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_range___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgHom_range___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_copy___at_AlgHom_range___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgHom_range___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgHom_range(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg___boxed), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg___boxed), 4, 3);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_codRestrict___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_AlgHom_codRestrict___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_AlgHom_codRestrict___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_AlgHom_codRestrict___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_codRestrict___at_AlgHom_codRestrict___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgHom_codRestrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(x_2, x_4, x_6);
x_8 = l_AlgHom_codRestrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_rangeRestrict___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_rangeRestrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgHom_rangeRestrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_PLift_fintype___rarg(x_1);
x_5 = l_Set_fintypeRange___rarg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AlgHom_fintypeRange___rarg), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fintypeRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgHom_fintypeRange(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_AlgEquiv_ofLeftInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgEquiv_ofLeftInverse___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_RingHom_rangeS___at_AlgHom_range___spec__1___rarg(x_2, x_3, x_7);
x_10 = l_AlgHom_codRestrict___rarg(x_1, x_2, x_4, x_3, x_5, x_7, x_9, lean_box(0));
x_11 = l_AlgEquiv_ofLeftInverse___rarg___closed__1;
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgEquiv_ofLeftInverse___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_ofLeftInverse___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLeftInverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgEquiv_ofLeftInverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
return x_1;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg(x_3);
x_6 = l_Equiv_image___rarg(x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg(x_1, x_4);
x_6 = l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg(x_1, x_2, x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg(x_1, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AlgEquiv_subalgebraMap___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_toAddSubmonoid___at_AlgEquiv_subalgebraMap___spec__2___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_map___at_AlgEquiv_subalgebraMap___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_addSubmonoidMap___at_AlgEquiv_subalgebraMap___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHomClass_toMonoidHom___at_AlgEquiv_subalgebraMap___spec__7___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHomClass_toRingHom___at_AlgEquiv_subalgebraMap___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgEquiv_subalgebraMap___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingEquiv_subsemiringMap___at_AlgEquiv_subalgebraMap___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHomClass_toAlgHom___at_AlgEquiv_subalgebraMap___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgEquiv_subalgebraMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgEquiv_subalgebraMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iInf___at_Algebra_adjoin___spec__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Algebra_adjoin___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_AddMonoid_toAddZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = l_AddSubmonoid_instInfSet___elambda__1___rarg(x_6, lean_box(0));
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iInf___at_Algebra_adjoin___spec__5___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_AddMonoid_toAddZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = l_AddSubmonoid_instInfSet___elambda__1___rarg(x_6, lean_box(0));
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Algebra_adjoin___spec__6___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_iInf___at_Algebra_adjoin___spec__2___rarg(x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_iInf___at_Algebra_adjoin___spec__5___rarg(x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_iInf___at_Algebra_adjoin___spec__3___rarg(x_1, x_4);
lean_dec(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = l_iInf___at_Algebra_adjoin___spec__6___rarg(x_1, x_6);
lean_dec(x_6);
x_8 = l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg(x_1, lean_box(0), x_5, lean_box(0), x_7, lean_box(0));
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Algebra_adjoin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_adjoin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Algebra_adjoin___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Algebra_adjoin___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Algebra_adjoin___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Algebra_adjoin___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_toAddSubmonoid___at_Algebra_adjoin___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Algebra_adjoin___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Algebra_adjoin___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Algebra_adjoin___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Algebra_adjoin___spec__6___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subsemiring_mk_x27___at_Algebra_adjoin___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg___lambda__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_adjoin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_adjoin___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_adjoin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_adjoin(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(x_1, lean_box(0));
x_6 = l_Subalgebra_copy___rarg(x_1, x_2, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Algebra_gi___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Algebra_gi___elambda__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Algebra_gi___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Algebra_gi___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Algebra_gi___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_gi___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_gi___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_gi___elambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_gi___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_gi___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_Algebra_instCompleteLatticeSubalgebra___spec__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg(x_2, x_3, x_4);
lean_dec(x_4);
x_6 = l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg(x_2, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Algebra_gi___elambda__1___rarg(x_1, x_2, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_closure___at_Algebra_adjoin___spec__1___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_gi___elambda__1___rarg(x_1, x_2, lean_box(0), lean_box(0));
return x_4;
}
}
static lean_object* _init_l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_SetLike_instPartialOrder(lean_box(0), lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_4 = l_Algebra_gi___elambda__1___rarg(x_2, x_3, lean_box(0), lean_box(0));
x_5 = l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1;
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
lean_inc(x_3);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2___boxed), 4, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
lean_inc(x_2);
x_10 = lean_alloc_closure((void*)(l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__3), 2, 1);
lean_closure_set(x_10, 0, x_2);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg(x_1, x_2, x_12);
lean_dec(x_12);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_11);
lean_ctor_set(x_14, 3, x_4);
lean_ctor_set(x_14, 4, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Algebra_instCompleteLatticeSubalgebra___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Algebra_instCompleteLatticeSubalgebra___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_copy___at_Algebra_instCompleteLatticeSubalgebra___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_rangeS___at_Algebra_instCompleteLatticeSubalgebra___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgHom_range___at_Algebra_instCompleteLatticeSubalgebra___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_instCompleteLatticeSubalgebra___rarg___lambda__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_instCompleteLatticeSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_instCompleteLatticeSubalgebra___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg(x_2, x_3, x_4);
lean_dec(x_4);
x_6 = l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg(x_2, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
x_5 = l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Algebra_instInhabitedSubalgebra___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Algebra_instInhabitedSubalgebra___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_copy___at_Algebra_instInhabitedSubalgebra___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_rangeS___at_Algebra_instInhabitedSubalgebra___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgHom_range___at_Algebra_instInhabitedSubalgebra___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_instInhabitedSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_instInhabitedSubalgebra___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_toTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_4 = l_Algebra_gi___elambda__1___rarg(x_2, x_3, lean_box(0), lean_box(0));
x_5 = l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1;
x_6 = l_AlgHom_codRestrict___rarg(x_1, x_2, x_3, x_2, x_3, x_5, x_4, lean_box(0));
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Algebra_toTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Algebra_toTop___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_toTop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Algebra_toTop___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1___rarg), 4, 0);
return x_7;
}
}
static lean_object* _init_l_Subalgebra_topEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subalgebra_val___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Algebra_toTop___rarg(x_1, x_2, x_3);
x_5 = l_Subalgebra_topEquiv___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subalgebra_topEquiv___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgEquiv_ofAlgHom___at_Subalgebra_topEquiv___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_topEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_topEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = l_Algebra_id___rarg(x_1);
x_3 = l_Algebra_instInhabitedSubalgebra___rarg(x_1, x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instUnique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subalgebra_instUnique___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Subalgebra_inclusion___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Set_inclusion___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_inclusion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_inclusion___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_inclusion(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Subalgebra_equivOfEq___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AlgEquiv_ofLeftInverse___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_equivOfEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_equivOfEq___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_equivOfEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_equivOfEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg___boxed), 4, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg___boxed), 4, 3);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_8);
lean_closure_set(x_12, 2, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Subalgebra_topEquiv___rarg___closed__1;
lean_inc(x_7);
x_9 = l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = l_Subalgebra_map___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_6);
x_11 = l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_9, x_10, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_subalgebraMap___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_comp___at_AlgHom_subalgebraMap___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgHom_comp___at_AlgHom_subalgebraMap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MulHomClass_toMulHom___at_AlgHom_subalgebraMap___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MonoidHomClass_toMonoidHom___at_AlgHom_subalgebraMap___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHomClass_toRingHom___at_AlgHom_subalgebraMap___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_RingHom_codRestrict___at_AlgHom_subalgebraMap___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHom_codRestrict___at_AlgHom_subalgebraMap___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgHom_subalgebraMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgHom_subalgebraMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Subalgebra_instSMulSubtypeMem___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instSMulSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_instSMulSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Subalgebra_instMulActionSubtypeMem___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instMulActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_instMulActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Subalgebra_instDistribMulActionSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instDistribMulActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instDistribMulActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_instDistribMulActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Subalgebra_instSMulWithZeroSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instSMulWithZeroSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instSMulWithZeroSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_instSMulWithZeroSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instMulActionWithZeroSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instMulActionWithZeroSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_instMulActionWithZeroSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Subalgebra_moduleLeft___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_moduleLeft___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_moduleLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_moduleLeft(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Algebra_ofSubsemiring___rarg(x_1, x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Subalgebra_toAlgebra___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_toAlgebra___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toAlgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subalgebra_toAlgebra(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_center___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_center(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_center___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemiring_center___at_Subalgebra_center___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_center___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_center___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_center___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_center(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_center_commSemiring___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instCommSemiringSubtypeMemCenter___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommSemiringSubtypeMemCenter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_instCommSemiringSubtypeMemCenter(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subring_instCommRingSubtypeMemCenter___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_instCommRingSubtypeMemCenter___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_instCommRingSubtypeMemCenter___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_instCommRingSubtypeMemCenter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_instCommRingSubtypeMemCenter(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_centralizer___rarg(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_centralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_centralizer___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_centralizer___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_centralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_centralizer(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_subalgebraOfSubsemiring___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_subalgebraOfSubsemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubsemiring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_subalgebraOfSubsemiring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubring___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_subalgebraOfSubring___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_subalgebraOfSubring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_subalgebraOfSubring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_subalgebraOfSubring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_equalizer___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgHom_equalizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AlgHom_equalizer___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_equalizer___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHom_equalizer___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgHom_equalizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgHom_equalizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NonUnitalSubalgebra_toSubalgebra___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NonUnitalSubalgebra_toSubalgebra___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubalgebra_toSubalgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NonUnitalSubalgebra_toSubalgebra(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_SimpleRing_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_NonUnitalSubalgebra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_SimpleRing_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_NonUnitalSubalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1 = _init_l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Subalgebra_toSubmoduleEquiv___spec__2___closed__1);
l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1 = _init_l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__1);
l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2 = _init_l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2();
lean_mark_persistent(l_LinearEquiv_ofEq___at_Subalgebra_toSubmoduleEquiv___spec__1___rarg___closed__2);
l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_Subalgebra_map___spec__3___rarg___closed__1);
l_AlgEquiv_ofLeftInverse___rarg___closed__1 = _init_l_AlgEquiv_ofLeftInverse___rarg___closed__1();
lean_mark_persistent(l_AlgEquiv_ofLeftInverse___rarg___closed__1);
l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1 = _init_l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1();
lean_mark_persistent(l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__1);
l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2 = _init_l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2();
lean_mark_persistent(l_EquivLike_toEquiv___at_AlgEquiv_subalgebraMap___spec__4___rarg___closed__2);
l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_AlgEquiv_subalgebraMap___spec__8___rarg___closed__1);
l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_Algebra_instCompleteLatticeSubalgebra___spec__1 = _init_l_Union_union____x40_Mathlib_Data_Set_Operations___hyg_4____at_Algebra_instCompleteLatticeSubalgebra___spec__1();
l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1 = _init_l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1();
lean_mark_persistent(l_Algebra_instCompleteLatticeSubalgebra___rarg___closed__1);
l_Subalgebra_topEquiv___rarg___closed__1 = _init_l_Subalgebra_topEquiv___rarg___closed__1();
lean_mark_persistent(l_Subalgebra_topEquiv___rarg___closed__1);
l_Subalgebra_inclusion___closed__1 = _init_l_Subalgebra_inclusion___closed__1();
lean_mark_persistent(l_Subalgebra_inclusion___closed__1);
l_Subalgebra_equivOfEq___closed__1 = _init_l_Subalgebra_equivOfEq___closed__1();
lean_mark_persistent(l_Subalgebra_equivOfEq___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
