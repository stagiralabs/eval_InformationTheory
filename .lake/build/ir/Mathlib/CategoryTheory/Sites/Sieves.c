// Lean compiler output
// Module: Mathlib.CategoryTheory.Sites.Sieves
// Imports: Init Mathlib.Data.Set.Lattice Mathlib.CategoryTheory.Limits.Shapes.Pullback.HasPullback
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
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward(lean_object*);
static lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe(lean_object*);
lean_object* l_Pi_instCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCompleteLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Over_mk___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion(lean_object*);
static lean_object* l_CategoryTheory_instCompleteLatticePresieve___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter(lean_object*);
static lean_object* l_CategoryTheory_instCompleteLatticePresieve___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion(lean_object*);
lean_object* l_CategoryTheory_Over_forgetCocone___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisCoinsertionOfMono___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisCoinsertionOfMono(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate(lean_object*);
lean_object* l_CategoryTheory_whiskerLeft___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Set_instCompleteAtomicBooleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_instCategoryOver___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Over_forget___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_instCompleteAtomicBooleanAlgebra(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_instCompleteLatticePresieve___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_instCompleteLatticePresieve___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_instCompleteLatticePresieve___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_instCompleteLatticePresieve___closed__1;
x_2 = l_Pi_instCompleteLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_instCompleteLatticePresieve___closed__2;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_instCompleteLatticePresieve___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCompleteLatticePresieve___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_instCompleteLatticePresieve(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Over_mk___rarg(x_1, x_2, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Presieve_categoryMk___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_categoryMk___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Presieve_categoryMk___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1;
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg(x_1, x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
static lean_object* _init_l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1___boxed), 1, 0);
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg(x_1, x_2, lean_box(0), x_4);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_CategoryTheory_Over_forget___rarg(x_1, x_2);
x_7 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg(x_1, x_2, lean_box(0), x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Presieve_diagram___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_diagram___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Presieve_diagram___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1;
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg(x_1, x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_CategoryTheory_instCategoryOver___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3___boxed), 4, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_4);
x_6 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___lambda__2), 5, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerLeft___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg(x_1, x_2);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_8);
x_12 = lean_apply_1(x_11, x_8);
x_13 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerLeft___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_13, 0, x_5);
lean_closure_set(x_13, 1, x_4);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_9);
lean_ctor_set(x_6, 1, x_13);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg(x_1, x_2);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_14);
x_18 = lean_apply_1(x_17, x_14);
x_19 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerLeft___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_19, 0, x_5);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_18);
lean_closure_set(x_19, 3, x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_CategoryTheory_Over_forget___rarg(x_1, x_2);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___lambda__1___boxed), 1, 0);
x_6 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg(x_1, x_2, lean_box(0), x_5);
lean_inc(x_2);
x_7 = l_CategoryTheory_Over_forgetCocone___rarg(x_1, x_2);
x_8 = l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg(x_1, x_2, lean_box(0), x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Presieve_cocone___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_cocone___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_cocone___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_cocone___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_whiskerLeft___at_CategoryTheory_Presieve_cocone___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Limits_Cocone_whisker___at_CategoryTheory_Presieve_cocone___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Presieve_cocone___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Presieve_cocone___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_instCoeFunPresieve___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCoeFunPresieve___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Sieve_instCoeFunPresieve___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_sup___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_sup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_inf___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_inf___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_union___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_union___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_union___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_inter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_inter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_inter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCompleteLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_union___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_inter___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_sup___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_inf___rarg___boxed), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
lean_ctor_set(x_11, 4, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_instCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_instCompleteLattice___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_sieveInhabited___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Sieve_sieveInhabited___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_generate___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_generate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_generate___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_bind___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_bind___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_bind___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_giGenerate___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_giGenerate___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_giGenerate___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_ofArrows___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofArrows___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Sieve_ofArrows___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_ofTwoArrows___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofTwoArrows___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Sieve_ofTwoArrows___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_ofObjects___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_ofObjects___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_ofObjects___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_pullback___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pullback___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Sieve_pullback___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_pushforward___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_pushforward___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Sieve_pushforward___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisCoinsertionOfMono___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_pullback___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisCoinsertionOfMono(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_galoisCoinsertionOfMono___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_galoisCoinsertionOfMono___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_pushforward___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_pullback___rarg___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_galoisInsertionOfIsSplitEpi___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorPullback___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPullback___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Sieve_functorPullback___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorPushforward___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_functorPushforward___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorPushforward___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_functorPushforward(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorPushforward___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorPullback___rarg___boxed), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_7);
x_10 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_GaloisConnection_toGaloisInsertion___at_CategoryTheory_Sieve_essSurjFullFunctorGaloisInsertion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1___rarg), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorPullback___rarg___boxed), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_7);
x_9 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_GaloisConnection_toGaloisCoinsertion___at_CategoryTheory_Sieve_fullyFaithfulFunctorGaloisCoinsertion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_5(x_7, x_4, x_3, x_2, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functor___rarg___lambda__1), 6, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, lean_box(0));
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functor___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Sieve_functor___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_natTransOfLe___elambda__1___boxed), 6, 5);
lean_closure_set(x_6, 0, lean_box(0));
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_3);
lean_closure_set(x_6, 4, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_natTransOfLe___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Sieve_natTransOfLe___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_natTransOfLe___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Sieve_natTransOfLe___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorInclusion___elambda__1___boxed), 5, 4);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_1);
lean_closure_set(x_4, 2, x_2);
lean_closure_set(x_4, 3, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_functorInclusion___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Sieve_functorInclusion___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_functorInclusion___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Sieve_functorInclusion___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sieve_sieveOfSubfunctor___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Sites_Sieves(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1 = _init_l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1();
lean_mark_persistent(l_CategoryTheory_instCompleteLatticePresieve___lambda__1___closed__1);
l_CategoryTheory_instCompleteLatticePresieve___closed__1 = _init_l_CategoryTheory_instCompleteLatticePresieve___closed__1();
lean_mark_persistent(l_CategoryTheory_instCompleteLatticePresieve___closed__1);
l_CategoryTheory_instCompleteLatticePresieve___closed__2 = _init_l_CategoryTheory_instCompleteLatticePresieve___closed__2();
lean_mark_persistent(l_CategoryTheory_instCompleteLatticePresieve___closed__2);
l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1 = _init_l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_inducedFunctor___at_CategoryTheory_Presieve_diagram___spec__2___rarg___closed__1);
l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1 = _init_l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_fullSubcategoryInclusion___at_CategoryTheory_Presieve_diagram___spec__1___rarg___closed__1);
l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___closed__1 = _init_l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_comp___at_CategoryTheory_Presieve_diagram___spec__3___rarg___closed__1);
l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1 = _init_l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_const___at_CategoryTheory_Presieve_cocone___spec__5___rarg___closed__1);
l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1 = _init_l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Sieve_instCompleteLattice___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
