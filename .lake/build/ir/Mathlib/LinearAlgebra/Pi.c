// Lean compiler output
// Module: Mathlib.LinearAlgebra.Pi
// Imports: Init Mathlib.Algebra.Group.Fin.Tuple Mathlib.Algebra.BigOperators.GroupWithZero.Action Mathlib.Algebra.BigOperators.Pi Mathlib.Algebra.Module.Prod Mathlib.Algebra.Module.Submodule.Ker Mathlib.Algebra.Module.Submodule.Range Mathlib.Algebra.Module.Equiv.Basic Mathlib.Logic.Equiv.Fin Mathlib.LinearAlgebra.Prod
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
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_LinearMap_instZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_LinearMap_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LinearEquiv_piFinTwo___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_pi___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_diag___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft_x27___spec__1(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_sumArrowEquivProdArrow___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_sumArrowLequivProdArrow___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piFinTwo___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_uncurry___rarg(lean_object*, lean_object*);
lean_object* l_LinearEquiv_ofLinear___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_pi(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_finTwoArrow___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1;
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_consEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piOptionEquivProd___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__11(lean_object*, lean_object*);
lean_object* l_Equiv_sumArrowEquivProdArrow___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecCons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_consEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Pi_prod___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_pi___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_finTwoArrowEquiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_diag___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_ringLmapEquivSelf___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrRight___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
lean_object* l_Equiv_piCongrLeft_x27___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_piFinTwoEquiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Fin_consLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__1(lean_object*, lean_object*);
lean_object* l_piFinTwoEquiv___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_LinearEquiv_piOptionEquivProd___rarg___closed__1;
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_LinearEquiv_finTwoArrow___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_funUnique___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_single___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piFinTwo___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_eval___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecCons(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_finTwoArrow___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_piCurry___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_single___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_piCongrLeft_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty_u2082___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piRing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_pi___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1(lean_object*, lean_object*);
lean_object* l_LinearEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg___boxed(lean_object**);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compLeft___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__17___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCurry___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons_u2082___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCurry___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_proj___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_proj___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piOptionEquivProd___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_pi___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons_u2082___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_piUnique___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_vecCons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_finTwoArrowEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_funUnique___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Fin_consLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft_x27___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_pi___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_pi___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___rarg(lean_object*);
lean_object* l_Equiv_piOptionEquivProd___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_diag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_compLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty_u2082___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__5(lean_object*, lean_object*);
static lean_object* l_LinearEquiv_piCurry___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1___rarg___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrRight___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compLeft___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_sumArrowLequivProdArrow___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_piOptionEquivProd___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__2(lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_LinearMap_pi___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_pi___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_pi___rarg), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_pi___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_pi(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_proj___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_proj___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_proj___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compLeft___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_compLeft___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compLeft___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_compLeft___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_compLeft(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_single___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_single___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_single___spec__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_LinearMap_single___spec__3___rarg(x_2, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_single___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_single___spec__2___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_single___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_single___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_single___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_single___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_LinearMap_single___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_single___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_LinearMap_single___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_single___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_single(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_single___spec__2___rarg___boxed), 5, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LinearMap_lsum___elambda__1___rarg___boxed), 11, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LinearMap_lsum___spec__4___rarg), 2, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__2), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_List_foldrTR___rarg(x_4, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___boxed), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Multiset_map___rarg(x_8, x_7);
x_10 = l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg(x_5, x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_LinearMap_lsum___spec__5___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_8 = l_LinearMap_addCommMonoid___rarg(x_3, x_6, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_instSMul___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
x_9 = lean_apply_1(x_1, x_8);
x_10 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearMap_lsum___rarg___lambda__3___boxed), 8, 7);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
lean_closure_set(x_9, 5, x_5);
lean_closure_set(x_9, 6, x_6);
x_10 = l_Finset_sum___at_LinearMap_lsum___spec__5___rarg(x_1, lean_box(0), x_2, x_3, x_4, x_5, x_7, x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_3);
x_13 = l_Pi_addMonoid___rarg(x_3);
lean_inc(x_4);
x_14 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_14, 0, x_4);
x_15 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
x_17 = lean_alloc_closure((void*)(l_LinearMap_lsum___rarg___lambda__4), 8, 7);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_7);
lean_closure_set(x_17, 4, x_8);
lean_closure_set(x_17, 5, x_16);
lean_closure_set(x_17, 6, x_9);
x_18 = lean_alloc_closure((void*)(l_LinearMap_lsum___elambda__1___rarg___boxed), 11, 9);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_5);
lean_closure_set(x_18, 3, x_7);
lean_closure_set(x_18, 4, x_8);
lean_closure_set(x_18, 5, x_13);
lean_closure_set(x_18, 6, x_14);
lean_closure_set(x_18, 7, x_15);
lean_closure_set(x_18, 8, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_lsum___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_lsum___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_lsum___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_lsum___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_lsum___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_lsum___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_lsum___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_lsum___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_comp___at_LinearMap_lsum___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearMap_lsum___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Multiset_sum___at_LinearMap_lsum___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearMap_lsum___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Finset_sum___at_LinearMap_lsum___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_lsum___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_lsum___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_lsum___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_lsum___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
x_10 = l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg(x_3, x_4, x_5, x_6, lean_box(0), x_8, x_9);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9___rarg), 2, 0);
return x_17;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___rarg), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___rarg), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_alloc_closure((void*)(l_LinearEquiv_ofLinear___elambda__1___rarg), 2, 1);
lean_closure_set(x_18, 0, x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg___boxed), 17, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_8 = l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg(x_1, lean_box(0), x_3, x_4, x_2, x_7, lean_box(0), x_6);
lean_dec(x_6);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_LinearMap_iInfKerProjEquiv___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
x_6 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg(x_2, x_3, lean_box(0), x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___rarg), 2, 0);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_apply_1(x_2, x_5);
x_9 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_11, 0, x_5);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_3);
x_10 = l_Pi_addMonoid___rarg(x_3);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_11, 0, x_4);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearMap_iInfKerProjEquiv___rarg___lambda__2), 4, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
x_13 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg(x_3, x_4, x_12);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_LinearMap_iInfKerProjEquiv___rarg___lambda__3___boxed), 8, 7);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_4);
lean_closure_set(x_15, 3, x_13);
lean_closure_set(x_15, 4, x_10);
lean_closure_set(x_15, 5, x_11);
lean_closure_set(x_15, 6, x_14);
x_16 = lean_alloc_closure((void*)(l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_3);
x_17 = lean_alloc_closure((void*)(l_LinearMap_iInfKerProjEquiv___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_17, 0, x_7);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_1);
lean_closure_set(x_17, 3, x_4);
x_18 = lean_alloc_closure((void*)(l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_alloc_closure((void*)(l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___rarg), 3, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, lean_box(0));
x_20 = l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), lean_box(0), x_10, x_11, x_13, x_14, x_14, lean_box(0), lean_box(0), x_16, x_19, lean_box(0), lean_box(0));
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_20;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_iInfKerProjEquiv___rarg), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_comap___at_LinearMap_iInfKerProjEquiv___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_ker___at_LinearMap_iInfKerProjEquiv___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_LinearMap_iInfKerProjEquiv___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_subtype___at_LinearMap_iInfKerProjEquiv___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearMap_comp___at_LinearMap_iInfKerProjEquiv___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_17;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__11(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_proj___at_LinearMap_iInfKerProjEquiv___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_iInfKerProjEquiv___spec__15(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_pi___at_LinearMap_iInfKerProjEquiv___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_codRestrict___at_LinearMap_iInfKerProjEquiv___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg___boxed(lean_object** _args) {
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
x_18 = l_LinearEquiv_ofLinear___at_LinearMap_iInfKerProjEquiv___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_iInfKerProjEquiv___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_iInfKerProjEquiv___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
LEAN_EXPORT lean_object* l_LinearMap_iInfKerProjEquiv___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_iInfKerProjEquiv___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_diag___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_6, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_apply_1(x_3, x_6);
return x_9;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
lean_inc(x_5);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_diag___spec__2___rarg___boxed), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
lean_inc(x_2);
x_7 = lean_apply_1(x_2, x_3);
x_8 = lean_apply_1(x_2, x_5);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearMap_instZero___rarg(x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_LinearMap_diag___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_6);
lean_closure_set(x_8, 3, x_1);
x_9 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
lean_inc(x_6);
x_11 = l_Function_update___at_LinearMap_diag___spec__2___rarg(x_5, x_6, x_9, x_6, x_10, x_7);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_diag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_diag___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_diag___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_diag___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Function_update___at_LinearMap_diag___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_diag___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Function_update___at_LinearMap_diag___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_diag___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_diag___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Submodule_pi___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_pi___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_pi___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_pi___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_pi(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_12);
x_13 = lean_apply_1(x_6, x_12);
lean_inc(x_12);
x_14 = lean_apply_1(x_4, x_12);
lean_inc(x_12);
x_15 = lean_apply_1(x_7, x_12);
lean_inc(x_12);
x_16 = lean_apply_1(x_5, x_12);
lean_inc(x_12);
x_17 = lean_apply_1(x_8, x_12);
x_18 = l_LinearEquiv_symm___rarg(x_1, x_1, x_14, x_13, x_16, x_15, x_10, x_10, lean_box(0), lean_box(0), x_17);
lean_dec(x_15);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_14);
x_19 = lean_apply_1(x_11, x_12);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_apply_1(x_20, x_19);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___elambda__1___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrRight___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___rarg___lambda__1), 3, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___elambda__1___rarg___boxed), 12, 10);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, lean_box(0));
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_6);
lean_closure_set(x_12, 6, x_7);
lean_closure_set(x_12, 7, x_8);
lean_closure_set(x_12, 8, x_9);
lean_closure_set(x_12, 9, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearEquiv_piCongrRight___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrRight___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piCongrRight___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_piCongrLeft_x27___elambda__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrLeft_x27___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Equiv_piCongrLeft_x27___elambda__2___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrLeft_x27___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrLeft_x27___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piCongrLeft_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearEquiv_piCongrLeft_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg___boxed), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Equiv_symm___rarg(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_6 = l_Equiv_symm___rarg(x_5);
x_7 = l_LinearEquiv_piCongrLeft_x27___rarg(x_1, lean_box(0), x_3, x_4, x_6);
x_8 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_9 = l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_8, x_8, lean_box(0), lean_box(0), x_7);
lean_dec(x_8);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrLeft___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCongrLeft___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piCongrLeft___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_inverse___at_LinearEquiv_piCongrLeft___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piCongrLeft___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LinearEquiv_piCongrLeft___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_LinearEquiv_piCongrLeft___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearEquiv_piCongrLeft___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sigma_uncurry___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piCurry___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCurry___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_Pi_addMonoid___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
static lean_object* _init_l_LinearEquiv_piCurry___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_piCurry___elambda__2___rarg), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_LinearEquiv_piCurry___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_LinearEquiv_piCurry___elambda__1___rarg), 2, 0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_piCurry___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piCurry___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piCurry___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCurry___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearEquiv_piCurry___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_piOptionEquivProd___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_piOptionEquivProd___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piOptionEquivProd___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_LinearEquiv_piOptionEquivProd___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_piOptionEquivProd___elambda__2___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_LinearEquiv_piOptionEquivProd___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_LinearEquiv_piOptionEquivProd___elambda__1___rarg), 2, 0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_piOptionEquivProd___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piOptionEquivProd___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piOptionEquivProd___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piOptionEquivProd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearEquiv_piOptionEquivProd___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_proj___at_LinearEquiv_piRing___spec__7___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LinearEquiv_piRing___spec__9___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__2), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_List_foldrTR___rarg(x_4, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Multiset_map___rarg(x_5, x_4);
x_7 = l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg(x_2, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Semiring_toModule___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Semiring_toModule___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_7 = l_LinearMap_addCommMonoid___rarg(x_2, x_5, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_6);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4___boxed), 6, 5);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
lean_closure_set(x_7, 4, x_4);
x_8 = l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg(x_1, x_2, x_3, x_5, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_10);
x_12 = l_Pi_addMonoid___rarg(x_10);
lean_inc(x_11);
x_13 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_13, 0, x_11);
x_14 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_15 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_15);
lean_inc(x_7);
lean_inc(x_6);
x_16 = lean_alloc_closure((void*)(l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__5), 6, 5);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_6);
lean_closure_set(x_16, 2, x_7);
lean_closure_set(x_16, 3, x_15);
lean_closure_set(x_16, 4, x_3);
x_17 = lean_alloc_closure((void*)(l_LinearMap_lsum___elambda__1___rarg___boxed), 11, 9);
lean_closure_set(x_17, 0, x_10);
lean_closure_set(x_17, 1, x_11);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_6);
lean_closure_set(x_17, 4, x_7);
lean_closure_set(x_17, 5, x_12);
lean_closure_set(x_17, 6, x_13);
lean_closure_set(x_17, 7, x_14);
lean_closure_set(x_17, 8, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg___boxed), 3, 0);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___rarg), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Semiring_toModule___rarg(x_1);
x_7 = l_LinearMap_addCommMonoid___rarg(x_2, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___rarg(x_14);
x_17 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
lean_closure_set(x_11, 3, x_9);
x_12 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_4);
lean_inc(x_6);
x_13 = lean_alloc_closure((void*)(l_LinearMap_lsum___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_13, 0, x_6);
x_14 = lean_alloc_closure((void*)(l_Multiset_sum___at_LinearMap_lsum___spec__6___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_14, 0, x_6);
x_15 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_inc(x_10);
x_16 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___rarg___lambda__1), 3, 1);
lean_closure_set(x_16, 0, x_10);
x_17 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_18 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___elambda__1___rarg___boxed), 12, 10);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, lean_box(0));
lean_closure_set(x_18, 3, x_11);
lean_closure_set(x_18, 4, x_13);
lean_closure_set(x_18, 5, x_12);
lean_closure_set(x_18, 6, x_14);
lean_closure_set(x_18, 7, x_10);
lean_closure_set(x_18, 8, x_15);
lean_closure_set(x_18, 9, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LinearEquiv_piRing___spec__19___rarg), 2, 0);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___rarg), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___rarg), 1, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25) {
_start:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
x_29 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___rarg(x_24);
x_30 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___rarg(x_25);
x_31 = l_Equiv_trans___rarg(x_29, x_30);
x_32 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg___boxed), 25, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_ringLmapEquivSelf___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_11 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7, x_8, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_13 = l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg(x_1, lean_box(0), x_5, x_6, x_7, x_8, lean_box(0), x_10, x_12, x_12, x_12, lean_box(0), lean_box(0), x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_piRing___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_8);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_15 = l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg(x_1, lean_box(0), x_5, x_6, x_7, x_8, lean_box(0), x_10, x_12, x_14);
x_16 = l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg(x_1, lean_box(0), x_5, x_6, x_7, x_8, lean_box(0), x_10, x_12, x_12, x_12, x_12, x_12, x_12, x_12, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_13, x_15);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piRing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_piRing___rarg), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_LinearEquiv_piRing___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_proj___at_LinearEquiv_piRing___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_LinearEquiv_piRing___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_LinearEquiv_piRing___spec__11___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_LinearEquiv_piRing___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_sum___at_LinearEquiv_piRing___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_sum___at_LinearEquiv_piRing___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_lsum___at_LinearEquiv_piRing___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearMap_inverse___at_LinearEquiv_piRing___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15___boxed(lean_object** _args) {
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
x_19 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_symm___at_LinearEquiv_piRing___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piRing___spec__17___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piRing___spec__17(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_piCongrRight___at_LinearEquiv_piRing___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearEquiv_piRing___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearMap_comp___at_LinearEquiv_piRing___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21___boxed(lean_object** _args) {
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
x_19 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__21(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__20___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23___boxed(lean_object** _args) {
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
x_19 = l_LinearEquiv_toAddEquiv___at_LinearEquiv_piRing___spec__23(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toEquiv___at_LinearEquiv_piRing___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg___boxed(lean_object** _args) {
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
x_26 = l_LinearEquiv_trans___at_LinearEquiv_piRing___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_26;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piRing___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearEquiv_piRing___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_sumArrowEquivProdArrow___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_sumArrowLequivProdArrow___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_sumArrowLequivProdArrow___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_sumArrowEquivProdArrow___elambda__2___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_sumArrowLequivProdArrow___elambda__1___rarg), 2, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_sumArrowLequivProdArrow___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_sumArrowLequivProdArrow___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_sumArrowLequivProdArrow___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_sumArrowLequivProdArrow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_sumArrowLequivProdArrow___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_funUnique___elambda__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_funUnique___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Equiv_piUnique___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_LinearEquiv_funUnique___elambda__1___rarg___boxed), 2, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_funUnique___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_funUnique___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_funUnique___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_funUnique___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_funUnique___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_funUnique___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearEquiv_funUnique___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_piFinTwoEquiv___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_piFinTwo___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piFinTwo___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_piFinTwo___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_piFinTwoEquiv___elambda__2___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_LinearEquiv_piFinTwo___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_LinearEquiv_piFinTwo___elambda__1___rarg___boxed), 2, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_piFinTwo___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_piFinTwo___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_piFinTwo___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_piFinTwo___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_piFinTwo___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearEquiv_piFinTwo___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_finTwoArrowEquiv___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_finTwoArrow___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_finTwoArrow___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_finTwoArrow___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_finTwoArrowEquiv___elambda__2___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_LinearEquiv_finTwoArrow___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_finTwoArrow___elambda__1___rarg___boxed), 2, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_finTwoArrow___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_finTwoArrow___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_finTwoArrow___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_finTwoArrow___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_finTwoArrow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_finTwoArrow___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_consEquiv___elambda__1(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Fin_consLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Fin_consEquiv___elambda__2___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_closure((void*)(l_Fin_consLinearEquiv___elambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_consLinearEquiv___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_consLinearEquiv___elambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Fin_consLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Fin_consLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_consLinearEquiv___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_consLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecEmpty___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_vecEmpty(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Fin_consEquiv___elambda__2___boxed), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_closure((void*)(l_Fin_consLinearEquiv___elambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, lean_box(0));
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_prod___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_prod___at_LinearMap_vecCons___spec__4___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LinearMap_vecCons___spec__6___rarg), 2, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
x_9 = l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg(x_1, x_3, x_5, x_6, x_6);
lean_dec(x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_Pi_prod___rarg), 3, 2);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_vecCons___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecCons___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecCons___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_consLinearEquiv___at_LinearMap_vecCons___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecCons___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_prod___at_LinearMap_vecCons___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_prod___at_LinearMap_vecCons___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LinearMap_vecCons___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearMap_comp___at_LinearMap_vecCons___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_vecCons___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty_u2082___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_vecEmpty___boxed), 10, 8);
lean_closure_set(x_9, 0, lean_box(0));
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_1);
lean_closure_set(x_9, 4, x_3);
lean_closure_set(x_9, 5, x_4);
lean_closure_set(x_9, 6, x_6);
lean_closure_set(x_9, 7, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_vecEmpty_u2082___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecEmpty_u2082___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecEmpty_u2082___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecEmpty_u2082___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_vecEmpty_u2082___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons_u2082___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_pi___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_11);
x_12 = lean_apply_1(x_9, x_11);
x_13 = lean_apply_1(x_10, x_11);
x_14 = l_LinearMap_vecCons___rarg(x_1, x_3, x_4, x_6, x_7, x_8, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_vecCons_u2082___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_vecCons_u2082___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_vecCons_u2082___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_vecCons_u2082___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_vecCons_u2082___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Fin_Tuple(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_GroupWithZero_Action(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Submodule_Ker(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Submodule_Range(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Fin_Tuple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_GroupWithZero_Action(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Submodule_Ker(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Submodule_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_LinearMap_pi___spec__1___closed__1 = _init_l_RingHom_id___at_LinearMap_pi___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_LinearMap_pi___spec__1___closed__1);
l_LinearEquiv_piCurry___rarg___closed__1 = _init_l_LinearEquiv_piCurry___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_piCurry___rarg___closed__1);
l_LinearEquiv_piOptionEquivProd___rarg___closed__1 = _init_l_LinearEquiv_piOptionEquivProd___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_piOptionEquivProd___rarg___closed__1);
l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1 = _init_l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_sumArrowLequivProdArrow___rarg___closed__1);
l_LinearEquiv_piFinTwo___rarg___closed__1 = _init_l_LinearEquiv_piFinTwo___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_piFinTwo___rarg___closed__1);
l_LinearEquiv_finTwoArrow___rarg___closed__1 = _init_l_LinearEquiv_finTwoArrow___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_finTwoArrow___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
