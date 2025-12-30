// Lean compiler output
// Module: Mathlib.FieldTheory.IntermediateField.Basic
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Tower Mathlib.Algebra.Field.IsField Mathlib.Algebra.Field.Subfield.Basic Mathlib.Algebra.Polynomial.AlgebraMap Mathlib.RingTheory.LocalRing.Basic
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
LEAN_EXPORT lean_object* l_IntermediateField_copy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_lift(lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toField___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_comap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
static lean_object* l_IntermediateField_liftAlgEquiv___closed__2;
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toField(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg(lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instCoeOutSubtypeMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2;
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subalgebra_algebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toField___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_val___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submonoid_instSMulSubtypeMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16___rarg(lean_object*);
lean_object* l_Set_inclusion___rarg___boxed(lean_object*);
lean_object* l_Subalgebra_algebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_comap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_AlgHom_inhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_IntermediateField_liftAlgEquiv___closed__1;
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_lift___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_IntermediateField_AlgHom_inhabited___closed__1;
LEAN_EXPORT lean_object* l_IntermediateField_module_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg___boxed(lean_object*);
lean_object* l_Algebra_ofSubsemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange(lean_object*, lean_object*, lean_object*);
lean_object* l_Subfield_toField___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toField___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Subalgebra_module_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrict(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_image___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars(lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instCoeOutSubtypeMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1;
LEAN_EXPORT lean_object* l_IntermediateField_instSetLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_inclusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_AlgHom_inhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_comap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_map(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_extendScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_val___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntermediateField_instSetLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSetLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IntermediateField_instSetLike(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IntermediateField_toSubfield___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IntermediateField_toSubfield___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IntermediateField_toSubfield(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg(x_2, x_3, x_4, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_copy(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_copy___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_copy___at_IntermediateField_copy___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_copy___at_IntermediateField_copy___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subalgebra_copy___at_IntermediateField_copy___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_copy___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Subalgebra_toIntermediateField___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_toIntermediateField___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_toIntermediateField(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Subalgebra_toIntermediateField_x27___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_toIntermediateField_x27___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_toIntermediateField_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_toIntermediateField_x27(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Subfield_toIntermediateField___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subfield_toIntermediateField___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subfield_toIntermediateField(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subfield_toField___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toField(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_toField___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_toField___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_toField(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_IntermediateField_instSMulSubtypeMem___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instSMulSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_instSMulSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_IntermediateField_instMulActionSubtypeMem___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instMulActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_instMulActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instDistribMulActionSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instDistribMulActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instDistribMulActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instDistribMulActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instMulDistribMulActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulDistribMulActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instMulDistribMulActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instSMulWithZeroSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instSMulWithZeroSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulWithZeroSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instSMulWithZeroSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instMulActionWithZeroSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulActionWithZeroSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instMulActionWithZeroSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instModuleSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instModuleSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instModuleSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IntermediateField_instMulSemiringActionSubtypeMem___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_instMulSemiringActionSubtypeMem___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instMulSemiringActionSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instMulSemiringActionSubtypeMem(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_Semifield_toDivisionSemiring___rarg(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_5);
x_8 = l_Algebra_id___rarg(x_5);
x_9 = l_Algebra_ofSubsemiring___rarg(x_5, x_7, x_8, x_3);
lean_dec(x_7);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_toAlgebra___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_toAlgebra___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toAlgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_toAlgebra(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Field_toSemifield___rarg(x_1);
x_10 = l_Semifield_toDivisionSemiring___rarg(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Subalgebra_module_x27___rarg(x_11, x_2, x_3, x_5, x_6, x_7, lean_box(0));
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_module_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_module_x27___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IntermediateField_module_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_module_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_module_x27(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Field_toSemifield___rarg(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Field_toSemifield___rarg(x_2);
x_12 = l_Semifield_toDivisionSemiring___rarg(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Subalgebra_algebra_x27___rarg(x_10, x_13, x_3, x_4, x_5, x_6, x_7, lean_box(0));
lean_dec(x_13);
lean_dec(x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_algebra_x27___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_algebra_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IntermediateField_algebra_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Field_toSemifield___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Algebra_ofSubsemiring___rarg(x_8, x_5, x_6, x_3);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_instAlgebraSubtypeMem___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_instAlgebraSubtypeMem___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_instAlgebraSubtypeMem(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Subfield_toField___rarg(x_1, x_3);
x_9 = l_Field_toSemifield___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Field_toSemifield___rarg(x_5);
x_12 = l_Semifield_toDivisionSemiring___rarg(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_IntermediateField_instAlgebraSubtypeMem___rarg(x_1, x_2, x_3, lean_box(0), x_13, x_6);
lean_dec(x_3);
lean_dec(x_1);
x_15 = l_Subalgebra_algebra___rarg(x_10, x_13, x_14, x_7);
lean_dec(x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_instAlgebraSubtypeMem__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instAlgebraSubtypeMem__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instAlgebraSubtypeMem__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_instAlgebraSubtypeMem__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_IntermediateField_instAlgebraSubtypeMem__1___rarg(x_1, x_2, x_3, lean_box(0), x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_instModuleSubtypeMem__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instModuleSubtypeMem__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instModuleSubtypeMem__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_instModuleSubtypeMem__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_IntermediateField_instAlgebraSubtypeMem__1___rarg(x_1, x_2, x_3, lean_box(0), x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_instSMulSubtypeMem__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_instSMulSubtypeMem__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instSMulSubtypeMem__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_instSMulSubtypeMem__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg(x_2, x_3, x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_comap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_comap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_comap___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_IntermediateField_comap___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_IntermediateField_comap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_comap___at_IntermediateField_comap___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_comap___at_IntermediateField_comap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_comap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_comap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg(x_3, x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_map___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_IntermediateField_map___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_IntermediateField_map___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_IntermediateField_map___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_map___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_map___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_map___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_map___at_IntermediateField_map___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_map___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
return x_1;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg(x_3);
x_6 = l_Equiv_image___rarg(x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg(x_1, x_4);
x_6 = l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg(x_1, x_2, x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg(x_3, x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg(x_2, x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_intermediateFieldMap___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgEquiv_toRingEquiv___at_IntermediateField_intermediateFieldMap___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemiring_toAddSubmonoid___at_IntermediateField_intermediateFieldMap___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_map___at_IntermediateField_intermediateFieldMap___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_addSubmonoidMap___at_IntermediateField_intermediateFieldMap___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__9___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__8___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingEquiv_subsemiringMap___at_IntermediateField_intermediateFieldMap___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHomClass_toAlgHom___at_IntermediateField_intermediateFieldMap___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_IntermediateField_intermediateFieldMap___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_IntermediateField_intermediateFieldMap___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_intermediateFieldMap___spec__17(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Subalgebra_map___at_IntermediateField_intermediateFieldMap___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_subalgebraMap___at_IntermediateField_intermediateFieldMap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_intermediateFieldMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_intermediateFieldMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg(x_2, x_3, x_4);
lean_dec(x_4);
x_6 = l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg(x_2, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg(x_1, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg(x_2, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_fieldRange___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_AlgHom_fieldRange___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_AlgHom_fieldRange___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_copy___at_AlgHom_fieldRange___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_rangeS___at_AlgHom_fieldRange___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgHom_range___at_AlgHom_fieldRange___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_AlgHom_fieldRange___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgHom_range___at_AlgHom_fieldRange___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgHom_fieldRange___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_val___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_val(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_val___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_val___at_IntermediateField_val___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_val___at_IntermediateField_val___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_val___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IntermediateField_val___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_IntermediateField_AlgHom_inhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subalgebra_val___at_IntermediateField_val___spec__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_AlgHom_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_AlgHom_inhabited___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_AlgHom_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_AlgHom_inhabited(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
static lean_object* _init_l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Set_inclusion___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Set_inclusion___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_inclusion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_inclusion___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_inclusion___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg(x_2, x_3, x_4, x_8, x_6);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_IntermediateField_AlgHom_inhabited___closed__1;
x_7 = l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg(x_1, x_2, x_3, x_4, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_lift___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHomClass_toMulHom___at_IntermediateField_lift___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHomClass_toMonoidHom___at_IntermediateField_lift___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHomClass_toRingHom___at_IntermediateField_lift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subsemiring_map___at_IntermediateField_lift___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_lift___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_lift___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subalgebra_map___at_IntermediateField_lift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_map___at_IntermediateField_lift___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_lift___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IntermediateField_lift___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instCoeOutSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IntermediateField_lift___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_instCoeOutSubtypeMem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_instCoeOutSubtypeMem___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_IntermediateField_liftAlgEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_IntermediateField_liftAlgEquiv___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_IntermediateField_liftAlgEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_IntermediateField_liftAlgEquiv___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_liftAlgEquiv___closed__2;
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IntermediateField_liftAlgEquiv___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_liftAlgEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_liftAlgEquiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IntermediateField_restrictScalars___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IntermediateField_restrictScalars___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IntermediateField_restrictScalars(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subfield_extendScalars___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subfield_toIntermediateField___at_Subfield_extendScalars___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subfield_extendScalars___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_IntermediateField_liftAlgEquiv___closed__1;
x_4 = lean_alloc_closure((void*)(l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subfield_extendScalars_orderIso___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_toSubfield___at_Subfield_extendScalars_orderIso___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_extendScalars_orderIso___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subfield_extendScalars_orderIso___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_IntermediateField_extendScalars___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IntermediateField_extendScalars___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_extendScalars(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
lean_closure_set(x_5, 3, lean_box(0));
x_6 = l_IntermediateField_liftAlgEquiv___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_extendScalars_orderIso___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IntermediateField_restrictScalars___at_IntermediateField_extendScalars_orderIso___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_extendScalars_orderIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IntermediateField_extendScalars_orderIso___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
x_8 = l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg(x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
x_9 = l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg(x_2, x_3, x_5, x_8, lean_box(0), lean_box(0));
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1;
x_8 = l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrict(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IntermediateField_restrict___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subsemiring_map___at_IntermediateField_restrict___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_IntermediateField_restrict___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_IntermediateField_restrict___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_copy___at_IntermediateField_restrict___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_copy___at_IntermediateField_restrict___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_rangeS___at_IntermediateField_restrict___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgHom_range___at_IntermediateField_restrict___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgHom_fieldRange___at_IntermediateField_restrict___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntermediateField_restrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntermediateField_restrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_IsField(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Subfield_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_AlgebraMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_IsField(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Subfield_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_AlgebraMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_IntermediateField_comap___spec__4___rarg___closed__1);
l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1 = _init_l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1();
lean_mark_persistent(l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__1);
l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2 = _init_l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2();
lean_mark_persistent(l_EquivLike_toEquiv___at_IntermediateField_intermediateFieldMap___spec__6___rarg___closed__2);
l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_IntermediateField_intermediateFieldMap___spec__10___rarg___closed__1);
l_IntermediateField_AlgHom_inhabited___closed__1 = _init_l_IntermediateField_AlgHom_inhabited___closed__1();
lean_mark_persistent(l_IntermediateField_AlgHom_inhabited___closed__1);
l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1 = _init_l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1();
lean_mark_persistent(l_Subalgebra_inclusion___at_IntermediateField_inclusion___spec__1___closed__1);
l_IntermediateField_liftAlgEquiv___closed__1 = _init_l_IntermediateField_liftAlgEquiv___closed__1();
lean_mark_persistent(l_IntermediateField_liftAlgEquiv___closed__1);
l_IntermediateField_liftAlgEquiv___closed__2 = _init_l_IntermediateField_liftAlgEquiv___closed__2();
lean_mark_persistent(l_IntermediateField_liftAlgEquiv___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
