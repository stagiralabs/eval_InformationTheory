// Lean compiler output
// Module: Mathlib.Algebra.Category.MonCat.Basic
// Imports: Init Mathlib.Algebra.Group.PUnit Mathlib.Algebra.Group.TypeTags.Hom Mathlib.Algebra.Group.ULift Mathlib.CategoryTheory.Elementwise Mathlib.CategoryTheory.Functor.ReflectsIso
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
LEAN_EXPORT lean_object* l_CommMonCat_hasForgetToMonCat___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_equivalence;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg___boxed(lean_object*);
static lean_object* l_CommMonCat_instCategory___closed__3;
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier;
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___rarg(lean_object*);
static lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3;
LEAN_EXPORT lean_object* l_AddMonCat_instCoeSortType;
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instConcreteCategoryMonoidHomCarrier;
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1;
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___rarg(lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__3;
LEAN_EXPORT lean_object* l_MonCat_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3(lean_object*);
lean_object* l_MonoidHom_toAdditive___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCategory;
static lean_object* l_AddCommMonCat_instCoeMonCat___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_uliftFunctor;
static lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2;
static lean_object* l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_uliftFunctor;
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_uliftFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object*);
static lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_uliftFunctor___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg___boxed(lean_object*);
static lean_object* l_MonCat_uliftFunctor___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddCommMonCat_equivalence___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToAddEquiv(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_equivalence___closed__1;
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_uliftFunctor;
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___boxed(lean_object*, lean_object*);
extern lean_object* l_PUnit_addCommGroup;
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_instCategory___closed__1;
LEAN_EXPORT lean_object* l_MonCat_ofHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_ofHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_uliftFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_uliftFunctor___closed__1;
static lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_instCategory___closed__2;
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___boxed(lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_id___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeMonCat___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5___closed__1;
LEAN_EXPORT lean_object* l_AddMonCat_instCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_ulift(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeMonCat___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instInhabited;
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier;
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4(lean_object*, lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__5;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object*);
lean_object* l_AddMonoidHom_toMultiplicative___elambda__2___rarg(lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3;
LEAN_EXPORT lean_object* l_CommMonCat_instCoeMonCat(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeMonCat;
LEAN_EXPORT lean_object* l_AddMonCat_equivalence;
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddMonCat_equivalence___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MonoidHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_of(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_ofHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1;
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instCategory;
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_addMonCatIsoToAddEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instOneHom___boxed(lean_object*);
static lean_object* l_MonCat_uliftFunctor___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_AddCommMonCat_hasForgetToAddMonCat;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_hasForgetToMonCat;
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5___closed__1;
lean_object* l_ULift_addCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___boxed(lean_object*);
lean_object* l_ULift_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instCategory___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_uliftFunctor;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instCategory;
static lean_object* l_CommMonCat_uliftFunctor___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToMulEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeSortType;
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_monCatIsoToMulEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instCategory___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___rarg(lean_object*);
static lean_object* l_AddCommMonCat_instCategory___closed__3;
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToAddEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___boxed(lean_object*);
static lean_object* l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1;
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2___closed__1;
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___boxed(lean_object*, lean_object*);
static lean_object* l_AddMonCat_uliftFunctor___closed__2;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___rarg(lean_object*, lean_object*);
static lean_object* l_CommMonCat_uliftFunctor___closed__3;
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instCoeSortType;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instInhabited;
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__1;
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_of(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg(lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__6;
static lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2;
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instCategory___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ULift_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_of(lean_object*);
static lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4;
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddCommMonCat_equivalence___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_uliftFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1(lean_object*);
static lean_object* l_CommMonCat_hasForgetToMonCat___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(lean_object*, lean_object*);
static lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddMonCat_equivalence___spec__3(lean_object*);
static lean_object* l_MonCat_uliftFunctor___closed__3;
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddMonCat_uliftFunctor___closed__1;
static lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instOneHom(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_hasForgetToMonCat___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_ULift_commMonoid___rarg(lean_object*);
static lean_object* l_AddCommMonCat_uliftFunctor___closed__3;
LEAN_EXPORT lean_object* l_MonCat_instInhabited;
static lean_object* l_AddMonCat_instCategory___closed__2;
extern lean_object* l_PUnit_commGroup;
static lean_object* l_AddMonCat_instCategory___closed__1;
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToMulEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_addMonCatIsoToAddEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_instCoeSortType;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg(lean_object*);
static lean_object* l_MonCat_instCategory___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_category___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCommMonCat_hasForgetToAddMonCat___closed__1;
LEAN_EXPORT lean_object* l_CommMonCat_of(lean_object*);
static lean_object* l_CommMonCat_instCategory___closed__2;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddMonCat_uliftFunctor___closed__3;
static lean_object* l_MonCat_uliftFunctor___closed__2;
static lean_object* l_CommMonCat_uliftFunctor___closed__2;
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_uliftFunctor___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_MonCat_instCategory___closed__3;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_ofHom(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddMonCat_instCategory___closed__3;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_uliftFunctor___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_uliftFunctor___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instInhabited;
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1___boxed(lean_object*);
static lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___rarg___boxed(lean_object*);
static lean_object* l_CommMonCat_instCategory___closed__1;
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_of___rarg(lean_object*);
static lean_object* l_CommMonCat_hasForgetToMonCat___closed__2;
static lean_object* l_AddCommMonCat_uliftFunctor___closed__2;
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_uliftFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__4;
static lean_object* l_MonCat_instCategory___closed__2;
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instCategory___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instCoeMonCat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_instCategory;
static lean_object* l_AddCommMonCat_equivalence___closed__2;
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_ofHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_Additive_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Multiplicative_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_ofHom___rarg(lean_object*);
static lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2___closed__1;
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_monCatIsoToMulEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddCommMonCat_equivalence___spec__4(lean_object*, lean_object*);
static lean_object* l_AddMonCat_equivalence___closed__2;
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___rarg(lean_object*, lean_object*);
static lean_object* _init_l_MonCat_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_AddMonCat_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MonCat_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonCat_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonCat_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_MonCat_instCategory___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonCat_instCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_MonCat_instCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonoidHom_id___at_MonCat_instCategory___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_instCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonCat_instCategory___lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_instCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_MonCat_instCategory___closed__1;
x_3 = l_MonCat_instCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MonCat_instCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_MonCat_instCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_MonCat_instCategory___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_MonCat_instCategory___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_MonCat_instCategory___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_instCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonoidHom_comp___at_MonCat_instCategory___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonCat_instCategory___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonCat_instCategory___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___rarg(x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_AddMonCat_instCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_instCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_instCategory___lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_instCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_AddMonCat_instCategory___closed__1;
x_3 = l_AddMonCat_instCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_AddMonCat_instCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_AddMonCat_instCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_AddMonCat_instCategory___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_comp___at_AddMonCat_instCategory___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instCategory___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonCat_instCategory___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonoidHom_instFunLike___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_MonCat_instConcreteCategoryMonoidHomCarrier() {
_start:
{
lean_object* x_1; 
x_1 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1;
return x_3;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2;
x_2 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier() {
_start:
{
lean_object* x_1; 
x_1 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonCat_Hom_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_Hom_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_Hom_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_Hom_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_Hom_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_Hom_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_Hom_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_ofHom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_ofHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonCat_ofHom___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonCat_ofHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_ofHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_ofHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonCat_ofHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_ofHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonCat_ofHom___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_ofHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_ofHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonCat_ofHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonCat_Hom_Simps_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_Hom_Simps_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_Hom_Simps_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_Hom_Simps_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_MonCat_instInhabited() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_commGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_AddMonCat_instInhabited() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_addCommGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_MonCat_instOneHom___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_instOneHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonCat_instOneHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_instOneHom___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_instOneHom___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_instOneHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_instOneHom(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_MonCat_instOneHom___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonCat_instZeroHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_instZeroHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_instZeroHom(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_MonCat_uliftFunctor___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonCat_uliftFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_MonCat_uliftFunctor___lambda__1___closed__1;
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_MonCat_uliftFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_monoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_uliftFunctor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonCat_uliftFunctor___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_MonCat_uliftFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MonCat_uliftFunctor___closed__1;
x_2 = l_MonCat_uliftFunctor___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MonCat_uliftFunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_MonCat_uliftFunctor___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_symm___at_MonCat_uliftFunctor___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MonCat_uliftFunctor___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_comp___at_MonCat_uliftFunctor___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_uliftFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonCat_uliftFunctor___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_uliftFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_MonCat_uliftFunctor___lambda__1___closed__1;
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___rarg(x_3, x_7);
x_9 = l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___rarg(x_6, x_8);
return x_9;
}
}
static lean_object* _init_l_AddMonCat_uliftFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_addMonoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_uliftFunctor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_uliftFunctor___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_uliftFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_uliftFunctor___closed__1;
x_2 = l_AddMonCat_uliftFunctor___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddMonCat_uliftFunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_AddMonCat_uliftFunctor___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_symm___at_AddMonCat_uliftFunctor___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddMonCat_uliftFunctor___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_comp___at_AddMonCat_uliftFunctor___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_uliftFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonCat_uliftFunctor___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_CommMonCat_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_AddCommMonCat_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_CommMonCat_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommMonCat_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommMonCat_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_instCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_CommMonCat_instCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_instCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CommMonCat_instCategory___lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_instCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_CommMonCat_instCategory___closed__1;
x_3 = l_CommMonCat_instCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_CommMonCat_instCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_CommMonCat_instCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_CommMonCat_instCategory___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_CommMonCat_instCategory___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MonoidHom_comp___at_CommMonCat_instCategory___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_instCategory___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CommMonCat_instCategory___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___rarg(x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_AddCommMonCat_instCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_instCategory___lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_AddCommMonCat_instCategory___closed__1;
x_3 = l_AddCommMonCat_instCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_AddCommMonCat_instCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommMonCat_instCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_id___at_AddCommMonCat_instCategory___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_comp___at_AddCommMonCat_instCategory___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instCategory___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddCommMonCat_instCategory___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_CommMonCat_instConcreteCategoryMonoidHomCarrier() {
_start:
{
lean_object* x_1; 
x_1 = l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1;
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2;
x_2 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommMonCat_Hom_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_Hom_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommMonCat_Hom_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommMonCat_Hom_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_Hom_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_Hom_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_ofHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CommMonCat_ofHom___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_ofHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_ofHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CommMonCat_ofHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCommMonCat_ofHom___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_ofHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_ofHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCommMonCat_ofHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommMonCat_Hom_Simps_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_Hom_Simps_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_Hom_Simps_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommMonCat_Hom_Simps_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommMonCat_Hom_Simps_hom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_Hom_Simps_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_Hom_Simps_hom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_Hom_Simps_hom(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_CommMonCat_instInhabited() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_commGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_AddCommMonCat_instInhabited() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_addCommGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_hasForgetToMonCat___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_hasForgetToMonCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CommMonCat_hasForgetToMonCat___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_hasForgetToMonCat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CommMonCat_hasForgetToMonCat___closed__1;
x_2 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CommMonCat_hasForgetToMonCat() {
_start:
{
lean_object* x_1; 
x_1 = l_CommMonCat_hasForgetToMonCat___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_hasForgetToMonCat___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_hasForgetToMonCat___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_AddCommMonCat_hasForgetToAddMonCat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CommMonCat_hasForgetToMonCat___closed__1;
x_2 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_hasForgetToAddMonCat() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommMonCat_hasForgetToAddMonCat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_instCoeMonCat(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_instCoeMonCat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonCat_instCoeMonCat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeMonCat___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instCoeMonCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_instCoeMonCat___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_instCoeMonCat() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommMonCat_instCoeMonCat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_instCoeMonCat___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonCat_instCoeMonCat___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_uliftFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_MonCat_uliftFunctor___lambda__1___closed__1;
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_CommMonCat_uliftFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_commMonoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_uliftFunctor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CommMonCat_uliftFunctor___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_CommMonCat_uliftFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CommMonCat_uliftFunctor___closed__1;
x_2 = l_CommMonCat_uliftFunctor___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CommMonCat_uliftFunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_CommMonCat_uliftFunctor___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_symm___at_CommMonCat_uliftFunctor___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_CommMonCat_uliftFunctor___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_comp___at_CommMonCat_uliftFunctor___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_uliftFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CommMonCat_uliftFunctor___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_uliftFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_MonCat_uliftFunctor___lambda__1___closed__1;
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___rarg(x_3, x_7);
x_9 = l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___rarg(x_6, x_8);
return x_9;
}
}
static lean_object* _init_l_AddCommMonCat_uliftFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_addCommMonoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_uliftFunctor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommMonCat_uliftFunctor___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommMonCat_uliftFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddCommMonCat_uliftFunctor___closed__1;
x_2 = l_AddCommMonCat_uliftFunctor___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_uliftFunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommMonCat_uliftFunctor___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_symm___at_AddCommMonCat_uliftFunctor___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddCommMonCat_uliftFunctor___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_comp___at_AddCommMonCat_uliftFunctor___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_uliftFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommMonCat_uliftFunctor___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_toMonCatIso___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_toMonCatIso___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonCatIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulEquiv_toMonCatIso___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonCatIso___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddMonCatIso___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonCatIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_toAddMonCatIso___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_toCommMonCatIso___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_toCommMonCatIso___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toCommMonCatIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulEquiv_toCommMonCatIso___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_toAddCommMonCatIso___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_toAddMonoidHom___at_AddEquiv_toAddCommMonCatIso___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toAddCommMonCatIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_toAddCommMonCatIso___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_monCatIsoToMulEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_monCatIsoToMulEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_monCatIsoToMulEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_monCatIsoToMulEquiv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_addMonCatIsoToAddEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___rarg(x_4, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_addMonCatIsoToAddEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_addMonCatIsoToAddEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_addMonCatIsoToAddEquiv(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToMulEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_toMulEquiv___at_CategoryTheory_Iso_commMonCatIsoToMulEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToMulEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_commMonCatIsoToMulEquiv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToAddEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___rarg(x_4, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidHom_toAddEquiv___at_CategoryTheory_Iso_commMonCatIsoToAddEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_commMonCatIsoToAddEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_commMonCatIsoToAddEquiv(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_monCatIsoToMulEquiv(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoMonCatIso___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulEquiv_toMonCatIso___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoMonCatIso___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoMonCatIso___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_mulEquivIsoMonCatIso___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoMonCatIso___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_mulEquivIsoMonCatIso___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoMonCatIso___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_mulEquivIsoMonCatIso___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_addMonCatIsoToAddEquiv(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddMonCatIso___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_toAddMonCatIso___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddMonCatIso___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddMonCatIso___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_addEquivIsoAddMonCatIso___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddMonCatIso___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_addEquivIsoAddMonCatIso___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddMonCatIso___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_addEquivIsoAddMonCatIso___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_commMonCatIsoToMulEquiv(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoCommMonCatIso___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulEquiv_toCommMonCatIso___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoCommMonCatIso___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoCommMonCatIso___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_mulEquivIsoCommMonCatIso___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_mulEquivIsoCommMonCatIso___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_mulEquivIsoCommMonCatIso___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulEquivIsoCommMonCatIso___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_mulEquivIsoCommMonCatIso___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_commMonCatIsoToAddEquiv(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddCommMonCatIso___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_toAddCommMonCatIso___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddCommMonCatIso___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddCommMonCatIso___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_addEquivIsoAddCommMonCatIso___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addEquivIsoAddCommMonCatIso___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_addEquivIsoAddCommMonCatIso___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addEquivIsoAddCommMonCatIso___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_addEquivIsoAddCommMonCatIso___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CommMonCat_hasForgetToMonCat___closed__1;
x_2 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddMonCat_equivalence___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_AddMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AddMonCat_instCategory;
x_2 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_AddMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__2), 5, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddMonCat_equivalence___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MonCat_instCategory;
x_2 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_MonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_toMultiplicative___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHom_toAdditive___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiplicative_monoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_equivalence___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_equivalence___closed__1;
x_2 = l_AddMonCat_equivalence___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Additive_addMonoid___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddMonCat_equivalence___lambda__2___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_AddMonCat_equivalence___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_equivalence___closed__4;
x_2 = l_AddMonCat_equivalence___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddMonCat_equivalence() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1;
x_2 = l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2(x_1);
x_3 = l_AddMonCat_equivalence___closed__6;
x_4 = l_AddMonCat_equivalence___closed__3;
x_5 = l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4(x_3, x_4);
x_6 = l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5(x_5);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonCat_equivalence___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_equivalence___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonCat_equivalence___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CommMonCat_hasForgetToMonCat___closed__1;
x_2 = l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddCommMonCat_equivalence___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_AddCommMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AddCommMonCat_instCategory;
x_2 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_AddCommMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_AddCommMonCat_equivalence___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_AddMonCat_equivalence___spec__4___lambda__2), 5, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatTrans_id___at_AddCommMonCat_equivalence___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CommMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CommMonCat_instCategory;
x_2 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CommMonCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_AddCommMonCat_equivalence___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_equivalence___closed__1;
x_2 = l_AddMonCat_equivalence___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_equivalence___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AddMonCat_equivalence___closed__4;
x_2 = l_AddMonCat_equivalence___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AddCommMonCat_equivalence() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1;
x_2 = l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2(x_1);
x_3 = l_AddCommMonCat_equivalence___closed__2;
x_4 = l_AddCommMonCat_equivalence___closed__1;
x_5 = l_CategoryTheory_Functor_comp___at_AddCommMonCat_equivalence___spec__4(x_3, x_4);
x_6 = l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5(x_5);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 3, x_6);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_PUnit(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_TypeTags_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Elementwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_ReflectsIso(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_MonCat_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_PUnit(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_TypeTags_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Elementwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_ReflectsIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MonCat_instCoeSortType = _init_l_MonCat_instCoeSortType();
l_AddMonCat_instCoeSortType = _init_l_AddMonCat_instCoeSortType();
l_MonCat_instCategory___closed__1 = _init_l_MonCat_instCategory___closed__1();
lean_mark_persistent(l_MonCat_instCategory___closed__1);
l_MonCat_instCategory___closed__2 = _init_l_MonCat_instCategory___closed__2();
lean_mark_persistent(l_MonCat_instCategory___closed__2);
l_MonCat_instCategory___closed__3 = _init_l_MonCat_instCategory___closed__3();
lean_mark_persistent(l_MonCat_instCategory___closed__3);
l_MonCat_instCategory = _init_l_MonCat_instCategory();
lean_mark_persistent(l_MonCat_instCategory);
l_AddMonCat_instCategory___closed__1 = _init_l_AddMonCat_instCategory___closed__1();
lean_mark_persistent(l_AddMonCat_instCategory___closed__1);
l_AddMonCat_instCategory___closed__2 = _init_l_AddMonCat_instCategory___closed__2();
lean_mark_persistent(l_AddMonCat_instCategory___closed__2);
l_AddMonCat_instCategory___closed__3 = _init_l_AddMonCat_instCategory___closed__3();
lean_mark_persistent(l_AddMonCat_instCategory___closed__3);
l_AddMonCat_instCategory = _init_l_AddMonCat_instCategory();
lean_mark_persistent(l_AddMonCat_instCategory);
l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1 = _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1();
lean_mark_persistent(l_MonCat_instConcreteCategoryMonoidHomCarrier___lambda__1___closed__1);
l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__1 = _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__1();
lean_mark_persistent(l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__1);
l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2 = _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2();
lean_mark_persistent(l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__2);
l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3 = _init_l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3();
lean_mark_persistent(l_MonCat_instConcreteCategoryMonoidHomCarrier___closed__3);
l_MonCat_instConcreteCategoryMonoidHomCarrier = _init_l_MonCat_instConcreteCategoryMonoidHomCarrier();
lean_mark_persistent(l_MonCat_instConcreteCategoryMonoidHomCarrier);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1 = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___elambda__3___closed__1);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1 = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2 = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3 = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4 = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4);
l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier = _init_l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier();
lean_mark_persistent(l_AddMonCat_instConcreteCategoryAddMonoidHomCarrier);
l_MonCat_instInhabited = _init_l_MonCat_instInhabited();
lean_mark_persistent(l_MonCat_instInhabited);
l_AddMonCat_instInhabited = _init_l_AddMonCat_instInhabited();
lean_mark_persistent(l_AddMonCat_instInhabited);
l_MonCat_uliftFunctor___lambda__1___closed__1 = _init_l_MonCat_uliftFunctor___lambda__1___closed__1();
lean_mark_persistent(l_MonCat_uliftFunctor___lambda__1___closed__1);
l_MonCat_uliftFunctor___closed__1 = _init_l_MonCat_uliftFunctor___closed__1();
lean_mark_persistent(l_MonCat_uliftFunctor___closed__1);
l_MonCat_uliftFunctor___closed__2 = _init_l_MonCat_uliftFunctor___closed__2();
lean_mark_persistent(l_MonCat_uliftFunctor___closed__2);
l_MonCat_uliftFunctor___closed__3 = _init_l_MonCat_uliftFunctor___closed__3();
lean_mark_persistent(l_MonCat_uliftFunctor___closed__3);
l_MonCat_uliftFunctor = _init_l_MonCat_uliftFunctor();
lean_mark_persistent(l_MonCat_uliftFunctor);
l_AddMonCat_uliftFunctor___closed__1 = _init_l_AddMonCat_uliftFunctor___closed__1();
lean_mark_persistent(l_AddMonCat_uliftFunctor___closed__1);
l_AddMonCat_uliftFunctor___closed__2 = _init_l_AddMonCat_uliftFunctor___closed__2();
lean_mark_persistent(l_AddMonCat_uliftFunctor___closed__2);
l_AddMonCat_uliftFunctor___closed__3 = _init_l_AddMonCat_uliftFunctor___closed__3();
lean_mark_persistent(l_AddMonCat_uliftFunctor___closed__3);
l_AddMonCat_uliftFunctor = _init_l_AddMonCat_uliftFunctor();
lean_mark_persistent(l_AddMonCat_uliftFunctor);
l_CommMonCat_instCoeSortType = _init_l_CommMonCat_instCoeSortType();
l_AddCommMonCat_instCoeSortType = _init_l_AddCommMonCat_instCoeSortType();
l_CommMonCat_instCategory___closed__1 = _init_l_CommMonCat_instCategory___closed__1();
lean_mark_persistent(l_CommMonCat_instCategory___closed__1);
l_CommMonCat_instCategory___closed__2 = _init_l_CommMonCat_instCategory___closed__2();
lean_mark_persistent(l_CommMonCat_instCategory___closed__2);
l_CommMonCat_instCategory___closed__3 = _init_l_CommMonCat_instCategory___closed__3();
lean_mark_persistent(l_CommMonCat_instCategory___closed__3);
l_CommMonCat_instCategory = _init_l_CommMonCat_instCategory();
lean_mark_persistent(l_CommMonCat_instCategory);
l_AddCommMonCat_instCategory___closed__1 = _init_l_AddCommMonCat_instCategory___closed__1();
lean_mark_persistent(l_AddCommMonCat_instCategory___closed__1);
l_AddCommMonCat_instCategory___closed__2 = _init_l_AddCommMonCat_instCategory___closed__2();
lean_mark_persistent(l_AddCommMonCat_instCategory___closed__2);
l_AddCommMonCat_instCategory___closed__3 = _init_l_AddCommMonCat_instCategory___closed__3();
lean_mark_persistent(l_AddCommMonCat_instCategory___closed__3);
l_AddCommMonCat_instCategory = _init_l_AddCommMonCat_instCategory();
lean_mark_persistent(l_AddCommMonCat_instCategory);
l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1 = _init_l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1();
lean_mark_persistent(l_CommMonCat_instConcreteCategoryMonoidHomCarrier___closed__1);
l_CommMonCat_instConcreteCategoryMonoidHomCarrier = _init_l_CommMonCat_instConcreteCategoryMonoidHomCarrier();
lean_mark_persistent(l_CommMonCat_instConcreteCategoryMonoidHomCarrier);
l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1 = _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1();
lean_mark_persistent(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__1);
l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2 = _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2();
lean_mark_persistent(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__2);
l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3 = _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3();
lean_mark_persistent(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__3);
l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4 = _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4();
lean_mark_persistent(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier___closed__4);
l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier = _init_l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier();
lean_mark_persistent(l_AddCommMonCat_instConcreteCategoryAddMonoidHomCarrier);
l_CommMonCat_instInhabited = _init_l_CommMonCat_instInhabited();
lean_mark_persistent(l_CommMonCat_instInhabited);
l_AddCommMonCat_instInhabited = _init_l_AddCommMonCat_instInhabited();
lean_mark_persistent(l_AddCommMonCat_instInhabited);
l_CommMonCat_hasForgetToMonCat___closed__1 = _init_l_CommMonCat_hasForgetToMonCat___closed__1();
lean_mark_persistent(l_CommMonCat_hasForgetToMonCat___closed__1);
l_CommMonCat_hasForgetToMonCat___closed__2 = _init_l_CommMonCat_hasForgetToMonCat___closed__2();
lean_mark_persistent(l_CommMonCat_hasForgetToMonCat___closed__2);
l_CommMonCat_hasForgetToMonCat = _init_l_CommMonCat_hasForgetToMonCat();
lean_mark_persistent(l_CommMonCat_hasForgetToMonCat);
l_AddCommMonCat_hasForgetToAddMonCat___closed__1 = _init_l_AddCommMonCat_hasForgetToAddMonCat___closed__1();
lean_mark_persistent(l_AddCommMonCat_hasForgetToAddMonCat___closed__1);
l_AddCommMonCat_hasForgetToAddMonCat = _init_l_AddCommMonCat_hasForgetToAddMonCat();
lean_mark_persistent(l_AddCommMonCat_hasForgetToAddMonCat);
l_AddCommMonCat_instCoeMonCat___closed__1 = _init_l_AddCommMonCat_instCoeMonCat___closed__1();
lean_mark_persistent(l_AddCommMonCat_instCoeMonCat___closed__1);
l_AddCommMonCat_instCoeMonCat = _init_l_AddCommMonCat_instCoeMonCat();
lean_mark_persistent(l_AddCommMonCat_instCoeMonCat);
l_CommMonCat_uliftFunctor___closed__1 = _init_l_CommMonCat_uliftFunctor___closed__1();
lean_mark_persistent(l_CommMonCat_uliftFunctor___closed__1);
l_CommMonCat_uliftFunctor___closed__2 = _init_l_CommMonCat_uliftFunctor___closed__2();
lean_mark_persistent(l_CommMonCat_uliftFunctor___closed__2);
l_CommMonCat_uliftFunctor___closed__3 = _init_l_CommMonCat_uliftFunctor___closed__3();
lean_mark_persistent(l_CommMonCat_uliftFunctor___closed__3);
l_CommMonCat_uliftFunctor = _init_l_CommMonCat_uliftFunctor();
lean_mark_persistent(l_CommMonCat_uliftFunctor);
l_AddCommMonCat_uliftFunctor___closed__1 = _init_l_AddCommMonCat_uliftFunctor___closed__1();
lean_mark_persistent(l_AddCommMonCat_uliftFunctor___closed__1);
l_AddCommMonCat_uliftFunctor___closed__2 = _init_l_AddCommMonCat_uliftFunctor___closed__2();
lean_mark_persistent(l_AddCommMonCat_uliftFunctor___closed__2);
l_AddCommMonCat_uliftFunctor___closed__3 = _init_l_AddCommMonCat_uliftFunctor___closed__3();
lean_mark_persistent(l_AddCommMonCat_uliftFunctor___closed__3);
l_AddCommMonCat_uliftFunctor = _init_l_AddCommMonCat_uliftFunctor();
lean_mark_persistent(l_AddCommMonCat_uliftFunctor);
l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1 = _init_l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1___closed__1);
l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1 = _init_l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1();
lean_mark_persistent(l_CategoryTheory_Functor_id___at_AddMonCat_equivalence___spec__1);
l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2___closed__1 = _init_l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2___closed__1();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__2___closed__1);
l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5___closed__1 = _init_l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5___closed__1();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AddMonCat_equivalence___spec__5___closed__1);
l_AddMonCat_equivalence___closed__1 = _init_l_AddMonCat_equivalence___closed__1();
lean_mark_persistent(l_AddMonCat_equivalence___closed__1);
l_AddMonCat_equivalence___closed__2 = _init_l_AddMonCat_equivalence___closed__2();
lean_mark_persistent(l_AddMonCat_equivalence___closed__2);
l_AddMonCat_equivalence___closed__3 = _init_l_AddMonCat_equivalence___closed__3();
lean_mark_persistent(l_AddMonCat_equivalence___closed__3);
l_AddMonCat_equivalence___closed__4 = _init_l_AddMonCat_equivalence___closed__4();
lean_mark_persistent(l_AddMonCat_equivalence___closed__4);
l_AddMonCat_equivalence___closed__5 = _init_l_AddMonCat_equivalence___closed__5();
lean_mark_persistent(l_AddMonCat_equivalence___closed__5);
l_AddMonCat_equivalence___closed__6 = _init_l_AddMonCat_equivalence___closed__6();
lean_mark_persistent(l_AddMonCat_equivalence___closed__6);
l_AddMonCat_equivalence = _init_l_AddMonCat_equivalence();
lean_mark_persistent(l_AddMonCat_equivalence);
l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1 = _init_l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1___closed__1);
l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1 = _init_l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1();
lean_mark_persistent(l_CategoryTheory_Functor_id___at_AddCommMonCat_equivalence___spec__1);
l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2___closed__1 = _init_l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2___closed__1();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__2___closed__1);
l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5___closed__1 = _init_l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5___closed__1();
lean_mark_persistent(l_CategoryTheory_Iso_refl___at_AddCommMonCat_equivalence___spec__5___closed__1);
l_AddCommMonCat_equivalence___closed__1 = _init_l_AddCommMonCat_equivalence___closed__1();
lean_mark_persistent(l_AddCommMonCat_equivalence___closed__1);
l_AddCommMonCat_equivalence___closed__2 = _init_l_AddCommMonCat_equivalence___closed__2();
lean_mark_persistent(l_AddCommMonCat_equivalence___closed__2);
l_AddCommMonCat_equivalence = _init_l_AddCommMonCat_equivalence();
lean_mark_persistent(l_AddCommMonCat_equivalence);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
