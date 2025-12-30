// Lean compiler output
// Module: Mathlib.Algebra.Category.ModuleCat.Sheaf
// Imports: Init Mathlib.Algebra.Category.ModuleCat.Presheaf Mathlib.Algebra.Category.ModuleCat.Limits Mathlib.CategoryTheory.Sites.LocallyBijective Mathlib.CategoryTheory.Sites.Whiskering
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_unitHomEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_unit___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_SheafOfModules_instCategory___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_unitHomEquiv(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_id___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_unit(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instPreadditive___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_sectionsMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_unit___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsFunctor___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_unit___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_SheafOfModules_forget___rarg___closed__2;
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_Neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheafCompSheafToPresheafIso(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_unitHomEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instPreadditive(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_evaluation___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__1(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1(lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1;
lean_object* l_CategoryTheory_Functor_category___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_toPresheaf___rarg(lean_object*, lean_object*);
lean_object* l_PresheafOfModules_presheaf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_SheafOfModules_instCategory___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_SheafOfModules_forget___rarg___closed__1;
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsFunctor(lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PresheafOfModules_instAddCommGroupHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheafCompSheafToPresheafIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_AddCommGrp_instCategory;
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SheafOfModules_forget(lean_object*);
static lean_object* _init_l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_SheafOfModules_instCategory___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4___rarg), 2, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_9);
x_10 = lean_apply_1(x_7, x_9);
x_11 = lean_apply_1(x_8, x_9);
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_SheafOfModules_instCategory___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_closure((void*)(l_SheafOfModules_instCategory___rarg___lambda__2___boxed), 9, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_instCategory___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_SheafOfModules_instCategory___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_id___at_SheafOfModules_instCategory___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instCategory___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_comp___at_SheafOfModules_instCategory___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
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
return x_15;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SheafOfModules_instCategory___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instCategory___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_SheafOfModules_instCategory___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_SheafOfModules_forget___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SheafOfModules_forget___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_SheafOfModules_forget___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SheafOfModules_forget___rarg___lambda__2___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_SheafOfModules_forget___rarg___closed__1;
x_5 = l_SheafOfModules_forget___rarg___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_forget___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SheafOfModules_forget___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SheafOfModules_forget___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_forget___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SheafOfModules_forget___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SheafOfModules_fullyFaithfulForget___elambda__1___boxed), 6, 4);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_1);
lean_closure_set(x_4, 2, x_2);
lean_closure_set(x_4, 3, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_fullyFaithfulForget___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SheafOfModules_fullyFaithfulForget___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_fullyFaithfulForget___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SheafOfModules_fullyFaithfulForget___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_3);
x_8 = lean_apply_1(x_7, x_3);
lean_inc(x_4);
x_9 = lean_apply_1(x_7, x_4);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_3(x_10, x_3, x_4, x_5);
x_12 = lean_apply_3(x_6, x_8, x_9, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_6);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__2), 5, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_SheafOfModules_forget___rarg(x_1, x_2, x_3);
lean_inc(x_4);
x_6 = l_PresheafOfModules_evaluation___rarg(x_1, x_3, x_4);
x_7 = l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg(x_1, x_2, x_3, x_4, x_3, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_evaluation___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_evaluation___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SheafOfModules_evaluation___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_SheafOfModules_forget___rarg(x_1, x_2, x_3);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_PresheafOfModules_toPresheaf___rarg(x_1, x_3);
x_9 = l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg(x_1, x_2, x_3, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_3(x_10, x_4, x_5, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_PresheafOfModules_presheaf___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_SheafOfModules_toSheaf___rarg___lambda__1___boxed), 6, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_toSheaf___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheaf___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheaf___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SheafOfModules_toSheaf___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_SheafOfModules_forget___rarg___closed__1;
x_4 = l_SheafOfModules_forget___rarg___closed__2;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_evaluation___spec__1___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_CategoryTheory_Category_opposite___rarg(x_1);
x_6 = l_AddCommGrp_instCategory;
x_7 = l_CategoryTheory_Functor_category___rarg(x_5, lean_box(0), x_6);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheafCompSheafToPresheafIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_SheafOfModules_toSheaf___rarg(x_1, x_2, x_3);
x_5 = l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg(x_1, x_2);
x_6 = l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg(x_1, x_2, x_3, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_toSheafCompSheafToPresheafIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_toSheafCompSheafToPresheafIso___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_sheafToPresheaf___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_NatTrans_id___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Iso_refl___at_SheafOfModules_toSheafCompSheafToPresheafIso___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_1);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__1___rarg), 4, 3);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
lean_inc(x_10);
x_12 = lean_apply_1(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_16, 0, x_15);
lean_inc(x_9);
x_17 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_inc(x_10);
x_18 = lean_apply_1(x_17, x_10);
x_19 = lean_apply_1(x_9, x_10);
x_20 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_18);
lean_closure_set(x_20, 2, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_inc(x_5);
x_10 = lean_apply_1(x_9, x_5);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_7, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_7, x_13);
x_15 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2___boxed), 10, 9);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_3);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_5);
lean_closure_set(x_15, 6, x_6);
lean_closure_set(x_15, 7, x_14);
lean_closure_set(x_15, 8, x_8);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__4), 2, 1);
lean_closure_set(x_16, 0, x_10);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
lean_inc(x_10);
x_12 = lean_apply_1(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_16, 0, x_15);
lean_inc(x_9);
x_17 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_inc(x_10);
x_18 = lean_apply_1(x_17, x_10);
x_19 = lean_apply_1(x_9, x_10);
x_20 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_18);
lean_closure_set(x_20, 2, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_inc(x_5);
x_10 = lean_apply_1(x_9, x_5);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_7, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_7, x_13);
x_15 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_3);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_5);
lean_closure_set(x_15, 6, x_6);
lean_closure_set(x_15, 7, x_14);
lean_closure_set(x_15, 8, x_8);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__4), 2, 1);
lean_closure_set(x_16, 0, x_10);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_apply_3(x_2, x_3, x_4, x_5);
x_11 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
static lean_object* _init_l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_1);
x_8 = l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1;
x_9 = lean_int_dec_lt(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
x_10 = lean_nat_abs(x_4);
x_11 = lean_apply_2(x_3, x_10, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_nat_abs(x_4);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_nat_add(x_14, x_13);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__2), 5, 4);
lean_closure_set(x_16, 0, x_7);
lean_closure_set(x_16, 1, x_3);
lean_closure_set(x_16, 2, x_15);
lean_closure_set(x_16, 3, x_5);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___boxed), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_apply_1(x_10, x_9);
x_12 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
x_13 = l_Equiv_symm___elambda__2___rarg(x_1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_6);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___boxed), 8, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_apply_1(x_11, x_9);
x_13 = l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg(x_5, x_6, x_10, x_8, x_12);
x_14 = l_Equiv_symm___elambda__2___rarg(x_7, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_6 = l_SheafOfModules_forget___rarg(x_1, x_2, x_3);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_SheafOfModules_fullyFaithfulForget___elambda__1___boxed), 6, 4);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_8 = l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___rarg(x_6, x_7, x_4, x_5);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_inc(x_9);
lean_inc(x_4);
x_10 = lean_apply_1(x_9, x_4);
lean_inc(x_5);
x_11 = lean_apply_1(x_9, x_5);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l_PresheafOfModules_instAddCommGroupHom___rarg(x_1, x_3, x_10, x_11);
x_13 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_12);
x_14 = lean_alloc_closure((void*)(l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__4), 2, 1);
lean_closure_set(x_14, 0, x_11);
lean_inc(x_8);
x_15 = l_Equiv_symm___elambda__2___rarg(x_8, x_14);
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
x_17 = l_AddMonoid_toAddZeroClass___rarg(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_8);
x_19 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_19, 0, x_8);
lean_closure_set(x_19, 1, x_18);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
lean_inc(x_8);
x_21 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_21, 0, x_8);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_ctor_get(x_12, 2);
lean_inc(x_22);
lean_dec(x_12);
lean_inc(x_8);
x_23 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_23, 0, x_8);
lean_closure_set(x_23, 1, x_22);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_8);
x_24 = lean_alloc_closure((void*)(l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1___boxed), 9, 7);
lean_closure_set(x_24, 0, x_8);
lean_closure_set(x_24, 1, x_1);
lean_closure_set(x_24, 2, x_2);
lean_closure_set(x_24, 3, x_3);
lean_closure_set(x_24, 4, x_4);
lean_closure_set(x_24, 5, x_5);
lean_closure_set(x_24, 6, x_6);
x_25 = lean_alloc_closure((void*)(l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2___boxed), 9, 7);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_3);
lean_closure_set(x_25, 3, x_4);
lean_closure_set(x_25, 4, x_5);
lean_closure_set(x_25, 5, x_6);
lean_closure_set(x_25, 6, x_8);
x_26 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_26, 0, x_24);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_15);
lean_ctor_set(x_27, 2, x_26);
x_28 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_28, 0, x_25);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_23);
lean_ctor_set(x_29, 3, x_28);
return x_29;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_instAddCommGroupHom___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_instAddCommGroupHom___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_nsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_id___at_SheafOfModules_instAddCommGroupHom___spec__10(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_SheafOfModules_instAddCommGroupHom___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_SheafOfModules_instAddCommGroupHom___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instPreadditive___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SheafOfModules_instAddCommGroupHom___rarg), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_instPreadditive(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_instPreadditive___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PresheafOfModules_sectionsMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SheafOfModules_sectionsMap___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SheafOfModules_sectionsMap(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsFunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_SheafOfModules_sectionsMap___boxed), 6, 4);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_1);
lean_closure_set(x_4, 2, x_2);
lean_closure_set(x_4, 3, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, lean_box(0));
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_sectionsFunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_sectionsFunctor___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_unit___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PresheafOfModules_unit___rarg(x_1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_unit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_unit___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_unit___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SheafOfModules_unit___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_1);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___elambda__1___rarg), 4, 3);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_unitHomEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_SheafOfModules_forget___rarg(x_1, x_2, x_3);
lean_inc(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_SheafOfModules_fullyFaithfulForget___elambda__1___boxed), 6, 4);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
lean_inc(x_3);
x_8 = l_PresheafOfModules_unit___rarg(x_1, x_3);
lean_inc(x_5);
x_9 = l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___rarg(x_6, x_7, x_8, x_5);
x_10 = l_PresheafOfModules_unitHomEquiv___rarg(x_1, x_3, x_5);
x_11 = l_Equiv_trans___rarg(x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SheafOfModules_unitHomEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SheafOfModules_unitHomEquiv___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_FullyFaithful_homEquiv___at_SheafOfModules_unitHomEquiv___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Presheaf(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_LocallyBijective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Whiskering(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Sheaf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Presheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_LocallyBijective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Whiskering(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1 = _init_l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_SheafOfModules_instCategory___spec__2___closed__1);
l_SheafOfModules_forget___rarg___closed__1 = _init_l_SheafOfModules_forget___rarg___closed__1();
lean_mark_persistent(l_SheafOfModules_forget___rarg___closed__1);
l_SheafOfModules_forget___rarg___closed__2 = _init_l_SheafOfModules_forget___rarg___closed__2();
lean_mark_persistent(l_SheafOfModules_forget___rarg___closed__2);
l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1 = _init_l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1();
lean_mark_persistent(l_zsmulRec___at_SheafOfModules_instAddCommGroupHom___spec__9___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
