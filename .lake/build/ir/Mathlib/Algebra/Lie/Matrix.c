// Lean compiler output
// Module: Mathlib.Algebra.Lie.Matrix
// Imports: Init Mathlib.Algebra.Lie.OfAssociative Mathlib.LinearAlgebra.Matrix.Reindex Mathlib.LinearAlgebra.Matrix.ToLinearEquiv
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
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__50___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__35(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__46(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_lieEquivMatrix_x27___spec__2(lean_object*, lean_object*);
lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__52___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_reindex___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LieEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22(lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__31(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__35___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_lieConj(lean_object*);
lean_object* l_LinearEquiv_lieConj___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LieEquiv_toLinearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLieEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__33___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12(lean_object*);
lean_object* l_LieEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__33(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_arrowCongr___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLieEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__46___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44(lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___rarg(lean_object*);
lean_object* l_Matrix_toLinearEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__48(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_lieConj___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__48___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__52(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_lieEquivMatrix_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__37(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__37___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__31___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__28___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__50(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_mulVecLin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13(lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1(lean_object*);
lean_object* l_Matrix_reindex___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_mulVecLin___rarg(x_2, lean_box(0), lean_box(0), x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_lieEquivMatrix_x27___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_lieEquivMatrix_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_8);
x_10 = lean_apply_2(x_4, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_7);
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ring_toAddCommGroup___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg(x_1, lean_box(0), x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_alloc_closure((void*)(l_lieEquivMatrix_x27___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_5);
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_closure((void*)(l_lieEquivMatrix_x27___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_lieEquivMatrix_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_lieEquivMatrix_x27___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_lieEquivMatrix_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_lieEquivMatrix_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_lieEquivMatrix_x27___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_toMatrix_x27___at_lieEquivMatrix_x27___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_lieEquivMatrix_x27___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_lieEquivMatrix_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_lieEquivMatrix_x27___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_inc(x_8);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_9);
return x_7;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___rarg(x_11);
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_8, x_9, lean_box(0), lean_box(0));
lean_dec(x_9);
lean_dec(x_8);
x_11 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7);
x_12 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_13 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_12, x_12, lean_box(0), lean_box(0), x_11);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_LieEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___rarg(x_9);
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__20___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__21___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___rarg(x_9);
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__26___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__27___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg(x_2, lean_box(0), x_3, x_4, x_5, x_5, lean_box(0), lean_box(0), x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_8);
lean_closure_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg(x_1, lean_box(0), x_2, x_3, x_4, x_4, lean_box(0), lean_box(0), x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_9);
lean_closure_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_5);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_7);
lean_closure_set(x_8, 5, x_5);
x_9 = lean_alloc_closure((void*)(l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_6);
lean_closure_set(x_9, 5, x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__28(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_LinearEquiv_arrowCongr___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_9);
return x_7;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_5);
x_6 = l_LinearEquiv_arrowCongr___at_Matrix_lieConj___spec__13___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_LinearEquiv_lieConj___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
lean_ctor_set(x_6, 1, x_8);
return x_6;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__31(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__32___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__33(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__35(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_9);
return x_7;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__37(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_5, 0);
lean_dec(x_10);
lean_ctor_set(x_5, 1, x_7);
return x_5;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__39___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___rarg(x_21);
x_27 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___rarg(x_22);
x_28 = l_Equiv_trans___rarg(x_26, x_27);
x_29 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg___boxed), 22, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_9, x_10);
x_12 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7);
x_13 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg(x_1, lean_box(0), x_5, x_6, x_8);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_15 = l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_14, x_14, x_14, x_14, x_14, x_14, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_12, x_13);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_LieEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__46(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__47___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__48(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__50(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_9);
return x_7;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__52(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_9);
return x_7;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Matrix_lieConj___spec__54___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___rarg(x_21);
x_27 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___rarg(x_22);
x_28 = l_Equiv_trans___rarg(x_26, x_27);
x_29 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg___boxed), 22, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_9, x_10);
x_12 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7);
x_13 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_8);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_15 = l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_14, x_14, x_14, x_14, x_14, x_14, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_12, x_13);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_LieEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_lieConj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_lieEquivMatrix_x27___rarg(x_1, lean_box(0), x_3, x_4);
lean_inc(x_10);
x_11 = l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg(x_1, lean_box(0), x_3, x_4, x_1, x_9, x_10);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_4);
x_12 = l_Matrix_toLinearEquiv_x27___rarg(x_4, lean_box(0), x_1, x_3, x_5, x_6);
lean_inc(x_9);
lean_inc_n(x_1, 2);
x_13 = l_LinearEquiv_lieConj___at_Matrix_lieConj___spec__12___rarg(x_1, lean_box(0), x_1, x_9, x_12);
x_14 = l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg(x_1, lean_box(0), x_3, x_4, x_1, x_9, x_11, x_13);
x_15 = l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg(x_1, lean_box(0), x_3, x_4, x_1, x_9, x_14, x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_lieConj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_lieConj___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_lieConj___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_inverse___at_Matrix_lieConj___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LieHom_inverse___at_Matrix_lieConj___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_lieConj___spec__9___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_inverse___at_Matrix_lieConj___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieEquiv_symm___at_Matrix_lieConj___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__15(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_lieConj___spec__17___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_Matrix_lieConj___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_comp___at_Matrix_lieConj___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_comp___at_Matrix_lieConj___spec__21(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_lieConj___spec__23___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_lieConj___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_Matrix_lieConj___spec__23(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_symm___at_Matrix_lieConj___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_comp___at_Matrix_lieConj___spec__26(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_comp___at_Matrix_lieConj___spec__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearEquiv_arrowCongrAddEquiv___at_Matrix_lieConj___spec__14___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__28___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__28(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__31___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__31(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__32___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_Matrix_lieConj___spec__32(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieHom_comp___at_Matrix_lieConj___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__33___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__33(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__35___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__35(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__34___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__37___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__37(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__36___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__39___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_Matrix_lieConj___spec__39(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__41(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__40___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__43(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__42___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_23; 
x_23 = l_LinearEquiv_trans___at_Matrix_lieConj___spec__38___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
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
lean_dec(x_1);
return x_23;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_trans___at_Matrix_lieConj___spec__29___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__46___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__46(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__47___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_Matrix_lieConj___spec__47(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieHom_comp___at_Matrix_lieConj___spec__45___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__48___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__48(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__50___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__50(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__49___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_lieConj___spec__52___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_lieConj___spec__52(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieEquiv_toLinearEquiv___at_Matrix_lieConj___spec__51___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Matrix_lieConj___spec__54___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_comp___at_Matrix_lieConj___spec__54(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__56(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__55___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Matrix_lieConj___spec__58(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_Matrix_lieConj___spec__57___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_23; 
x_23 = l_LinearEquiv_trans___at_Matrix_lieConj___spec__53___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
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
lean_dec(x_1);
return x_23;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_trans___at_Matrix_lieConj___spec__44___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Matrix_reindex___elambda__1___rarg(x_1, x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_reindexLieEquiv___elambda__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLieEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc_n(x_8, 2);
x_9 = lean_alloc_closure((void*)(l_Matrix_reindex___elambda__2___rarg), 5, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l_Matrix_reindexLieEquiv___elambda__1___rarg), 4, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_reindexLieEquiv___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLieEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_reindexLieEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLieEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_reindexLieEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_OfAssociative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Reindex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_ToLinearEquiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Matrix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_OfAssociative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Reindex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_ToLinearEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1 = _init_l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_lieEquivMatrix_x27___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
