// Lean compiler output
// Module: Mathlib.RingTheory.DedekindDomain.Ideal
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Pointwise Mathlib.Algebra.Polynomial.FieldDivision Mathlib.RingTheory.Spectrum.Maximal.Localization Mathlib.RingTheory.ChainOfDivisors Mathlib.RingTheory.DedekindDomain.Basic Mathlib.RingTheory.FractionalIdeal.Operations Mathlib.Algebra.Squarefree.Basic
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
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9___rarg(lean_object*, lean_object*);
lean_object* l_AddSubmonoid_smul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__5___boxed(lean_object*, lean_object*);
static lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1;
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_Ideal_cancelCommMonoidWithZero___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17(lean_object*);
static lean_object* l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_cancelCommMonoidWithZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_cancelCommMonoidWithZero___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg(lean_object*, lean_object*);
lean_object* l_Submodule_idemSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20(lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_cancelCommMonoidWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6___rarg(lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
static lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1;
static lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdealHom___at_Ideal_cancelCommMonoidWithZero___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_cancelCommMonoidWithZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_Ideal_cancelCommMonoidWithZero___spec__10(lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg(lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_cancelCommMonoidWithZero(lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__6___boxed(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_normalizationMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_cancelCommMonoidWithZero___spec__18___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_Ideal_cancelCommMonoidWithZero___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__21___boxed(lean_object*, lean_object*);
lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg(lean_object*);
lean_object* l_Submodule_Quotient_mk___at_Ideal_Quotient_mk___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg___boxed(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsEquivOfQuotEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_Ideal_cancelCommMonoidWithZero___spec__10___rarg(lean_object*, lean_object*);
static lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__1;
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25(lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_idealFactorsEquivOfQuotEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22(lean_object*);
lean_object* l_FractionalIdeal_commSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid(lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdealHom___at_Ideal_cancelCommMonoidWithZero___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__2;
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_normalizationMonoid(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
static lean_object* _init_l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_2(x_2, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_6 = l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___rarg(x_3, lean_box(0), x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
x_9 = l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg(x_2, x_3, x_4, lean_box(0), x_4, lean_box(0), x_7, x_8);
lean_dec(x_8);
x_10 = l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg(x_2, x_3, x_9, lean_box(0), lean_box(0));
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_inc(x_5);
x_12 = l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg(x_1, x_2, x_3, x_11, x_5);
lean_dec(x_11);
x_13 = l_Semiring_toNonAssocSemiring___rarg(x_7);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Semiring_toModule___rarg(x_7);
lean_inc(x_15);
x_17 = l_AddSubmonoid_smul___elambda__1___rarg(x_15, x_15, x_16, x_12, x_5);
lean_dec(x_12);
lean_dec(x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_5);
x_18 = l_Semiring_toNonAssocSemiring___rarg(x_7);
x_19 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_18);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_3);
x_21 = l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg(x_1, x_2, x_3, x_20);
x_22 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_23 = l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg(x_1, x_2, x_3, x_22, lean_box(0), lean_box(0), x_21);
lean_dec(x_21);
lean_dec(x_22);
lean_dec(x_3);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_cancelCommMonoidWithZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_1);
x_8 = l_FractionalIdeal_commSemiring___rarg(x_1, x_6, lean_box(0), x_7, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg___boxed), 5, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_4);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_cancelCommMonoidWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FractionalIdeal_cancelCommMonoidWithZero___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_nonZeroDivisors___at_FractionalIdeal_cancelCommMonoidWithZero___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_smulRight___at_FractionalIdeal_cancelCommMonoidWithZero___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_toSpanSingleton___at_FractionalIdeal_cancelCommMonoidWithZero___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_FractionalIdeal_cancelCommMonoidWithZero___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_copy___at_FractionalIdeal_cancelCommMonoidWithZero___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_range___at_FractionalIdeal_cancelCommMonoidWithZero___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_FractionalIdeal_cancelCommMonoidWithZero___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Semiring_toMonoidWithZero___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_Ideal_cancelCommMonoidWithZero___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_Ideal_cancelCommMonoidWithZero___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OreLocalization_numeratorRingHom___at_Ideal_cancelCommMonoidWithZero___spec__7___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_2, x_3);
x_9 = lean_apply_2(x_7, x_8, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_Ideal_cancelCommMonoidWithZero___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_Ideal_cancelCommMonoidWithZero___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra___at_Ideal_cancelCommMonoidWithZero___spec__10___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg(x_1);
lean_inc(x_1);
x_3 = l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg(x_1, x_2);
x_4 = l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1;
x_5 = l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg(x_1, x_4, lean_box(0));
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg(x_1, x_4, lean_box(0), x_3, x_2);
lean_dec(x_3);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdealHom___at_Ideal_cancelCommMonoidWithZero___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdealHom___at_Ideal_cancelCommMonoidWithZero___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FractionalIdeal_coeIdealHom___at_Ideal_cancelCommMonoidWithZero___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_cancelCommMonoidWithZero___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_5, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_4 = l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg(x_1, lean_box(0), x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg(x_1, x_2, lean_box(0), x_2, lean_box(0), x_5, x_6);
lean_dec(x_6);
x_8 = l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg(x_1, x_7, lean_box(0), lean_box(0));
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_6, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_land(x_11, x_6);
x_13 = lean_nat_dec_eq(x_12, x_9);
lean_dec(x_12);
x_14 = lean_nat_shiftr(x_6, x_11);
lean_dec(x_6);
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Semiring_toModule___rarg(x_2);
lean_inc(x_8);
lean_inc(x_18);
lean_inc(x_17);
x_19 = l_AddSubmonoid_smul___elambda__1___rarg(x_17, x_17, x_18, x_8, x_8);
lean_inc(x_17);
x_20 = l_AddSubmonoid_smul___elambda__1___rarg(x_17, x_17, x_18, x_7, x_8);
lean_dec(x_7);
lean_dec(x_17);
x_6 = x_14;
x_7 = x_20;
x_8 = x_19;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Semiring_toModule___rarg(x_2);
lean_inc(x_8);
lean_inc(x_24);
x_26 = l_AddSubmonoid_smul___elambda__1___rarg(x_24, x_24, x_25, x_8, x_8);
lean_dec(x_8);
lean_dec(x_24);
x_6 = x_14;
x_8 = x_26;
goto _start;
}
}
else
{
lean_object* x_28; 
lean_dec(x_6);
x_28 = lean_apply_2(x_5, x_7, x_8);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_5);
x_6 = l_Algebra_id___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1;
x_9 = l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg(x_5, x_5, x_6, x_7, x_8, x_2, x_3, x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg(x_1, x_7);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg(x_1, x_9, lean_box(0), lean_box(0), x_8);
lean_dec(x_8);
lean_dec(x_9);
x_11 = l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg(x_1, x_2, x_10, x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_cancelCommMonoidWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_3);
x_4 = l_Algebra_id___rarg(x_3);
lean_inc(x_3);
x_5 = l_Submodule_idemSemiring___rarg(x_3, lean_box(0), x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_7);
lean_dec(x_7);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15___rarg), 3, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, lean_box(0));
lean_ctor_set(x_8, 1, x_16);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_7);
lean_dec(x_7);
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_npowBinRec___at_Ideal_cancelCommMonoidWithZero___spec__15___rarg), 3, 1);
lean_closure_set(x_20, 0, x_1);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, lean_box(0));
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Ideal_cancelCommMonoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_cancelCommMonoidWithZero___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_nonZeroDivisors___at_Ideal_cancelCommMonoidWithZero___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OreLocalization_oreDiv___at_Ideal_cancelCommMonoidWithZero___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OreLocalization_numeratorHom___at_Ideal_cancelCommMonoidWithZero___spec__8___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_toAlgebra_x27___at_Ideal_cancelCommMonoidWithZero___spec__11___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_comp___at_Ideal_cancelCommMonoidWithZero___spec__12(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLocalization_coeSubmodule___at_Ideal_cancelCommMonoidWithZero___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FractionalIdeal_coeIdeal___at_Ideal_cancelCommMonoidWithZero___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__16(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__19___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__19(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Ideal_cancelCommMonoidWithZero___spec__18___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_id___at_Ideal_cancelCommMonoidWithZero___spec__18(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_cancelCommMonoidWithZero___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_smulRight___at_Ideal_cancelCommMonoidWithZero___spec__20___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_toSpanSingleton___at_Ideal_cancelCommMonoidWithZero___spec__17___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__23___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_copy___at_Ideal_cancelCommMonoidWithZero___spec__24___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_range___at_Ideal_cancelCommMonoidWithZero___spec__22___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Nat_binaryRec___at_Ideal_cancelCommMonoidWithZero___spec__26___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_normalizationMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Ideal_cancelCommMonoidWithZero___rarg(x_1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_NormalizationMonoid_ofUniqueUnits___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_normalizationMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_normalizationMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_3 = l_Ideal_normalizationMonoid___rarg(x_1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_instNormalizedGCDMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_instNormalizedGCDMonoid___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg___boxed), 1, 0);
x_5 = lean_alloc_closure((void*)(l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg___boxed), 1, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsDedekindDomain_HeightOneSpectrum_equivMaximalSpectrum___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg___boxed), 4, 0);
return x_4;
}
}
static lean_object* _init_l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Submodule_Quotient_mk___at_Ideal_Quotient_mk___spec__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg(x_1, x_3, lean_box(0));
x_9 = l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1;
x_10 = l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg(x_6, x_9, lean_box(0), x_8);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_idealFactorsFunOfQuotHom___elambda__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_idealFactorsFunOfQuotHom___elambda__1___rarg___boxed), 7, 6);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_5);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_8);
lean_closure_set(x_10, 5, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_idealFactorsFunOfQuotHom___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_span___at_idealFactorsFunOfQuotHom___elambda__1___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_comap___at_idealFactorsFunOfQuotHom___elambda__1___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_idealFactorsFunOfQuotHom___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_idealFactorsFunOfQuotHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_idealFactorsFunOfQuotHom___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_symm___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_idealFactorsEquivOfQuotEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___lambda__1), 2, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_idealFactorsFunOfQuotHom___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_9, lean_box(0));
x_11 = l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg(x_1, x_2, x_4, x_5, x_7);
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_8);
x_13 = l_idealFactorsFunOfQuotHom___rarg(x_2, x_1, lean_box(0), x_5, x_4, x_12, lean_box(0));
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_idealFactorsEquivOfQuotEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_idealFactorsEquivOfQuotEquiv___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingEquiv_toMulEquiv___at_idealFactorsEquivOfQuotEquiv___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingEquiv_toAddEquiv___at_idealFactorsEquivOfQuotEquiv___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingEquiv_symm___at_idealFactorsEquivOfQuotEquiv___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHomClass_toMonoidHom___at_idealFactorsEquivOfQuotEquiv___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHomClass_toRingHom___at_idealFactorsEquivOfQuotEquiv___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_OrderIso_ofHomInv___at_idealFactorsEquivOfQuotEquiv___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_idealFactorsEquivOfQuotEquiv___rarg(x_1, x_2, lean_box(0), x_4, x_5, lean_box(0), x_7);
x_10 = l_Equiv_symm___rarg(x_9);
x_11 = l_Equiv_toEmbedding___elambda__1___rarg(x_10, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_normalizedFactorsEquivOfQuotEquiv___elambda__1___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_idealFactorsEquivOfQuotEquiv___rarg(x_1, x_2, lean_box(0), x_4, x_5, lean_box(0), x_7);
x_10 = l_Equiv_toEmbedding___elambda__1___rarg(x_9, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_normalizedFactorsEquivOfQuotEquiv___elambda__2___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_normalizedFactorsEquivOfQuotEquiv___elambda__2___rarg), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, lean_box(0));
lean_closure_set(x_10, 6, x_7);
x_11 = lean_alloc_closure((void*)(l_normalizedFactorsEquivOfQuotEquiv___elambda__1___rarg), 8, 7);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, lean_box(0));
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, lean_box(0));
lean_closure_set(x_11, 6, x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_normalizedFactorsEquivOfQuotEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_normalizedFactorsEquivOfQuotEquiv___rarg), 9, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_FieldDivision(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Maximal_Localization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_ChainOfDivisors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_FractionalIdeal_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Squarefree_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Ideal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_FieldDivision(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Maximal_Localization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_ChainOfDivisors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_FractionalIdeal_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Squarefree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1 = _init_l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1();
lean_mark_persistent(l_RingHom_id___at_FractionalIdeal_cancelCommMonoidWithZero___spec__3___closed__1);
l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1 = _init_l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1();
lean_mark_persistent(l_Algebra_linearMap___at_Ideal_cancelCommMonoidWithZero___spec__6___rarg___closed__1);
l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__1 = _init_l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__1();
lean_mark_persistent(l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__1);
l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__2 = _init_l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__2();
lean_mark_persistent(l_Submodule_map___at_Ideal_cancelCommMonoidWithZero___spec__14___rarg___closed__2);
l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1 = _init_l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_Ideal_cancelCommMonoidWithZero___spec__25___rarg___closed__1);
l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1 = _init_l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1();
lean_mark_persistent(l_idealFactorsFunOfQuotHom___elambda__1___rarg___closed__1);
l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_idealFactorsEquivOfQuotEquiv___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
