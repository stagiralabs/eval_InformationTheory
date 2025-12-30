// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Charpoly.LinearMap
// Imports: Init Mathlib.LinearAlgebra.Matrix.Charpoly.Coeff Mathlib.LinearAlgebra.Matrix.ToLin
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__34___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PiToModule_fromMatrix(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromMatrix___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_isRepresentation___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_isRepresentation(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromMatrix___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromMatrix___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromEnd___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__34(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PiToModule_fromEnd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PiToModule_fromMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromEnd___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__3(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromEnd___spec__4(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromEnd___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_isRepresentation___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromEnd___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromEnd___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PiToModule_fromEnd(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromMatrix___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromMatrix___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___rarg), 6, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___rarg), 6, 5);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, lean_box(0));
lean_closure_set(x_12, 3, lean_box(0));
lean_closure_set(x_12, 4, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10___rarg), 2, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___rarg), 6, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___rarg), 6, 5);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, lean_box(0));
lean_closure_set(x_13, 2, lean_box(0));
lean_closure_set(x_13, 3, lean_box(0));
lean_closure_set(x_13, 4, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_9);
x_10 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_7, lean_box(0), x_9, x_9, x_9);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_8);
x_12 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7, lean_box(0), x_9, x_9, x_11);
lean_dec(x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___rarg), 6, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___rarg), 6, 5);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, lean_box(0));
lean_closure_set(x_13, 2, lean_box(0));
lean_closure_set(x_13, 3, lean_box(0));
lean_closure_set(x_13, 4, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg___boxed), 8, 7);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, x_6);
lean_closure_set(x_8, 6, x_7);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7, lean_box(0), x_9, x_9, x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromMatrix___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromMatrix___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_PiToModule_fromMatrix___spec__17___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_6);
x_11 = l_Finset_sum___at_PiToModule_fromMatrix___spec__17___rarg(x_3, x_1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_8);
x_10 = lean_apply_2(x_4, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg(x_1, lean_box(0), x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_1);
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_11, 0, x_5);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, lean_box(0));
lean_closure_set(x_11, 3, x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_symm___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__34(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35___rarg), 2, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_PiToModule_fromMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_inc(x_5);
x_10 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_11 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Semiring_toNonAssocSemiring___rarg(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___boxed), 9, 8);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, lean_box(0));
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_6);
lean_closure_set(x_16, 6, lean_box(0));
lean_closure_set(x_16, 7, x_7);
lean_inc(x_15);
lean_inc(x_9);
lean_inc(x_5);
x_17 = l_LinearMap_llcomp___at_PiToModule_fromMatrix___spec__2___rarg(x_3, lean_box(0), x_5, x_6, x_9, x_12, x_15);
x_18 = lean_apply_1(x_17, x_16);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_1);
x_19 = l_algEquivMatrix_x27___at_PiToModule_fromMatrix___spec__19___rarg(x_1, lean_box(0), x_5, x_8);
x_20 = l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg(x_1, lean_box(0), x_5, x_8, x_9, x_15, x_19);
x_21 = l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg(x_1, lean_box(0), x_5, x_8, x_9, x_15, x_20);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_1);
x_22 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_22, 0, x_18);
lean_closure_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_PiToModule_fromMatrix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PiToModule_fromMatrix___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromMatrix___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_id___at_PiToModule_fromMatrix___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearMap_comp___at_PiToModule_fromMatrix___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_lcomp___at_PiToModule_fromMatrix___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromMatrix___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_flip___at_PiToModule_fromMatrix___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__16(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_PiToModule_fromMatrix___spec__23___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_PiToModule_fromMatrix___spec__22___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_toMatrix_x27___at_PiToModule_fromMatrix___spec__20___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_toRingEquiv___at_PiToModule_fromMatrix___spec__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_toMulEquiv___at_PiToModule_fromMatrix___spec__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulEquiv_symm___at_PiToModule_fromMatrix___spec__28(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_toAddEquiv___at_PiToModule_fromMatrix___spec__29(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddEquiv_symm___at_PiToModule_fromMatrix___spec__30(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_symm___at_PiToModule_fromMatrix___spec__26___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_symm___at_PiToModule_fromMatrix___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_toAlgHom___at_PiToModule_fromMatrix___spec__32(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromMatrix___spec__34___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__34(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgHom_toLinearMap___at_PiToModule_fromMatrix___spec__33(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_toLinearMap___at_PiToModule_fromMatrix___spec__31___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearMap_comp___at_PiToModule_fromMatrix___spec__35(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromEnd___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_PiToModule_fromMatrix___spec__18___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_PiToModule_fromEnd___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_PiToModule_fromEnd___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromEnd___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_PiToModule_fromEnd___spec__5___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_PiToModule_fromEnd___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_PiToModule_fromEnd___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromMatrix___spec__15___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_6);
x_11 = l_Finset_sum___at_PiToModule_fromEnd___spec__4___rarg(x_3, x_1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromEnd___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___rarg), 6, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___rarg), 6, 5);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_PiToModule_fromEnd___spec__12___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___rarg), 6, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromMatrix___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___rarg), 6, 5);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, lean_box(0));
lean_closure_set(x_11, 3, lean_box(0));
lean_closure_set(x_11, 4, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_7);
x_8 = l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_7, x_7, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg(x_1, lean_box(0), x_3, x_4, x_5, lean_box(0), x_7, x_7, x_9);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PiToModule_fromEnd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_5);
x_8 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_9 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg___boxed), 9, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, lean_box(0));
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_6);
lean_closure_set(x_11, 6, lean_box(0));
lean_closure_set(x_11, 7, x_7);
x_12 = l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg(x_3, lean_box(0), x_5, x_6, x_10, x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_PiToModule_fromEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PiToModule_fromEnd___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromEnd___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromEnd___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Fintype_linearCombination___at_PiToModule_fromEnd___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromEnd___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_PiToModule_fromEnd___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_PiToModule_fromEnd___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_PiToModule_fromEnd___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_PiToModule_fromEnd___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_flip___at_PiToModule_fromEnd___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_PiToModule_fromEnd___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_PiToModule_fromEnd___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_PiToModule_fromEnd___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_flip___at_PiToModule_fromEnd___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_lcomp___at_PiToModule_fromEnd___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_isRepresentation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_isRepresentation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_isRepresentation___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_isRepresentation___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_isRepresentation___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Coeff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_ToLin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_LinearMap(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Coeff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_ToLin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1 = _init_l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_PiToModule_fromMatrix___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
