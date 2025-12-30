// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.StructureSheaf
// Imports: Init Mathlib.Algebra.Category.Ring.Colimits Mathlib.Algebra.Category.Ring.Instances Mathlib.Algebra.Category.Ring.Limits Mathlib.Algebra.Ring.Subring.Basic Mathlib.RingTheory.Localization.AtPrime Mathlib.RingTheory.Spectrum.Prime.Topology Mathlib.Topology.Sheaves.LocalPredicate
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
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CompleteLattice_toCompleteSemilatticeInf___rarg(lean_object*);
lean_object* l_TopCat_subpresheafToTypes(lean_object*, lean_object*, lean_object*);
static lean_object* l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4___rarg(lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isLocallyFraction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2;
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Preorder_smallCategory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3;
static lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_toOpen___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_OreLocalization_instRing___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg(lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___boxed(lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1;
static lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3;
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isLocallyFraction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal(lean_object*, lean_object*);
extern lean_object* l_CategoryTheory_types;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations(lean_object*);
lean_object* l_OreLocalization_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_toOpen(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_structureSheaf(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1(lean_object*);
lean_object* l_CategoryTheory_Functor_category___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_PrimeSpectrum_Top(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Subring_toCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType(lean_object*);
static lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_PrimeSpectrum_Top___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_structureSheaf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
static lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___boxed(lean_object*, lean_object*);
lean_object* l_TopologicalSpace_Opens_instCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3(lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1;
lean_object* l_Pi_ring___rarg(lean_object*);
static lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType___rarg___boxed(lean_object*);
static lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openAlgebra___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_PrimeSpectrum_Top(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_PrimeSpectrum_Top___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_PrimeSpectrum_Top(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg(x_1, x_2, lean_box(0));
x_4 = l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1;
x_5 = l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_OreLocalization_instRing___rarg(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_commRingLocalizations___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg(x_1, x_2, lean_box(0));
x_4 = l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OreLocalization_one___at_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_instInhabitedLocalizations___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg(x_1, x_3, lean_box(0));
lean_dec(x_1);
x_6 = l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1;
x_7 = l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_inc(x_4);
x_9 = l_Algebra_id___rarg(x_4);
lean_inc(x_4);
x_10 = l_OreLocalization_instAlgebra___rarg(x_4, x_5, x_8, lean_box(0), x_4, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicGeometry_StructureSheaf_instAlgebraLocalizationsValCarrierTopMemOpens___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isLocallyFraction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_isLocallyFraction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_isLocallyFraction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_AlgebraicGeometry_StructureSheaf_isLocallyFraction(lean_box(0), x_1);
x_4 = l_TopCat_subpresheafToTypes(x_2, lean_box(0), x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structureSheafInType___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structureSheafInType___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_structureSheafInType___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Pi_ring___rarg(x_3);
x_5 = l_AlgebraicGeometry_StructureSheaf_sectionsSubring___rarg(x_1, x_2);
lean_dec(x_1);
x_6 = l_Subring_toCommRing___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_AlgebraicGeometry_structureSheafInType___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_3(x_6, x_2, x_3, x_4);
return x_7;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_TopologicalSpace_Opens_instCompleteLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1;
x_2 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Preorder_smallCategory(lean_box(0), x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_commRingStructureSheafInTypeObj___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structurePresheafInCommRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_8);
lean_inc(x_3);
x_9 = lean_apply_1(x_8, x_3);
lean_inc(x_4);
x_10 = lean_apply_1(x_8, x_4);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_3(x_11, x_3, x_4, x_5);
x_13 = lean_apply_4(x_7, x_9, x_10, x_12, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg___lambda__1), 6, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4;
x_2 = l_CategoryTheory_types;
x_3 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___lambda__2), 3, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1___boxed), 1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg(x_1);
x_3 = l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2;
x_4 = l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___rarg(x_2, x_3);
x_5 = l_AlgebraicGeometry_structureSheafInType___rarg(x_1);
lean_dec(x_1);
x_6 = l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3;
x_7 = l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg(x_4, x_5, x_6, lean_box(0));
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_structurePresheafCompForget___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_comp___at_AlgebraicGeometry_structurePresheafCompForget___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_structurePresheafCompForget___rarg___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_structureSheaf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_structureSheaf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_Spec_structureSheaf___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_Semiring_toMonoidWithZero___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorRingHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OreLocalization_numeratorRingHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_toOpen___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg(x_1, x_4, lean_box(0));
lean_inc(x_1);
x_6 = l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg(x_1, x_2, x_4, x_5);
x_7 = l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1;
x_8 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg(x_1, x_7, lean_box(0));
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Function_comp___rarg(x_6, x_9, x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_toOpen(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_toOpen___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OreLocalization_oreDiv___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OreLocalization_numeratorHom___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_comp___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_openToLocalization___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_primeCompl___at_AlgebraicGeometry_StructureSheaf_openToLocalization___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openToLocalization___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicGeometry_StructureSheaf_openToLocalization(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_6, x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_toOpen___spec__6___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openAlgebra___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg(x_1);
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_toOpen___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0));
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_StructureSheaf_openAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_openAlgebra___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_toAlgebra_x27___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_toAlgebra___at_AlgebraicGeometry_StructureSheaf_openAlgebra___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Colimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Instances(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_AtPrime(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_LocalPredicate(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_StructureSheaf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Colimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_AtPrime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_LocalPredicate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1 = _init_l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__1);
l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2 = _init_l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2();
lean_mark_persistent(l_AlgebraicGeometry_StructureSheaf_commRingLocalizations___rarg___closed__2);
l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1 = _init_l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_StructureSheaf_isFractionPrelocal___closed__1);
l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1 = _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__1);
l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2 = _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__2);
l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3 = _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__3);
l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4 = _init_l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafInCommRing___rarg___closed__4);
l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1 = _init_l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__1);
l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2 = _init_l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AlgebraicGeometry_structurePresheafCompForget___spec__2___closed__2);
l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___closed__1 = _init_l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_NatIso_ofComponents___at_AlgebraicGeometry_structurePresheafCompForget___spec__3___rarg___closed__1);
l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1 = _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__1);
l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2 = _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__2);
l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3 = _init_l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3();
lean_mark_persistent(l_AlgebraicGeometry_structurePresheafCompForget___rarg___closed__3);
l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1 = _init_l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1();
lean_mark_persistent(l_Opens_grothendieckTopology___at_AlgebraicGeometry_Spec_structureSheaf___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
