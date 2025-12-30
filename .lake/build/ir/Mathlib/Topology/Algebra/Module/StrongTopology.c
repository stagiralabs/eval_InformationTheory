// Lean compiler output
// Module: Mathlib.Topology.Algebra.Module.StrongTopology
// Imports: Init Mathlib.Topology.Algebra.Module.Equiv Mathlib.Topology.Algebra.Module.UniformConvergence Mathlib.Topology.Algebra.SeparationQuotient.Section Mathlib.Topology.Hom.ContinuousEvalConst
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
static lean_object* l_UniformConvergenceCLM_instUniformSpace___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_topologicalSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_topologicalSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instUniformSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instUniformSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instTopologicalSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearEquiv_arrowCongr___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg___boxed(lean_object**);
lean_object* l_ContinuousLinearMap_addCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___boxed(lean_object**);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg(lean_object*);
lean_object* l_ContinuousLinearMap_funLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___rarg(lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___boxed(lean_object**);
lean_object* l_ContinuousLinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_UniformConvergenceCLM_instFunLike___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearEquiv_arrowCongr___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instTopologicalSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedField_toNormedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousLinearMap_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_UniformConvergenceCLM_instFunLike___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContinuousLinearMap_funLike___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_UniformConvergenceCLM_instFunLike___closed__1;
return x_15;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_UniformConvergenceCLM_instFunLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instTopologicalSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_box(0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_UniformConvergenceCLM_instTopologicalSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
static lean_object* _init_l_UniformConvergenceCLM_instUniformSpace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instUniformSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_UniformConvergenceCLM_instUniformSpace___closed__1;
return x_16;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instUniformSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_UniformConvergenceCLM_instUniformSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_ContinuousLinearMap_addCommGroup___rarg(x_7, x_5, x_8, x_1, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_UniformConvergenceCLM_instAddCommGroup___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_UniformConvergenceCLM_instAddCommGroup___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_UniformConvergenceCLM_instAddCommGroup(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_instSMul___rarg), 6, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_UniformConvergenceCLM_instDistribMulAction___rarg___boxed), 6, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_UniformConvergenceCLM_instDistribMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instDistribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_UniformConvergenceCLM_instDistribMulAction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_instSMul___rarg), 6, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_UniformConvergenceCLM_instModule___rarg___boxed), 6, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_UniformConvergenceCLM_instModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_UniformConvergenceCLM_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_UniformConvergenceCLM_instModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_topologicalSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_box(0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_topologicalSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_ContinuousLinearMap_topologicalSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_UniformConvergenceCLM_instUniformSpace(lean_box(0), lean_box(0), x_1, x_2, x_3, lean_box(0), lean_box(0), x_6, x_7, x_10, x_8, x_9, x_11, lean_box(0), lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousLinearMap_uniformSpace___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_uniformSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_ContinuousLinearMap_uniformSpace___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
static lean_object* _init_l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg___boxed), 21, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25) {
_start:
{
lean_object* x_26; 
x_26 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_24);
return x_26;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousLinearMap_precomp___rarg___boxed), 25, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearMap_precomp___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg___boxed(lean_object** _args) {
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
x_22 = l_ContinuousLinearMap_comp___at_ContinuousLinearMap_precomp___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_22;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_precomp___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_26; 
x_26 = l_ContinuousLinearMap_precomp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_26;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg___boxed), 21, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24) {
_start:
{
lean_object* x_25; 
x_25 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg___boxed), 21, 20);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_3);
lean_closure_set(x_25, 3, lean_box(0));
lean_closure_set(x_25, 4, lean_box(0));
lean_closure_set(x_25, 5, lean_box(0));
lean_closure_set(x_25, 6, x_11);
lean_closure_set(x_25, 7, x_12);
lean_closure_set(x_25, 8, x_13);
lean_closure_set(x_25, 9, x_14);
lean_closure_set(x_25, 10, x_15);
lean_closure_set(x_25, 11, x_16);
lean_closure_set(x_25, 12, x_17);
lean_closure_set(x_25, 13, x_18);
lean_closure_set(x_25, 14, x_19);
lean_closure_set(x_25, 15, x_4);
lean_closure_set(x_25, 16, x_5);
lean_closure_set(x_25, 17, x_6);
lean_closure_set(x_25, 18, lean_box(0));
lean_closure_set(x_25, 19, x_24);
return x_25;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousLinearMap_postcomp___rarg___boxed), 24, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearMap_postcomp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg___boxed(lean_object** _args) {
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
x_22 = l_ContinuousLinearMap_comp___at_ContinuousLinearMap_postcomp___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_22;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_postcomp___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_25; 
x_25 = l_ContinuousLinearMap_postcomp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24);
return x_25;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg___boxed), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4___rarg), 2, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_closure((void*)(l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg___boxed), 1, 0);
x_18 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
return x_18;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousLinearMap_toLinearMap_u2082___rarg___boxed), 16, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_toLinearMap_u2082___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_ContinuousLinearMap_coeLM___at_ContinuousLinearMap_toLinearMap_u2082___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4___boxed(lean_object** _args) {
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
x_19 = l_LinearMap_comp___at_ContinuousLinearMap_toLinearMap_u2082___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_toLinearMap_u2082___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_ContinuousLinearMap_toLinearMap_u2082___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_17;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24) {
_start:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = l_NormedField_toNormedCommRing___rarg(x_1);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_NormedField_toNormedCommRing___rarg(x_13);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_alloc_closure((void*)(l_ContinuousLinearMap_restrictScalars___rarg___boxed), 13, 12);
lean_closure_set(x_29, 0, x_26);
lean_closure_set(x_29, 1, x_3);
lean_closure_set(x_29, 2, x_8);
lean_closure_set(x_29, 3, x_5);
lean_closure_set(x_29, 4, x_11);
lean_closure_set(x_29, 5, x_4);
lean_closure_set(x_29, 6, x_9);
lean_closure_set(x_29, 7, lean_box(0));
lean_closure_set(x_29, 8, x_28);
lean_closure_set(x_29, 9, x_15);
lean_closure_set(x_29, 10, x_17);
lean_closure_set(x_29, 11, lean_box(0));
return x_29;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousLinearMap_restrictScalarsL___rarg___boxed), 24, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_restrictScalarsL___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_restrictScalarsL___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_25; 
x_25 = l_ContinuousLinearMap_restrictScalarsL___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_14);
return x_25;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg___boxed), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg___boxed), 3, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___rarg), 1, 0);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___rarg(x_11);
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, lean_box(0), lean_box(0), x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg___boxed), 15, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg___boxed), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg___boxed), 18, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg___boxed), 18, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg___boxed), 3, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___rarg), 1, 0);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___rarg(x_11);
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, lean_box(0), lean_box(0), x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg___boxed), 15, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg___boxed), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg___boxed), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg___boxed), 18, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22___rarg), 2, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg___boxed), 18, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26) {
_start:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
x_28 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg(x_12, x_13, x_14, x_15, x_16, x_17, x_20, x_21, lean_box(0), lean_box(0), x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_30, 0, x_26);
lean_closure_set(x_30, 1, x_29);
x_31 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_31, 0, x_27);
lean_closure_set(x_31, 1, x_30);
return x_31;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26) {
_start:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_9, lean_box(0), lean_box(0), x_11);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
lean_dec(x_22);
x_30 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_30, 0, x_26);
lean_closure_set(x_30, 1, x_29);
x_31 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_31, 0, x_28);
lean_closure_set(x_31, 1, x_30);
return x_31;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33, lean_object* x_34, lean_object* x_35, lean_object* x_36, lean_object* x_37, lean_object* x_38, lean_object* x_39, lean_object* x_40, lean_object* x_41, lean_object* x_42) {
_start:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_inc(x_23);
lean_inc(x_28);
lean_inc(x_41);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_42);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
x_43 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1___boxed), 26, 25);
lean_closure_set(x_43, 0, x_3);
lean_closure_set(x_43, 1, x_4);
lean_closure_set(x_43, 2, x_7);
lean_closure_set(x_43, 3, x_8);
lean_closure_set(x_43, 4, x_11);
lean_closure_set(x_43, 5, x_12);
lean_closure_set(x_43, 6, x_15);
lean_closure_set(x_43, 7, x_16);
lean_closure_set(x_43, 8, x_25);
lean_closure_set(x_43, 9, x_26);
lean_closure_set(x_43, 10, x_42);
lean_closure_set(x_43, 11, x_1);
lean_closure_set(x_43, 12, x_2);
lean_closure_set(x_43, 13, x_5);
lean_closure_set(x_43, 14, x_6);
lean_closure_set(x_43, 15, x_9);
lean_closure_set(x_43, 16, x_10);
lean_closure_set(x_43, 17, x_13);
lean_closure_set(x_43, 18, x_14);
lean_closure_set(x_43, 19, x_21);
lean_closure_set(x_43, 20, x_22);
lean_closure_set(x_43, 21, x_41);
lean_closure_set(x_43, 22, x_28);
lean_closure_set(x_43, 23, x_27);
lean_closure_set(x_43, 24, x_23);
x_44 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2___boxed), 26, 25);
lean_closure_set(x_44, 0, x_3);
lean_closure_set(x_44, 1, x_4);
lean_closure_set(x_44, 2, x_7);
lean_closure_set(x_44, 3, x_8);
lean_closure_set(x_44, 4, x_11);
lean_closure_set(x_44, 5, x_12);
lean_closure_set(x_44, 6, x_15);
lean_closure_set(x_44, 7, x_16);
lean_closure_set(x_44, 8, x_25);
lean_closure_set(x_44, 9, x_26);
lean_closure_set(x_44, 10, x_42);
lean_closure_set(x_44, 11, x_1);
lean_closure_set(x_44, 12, x_2);
lean_closure_set(x_44, 13, x_5);
lean_closure_set(x_44, 14, x_6);
lean_closure_set(x_44, 15, x_9);
lean_closure_set(x_44, 16, x_10);
lean_closure_set(x_44, 17, x_13);
lean_closure_set(x_44, 18, x_14);
lean_closure_set(x_44, 19, x_21);
lean_closure_set(x_44, 20, x_22);
lean_closure_set(x_44, 21, x_41);
lean_closure_set(x_44, 22, x_23);
lean_closure_set(x_44, 23, x_24);
lean_closure_set(x_44, 24, x_28);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_arrowCongrSL___rarg___boxed), 42, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
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
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
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
return x_16;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
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
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
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
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
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
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_inverse___at_ContinuousLinearEquiv_arrowCongrSL___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearEquiv_toAddEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_ContinuousLinearEquiv_arrowCongrSL___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_ContinuousLinearEquiv_symm___at_ContinuousLinearEquiv_arrowCongrSL___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
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
return x_16;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
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
return x_19;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearEquiv_toContinuousLinearMap___at_ContinuousLinearEquiv_arrowCongrSL___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
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
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__19___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
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
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__22(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg___boxed(lean_object** _args) {
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
x_19 = l_ContinuousLinearMap_comp___at_ContinuousLinearEquiv_arrowCongrSL___spec__21___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
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
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_27; 
x_27 = l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
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
return x_27;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_27; 
x_27 = l_ContinuousLinearEquiv_arrowCongrSL___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
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
return x_27;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongrSL___rarg___boxed(lean_object** _args) {
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
lean_object* x_34 = _args[33];
lean_object* x_35 = _args[34];
lean_object* x_36 = _args[35];
lean_object* x_37 = _args[36];
lean_object* x_38 = _args[37];
lean_object* x_39 = _args[38];
lean_object* x_40 = _args[39];
lean_object* x_41 = _args[40];
lean_object* x_42 = _args[41];
_start:
{
lean_object* x_43; 
x_43 = l_ContinuousLinearEquiv_arrowCongrSL___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36, x_37, x_38, x_39, x_40, x_41, x_42);
return x_43;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearEquiv_arrowCongr___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc_n(x_20, 7);
lean_inc_n(x_5, 3);
x_21 = l_ContinuousLinearEquiv_arrowCongrSL___rarg(x_1, x_2, x_3, x_4, x_5, x_5, x_5, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_20, x_20, x_20, x_20, x_20, x_20, x_20, x_20, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_18, x_19);
return x_21;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ContinuousLinearEquiv_arrowCongr___rarg___boxed), 19, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearEquiv_arrowCongr___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearEquiv_arrowCongr___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearEquiv_arrowCongr___rarg___boxed(lean_object** _args) {
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
x_20 = l_ContinuousLinearEquiv_arrowCongr___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_UniformConvergence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_SeparationQuotient_Section(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Hom_ContinuousEvalConst(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Module_StrongTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_UniformConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_SeparationQuotient_Section(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Hom_ContinuousEvalConst(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UniformConvergenceCLM_instFunLike___closed__1 = _init_l_UniformConvergenceCLM_instFunLike___closed__1();
lean_mark_persistent(l_UniformConvergenceCLM_instFunLike___closed__1);
l_UniformConvergenceCLM_instUniformSpace___closed__1 = _init_l_UniformConvergenceCLM_instUniformSpace___closed__1();
lean_mark_persistent(l_UniformConvergenceCLM_instUniformSpace___closed__1);
l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1 = _init_l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ContinuousLinearMap_precomp___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
