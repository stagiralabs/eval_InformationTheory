// Lean compiler output
// Module: Mathlib.Topology.FiberBundle.Trivialization
// Imports: Init Mathlib.Data.Bundle Mathlib.Data.Set.Image Mathlib.Topology.CompactOpen Mathlib.Topology.PartialHomeomorph Mathlib.Topology.Order.Basic
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
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_coordChange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_instCoePretrivialization(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1;
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_ofUnique___elambda__1___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Pretrivialization_instCoeFunForallProd___closed__1;
LEAN_EXPORT lean_object* l_Trivialization_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousMap_curry___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_trans_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PUnit_instUnique;
LEAN_EXPORT lean_object* l_Trivialization_coordChangeHomeomorph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1;
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_Trivialization_instCoeFunForallProd___closed__1;
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_restrOpen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_prodCongr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Trivialization_preimageHomeomorph___rarg___closed__1;
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Trivialization_clift___rarg___closed__1;
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_coordChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_instCoePretrivialization___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg___lambda__1(lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeProdEquivProd(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Trivialization_instCoePretrivialization___closed__1;
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_instCoeFunForallProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Trivialization_preimageHomeomorph___rarg___closed__2;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Homeomorph_punitProd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_instCoeFunForallProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_clift(lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_ofUnique___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_instCoeFunForallProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_restrOpen___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_transEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_instCoeFunForallProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
lean_object* l_Equiv_toPartialEquivOfImageEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Set_MapsTo_restrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_liftCM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_coordChange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_restrOpen___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Set_univ(lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Trivialization_coordChangeHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_IsImage_restr___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Pretrivialization_toFun_x27___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_toFun_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pretrivialization_toFun_x27(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
static lean_object* _init_l_Pretrivialization_instCoeFunForallProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Pretrivialization_toFun_x27___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_instCoeFunForallProd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pretrivialization_instCoeFunForallProd___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_instCoeFunForallProd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pretrivialization_instCoeFunForallProd(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PartialEquiv_symm___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Pretrivialization_setSymm___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pretrivialization_setSymm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pretrivialization_setSymm(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Trivialization_toFun_x27___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toFun_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_toFun_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Trivialization_toPretrivialization___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Trivialization_toPretrivialization___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Trivialization_toPretrivialization___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_toPretrivialization(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
static lean_object* _init_l_Trivialization_instCoeFunForallProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Trivialization_toFun_x27___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_instCoeFunForallProd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_instCoeFunForallProd___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_instCoeFunForallProd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_instCoeFunForallProd(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
static lean_object* _init_l_Trivialization_instCoePretrivialization___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Trivialization_toPretrivialization___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_instCoePretrivialization(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_instCoePretrivialization___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_instCoePretrivialization___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_instCoePretrivialization(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PartialEquiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___rarg), 2, 1);
lean_closure_set(x_9, 0, x_4);
x_10 = lean_alloc_closure((void*)(l_Set_MapsTo_restrict___rarg), 5, 4);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, lean_box(0));
x_11 = l_PartialEquiv_symm___rarg(x_4);
x_12 = lean_alloc_closure((void*)(l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_Set_MapsTo_restrict___rarg), 5, 4);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, lean_box(0));
lean_closure_set(x_13, 2, lean_box(0));
lean_closure_set(x_13, 3, lean_box(0));
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg___boxed), 8, 0);
return x_4;
}
}
static lean_object* _init_l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_prodCongr___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8___rarg), 2, 0);
return x_9;
}
}
static lean_object* _init_l_Trivialization_preimageHomeomorph___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeProdEquivProd(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Trivialization_preimageHomeomorph___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_Set_univ(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg(x_1, x_2, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_9 = l_Equiv_refl(lean_box(0));
x_10 = l_Trivialization_preimageHomeomorph___rarg___closed__2;
x_11 = l_Equiv_prodCongr___rarg(x_9, x_10);
x_12 = l_Trivialization_preimageHomeomorph___rarg___closed__1;
x_13 = l_Equiv_trans___rarg(x_12, x_11);
x_14 = l_Equiv_trans___rarg(x_8, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_preimageHomeomorph___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_symm___at_Trivialization_preimageHomeomorph___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_toFun_x27___at_Trivialization_preimageHomeomorph___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_PartialHomeomorph_homeomorphOfImageSubsetSource___at_Trivialization_preimageHomeomorph___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Homeomorph_prodCongr___at_Trivialization_preimageHomeomorph___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homeomorph_trans___at_Trivialization_preimageHomeomorph___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_preimageHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Trivialization_preimageHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0));
x_9 = l_Equiv_symm___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homeomorph_symm___at_Trivialization_preimageHomeomorph__symm__apply_aux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_preimageHomeomorph__symm__apply_aux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1___rarg), 2, 0);
return x_9;
}
}
static lean_object* _init_l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Trivialization_preimageHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0));
x_7 = l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1;
x_8 = l_Equiv_trans___rarg(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_sourceHomeomorphBaseSetProd___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homeomorph_trans___at_Trivialization_sourceHomeomorphBaseSetProd___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Trivialization_sourceHomeomorphBaseSetProd___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Trivialization_sourceHomeomorphBaseSetProd___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = l_Equiv_symm___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homeomorph_symm___at_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Trivialization_sourceHomeomorphBaseSetProd__symm__apply_aux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_instUnique;
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_prodCongr___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = l_Trivialization_preimageHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0));
x_9 = l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg(x_6);
x_10 = l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1;
x_11 = l_Equiv_prodCongr___rarg(x_9, x_10);
x_12 = l_Homeomorph_punitProd___rarg(x_2);
x_13 = l_Equiv_trans___rarg(x_11, x_12);
x_14 = l_Equiv_trans___rarg(x_8, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_preimageSingletonHomeomorph___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Homeomorph_homeomorphOfUnique___at_Trivialization_preimageSingletonHomeomorph___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Homeomorph_prodCongr___at_Trivialization_preimageSingletonHomeomorph___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homeomorph_trans___at_Trivialization_preimageSingletonHomeomorph___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_preimageSingletonHomeomorph___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_preimageSingletonHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Trivialization_compHomeomorph___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PartialEquiv_IsImage_restr___rarg(x_1, lean_box(0), lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PartialEquiv_trans_x27___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3___rarg), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_PartialEquiv_symm___rarg(x_6);
x_9 = l_PartialEquiv_IsImage_restr___rarg(x_8, lean_box(0), lean_box(0), lean_box(0));
x_10 = l_PartialEquiv_symm___rarg(x_9);
x_11 = l_PartialEquiv_IsImage_restr___rarg(x_7, lean_box(0), lean_box(0), lean_box(0));
x_12 = l_PartialEquiv_trans_x27___rarg(x_10, x_11, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Equiv_toPartialEquivOfImageEq___rarg(x_8, lean_box(0), lean_box(0), lean_box(0));
x_10 = l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg(x_1, x_2, x_4, lean_box(0), x_7, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_compHomeomorph___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_IsImage_restr___at_Trivialization_compHomeomorph___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_PartialHomeomorph_trans_x27___at_Trivialization_compHomeomorph___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_PartialHomeomorph_trans___at_Trivialization_compHomeomorph___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_compHomeomorph___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Trivialization_compHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PartialEquiv_transEquiv___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1;
x_10 = l_Equiv_prodCongr___rarg(x_9, x_8);
x_11 = l_PartialEquiv_transEquiv___rarg(x_7, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_transFiberHomeomorph___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_PartialHomeomorph_transHomeomorph___at_Trivialization_transFiberHomeomorph___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_transFiberHomeomorph___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Trivialization_transFiberHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PartialEquiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_coordChange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_PartialEquiv_symm___rarg(x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___rarg(x_9, x_10);
x_12 = l_Trivialization_toFun_x27___rarg(x_6, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Trivialization_coordChange(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_coordChange___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_symm___at_Trivialization_coordChange___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_toFun_x27___at_Trivialization_coordChange___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_coordChange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Trivialization_coordChange___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Trivialization_coordChangeHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Trivialization_coordChange___rarg___boxed), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
x_11 = lean_alloc_closure((void*)(l_Trivialization_coordChange___rarg___boxed), 8, 7);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_6);
lean_closure_set(x_11, 5, x_5);
lean_closure_set(x_11, 6, x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Trivialization_coordChangeHomeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_coordChangeHomeomorph___rarg), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PartialEquiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PartialEquiv_IsImage_restr___rarg(x_1, lean_box(0), lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PartialEquiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_restrOpen___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_PartialEquiv_symm___rarg(x_5);
x_9 = l_PartialEquiv_IsImage_restr___rarg(x_8, lean_box(0), lean_box(0), lean_box(0));
x_10 = l_PartialEquiv_symm___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Trivialization_restrOpen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_restrOpen___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_IsImage_restr___at_Trivialization_restrOpen___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PartialHomeomorph_symm___at_Trivialization_restrOpen___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Trivialization_restrOpen___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_restrOpen___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Trivialization_toFun_x27___rarg(x_1, x_2);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
x_8 = lean_apply_1(x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Trivialization_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Trivialization_lift___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_lift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_lift(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Trivialization_lift___rarg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Trivialization_liftCM___elambda__1___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Trivialization_liftCM___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_liftCM___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Trivialization_liftCM___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Trivialization_liftCM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Trivialization_liftCM___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_ContinuousMap_comp___at_Trivialization_clift___spec__1___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_curry___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_ContinuousMap_curry___at_Trivialization_clift___spec__2___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_4, x_5);
lean_ctor_set(x_2, 1, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_8, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
static lean_object* _init_l_Trivialization_clift___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Trivialization_clift___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_alloc_closure((void*)(l_Trivialization_liftCM___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = l_Trivialization_clift___rarg___closed__1;
x_11 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_ContinuousMap_curry___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Trivialization_clift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Trivialization_clift___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_comp___at_Trivialization_clift___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_ContinuousMap_comp___at_Trivialization_clift___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_curry___at_Trivialization_clift___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_ContinuousMap_curry___at_Trivialization_clift___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Trivialization_clift___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Trivialization_clift___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Bundle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Image(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_CompactOpen(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_PartialHomeomorph(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_FiberBundle_Trivialization(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Bundle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Image(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_CompactOpen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_PartialHomeomorph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Pretrivialization_instCoeFunForallProd___closed__1 = _init_l_Pretrivialization_instCoeFunForallProd___closed__1();
lean_mark_persistent(l_Pretrivialization_instCoeFunForallProd___closed__1);
l_Trivialization_instCoeFunForallProd___closed__1 = _init_l_Trivialization_instCoeFunForallProd___closed__1();
lean_mark_persistent(l_Trivialization_instCoeFunForallProd___closed__1);
l_Trivialization_instCoePretrivialization___closed__1 = _init_l_Trivialization_instCoePretrivialization___closed__1();
lean_mark_persistent(l_Trivialization_instCoePretrivialization___closed__1);
l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1 = _init_l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1();
lean_mark_persistent(l_Homeomorph_refl___at_Trivialization_preimageHomeomorph___spec__5___closed__1);
l_Trivialization_preimageHomeomorph___rarg___closed__1 = _init_l_Trivialization_preimageHomeomorph___rarg___closed__1();
lean_mark_persistent(l_Trivialization_preimageHomeomorph___rarg___closed__1);
l_Trivialization_preimageHomeomorph___rarg___closed__2 = _init_l_Trivialization_preimageHomeomorph___rarg___closed__2();
lean_mark_persistent(l_Trivialization_preimageHomeomorph___rarg___closed__2);
l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1 = _init_l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1();
lean_mark_persistent(l_Trivialization_sourceHomeomorphBaseSetProd___rarg___closed__1);
l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1 = _init_l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1();
lean_mark_persistent(l_Equiv_ofUnique___at_Trivialization_preimageSingletonHomeomorph___spec__2___rarg___closed__1);
l_Trivialization_clift___rarg___closed__1 = _init_l_Trivialization_clift___rarg___closed__1();
lean_mark_persistent(l_Trivialization_clift___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
