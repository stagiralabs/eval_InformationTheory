// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.SchurComplement
// Imports: Init Mathlib.Data.Matrix.Invertible Mathlib.LinearAlgebra.Matrix.NonsingularInverse Mathlib.LinearAlgebra.Matrix.PosDef
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
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__58(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__7;
static lean_object* l_Matrix_term___u2295_u1d65_____closed__5;
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5(lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7;
LEAN_EXPORT lean_object* l_Matrix_term___u2295_u1d65__;
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82(lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6;
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34(lean_object*);
lean_object* l_Matrix_semiring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__45(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14;
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__11;
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Invertible_mulRight___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___boxed(lean_object**);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2;
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_sumComm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_submatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44(lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6(lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__3;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__2;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Invertible_mulLeft___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__6;
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__4;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__58___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_Matrix_toBlocks_u2081_u2081___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__45___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Invertible_mulLeft___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__12;
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__9;
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8;
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___boxed(lean_object**);
lean_object* l_Sum_swap___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5(lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13;
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3;
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4;
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12;
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__8;
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_fromBlocks___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__2;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__10;
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30(lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10;
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_toBlocks_u2082_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_term___u2295_u1d65_____closed__1;
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23(lean_object*);
lean_object* l_Sum_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77(lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Invertible_mulRight___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__2___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__6___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__5___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__5), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__4___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
lean_inc(x_10);
lean_inc(x_9);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__6), 8, 6);
lean_closure_set(x_21, 0, x_9);
lean_closure_set(x_21, 1, x_7);
lean_closure_set(x_21, 2, x_1);
lean_closure_set(x_21, 3, x_5);
lean_closure_set(x_21, 4, x_10);
lean_closure_set(x_21, 5, x_2);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_22);
lean_closure_set(x_23, 2, x_16);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__3___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__2___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__6___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__5___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__1___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__4___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
lean_inc(x_9);
lean_inc(x_10);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___lambda__2), 8, 6);
lean_closure_set(x_21, 0, x_10);
lean_closure_set(x_21, 1, x_7);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_5);
lean_closure_set(x_21, 4, x_9);
lean_closure_set(x_21, 5, x_1);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_16);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocksZero_u2081_u2082Invertible___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2081_u2081___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2082_u2082___rarg), 3, 1);
lean_closure_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2081_u2081___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2082_u2082___rarg), 3, 1);
lean_closure_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfFromBlocksZero_u2082_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_fromBlocksZero_u2082_u2081InvertibleEquiv___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_fromBlocksZero_u2081_u2082InvertibleEquiv___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_4);
x_10 = lean_apply_2(x_1, x_4, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_apply_1(x_3, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__4___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__3___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_4);
x_10 = lean_apply_2(x_1, x_4, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_apply_1(x_3, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__8___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__7___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__11___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__10___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__14___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__13___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__17___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__16___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__20___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__19___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__23___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__22___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_4);
x_11 = lean_apply_2(x_1, x_4, x_5);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_apply_1(x_3, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_dec(x_3);
x_5 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_4);
x_11 = lean_apply_2(x_1, x_4, x_5);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_apply_1(x_3, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_dec(x_3);
x_5 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__31___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__30___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__34___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__33___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2___rarg(x_3, x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__2___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(x_2, x_3);
x_10 = lean_apply_1(x_9, x_4);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__2), 6, 5);
lean_closure_set(x_11, 0, x_5);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_8);
lean_closure_set(x_11, 3, x_7);
lean_closure_set(x_11, 4, x_3);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__29___rarg(x_1, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(x_2, x_3);
x_7 = lean_apply_2(x_6, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__3), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_closure_set(x_10, 6, x_6);
lean_inc(x_3);
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__32___rarg(x_6, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(x_3, x_5);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(x_4, x_5);
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__5), 9, 7);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_5);
lean_closure_set(x_21, 3, x_6);
lean_closure_set(x_21, 4, x_8);
lean_closure_set(x_21, 5, x_2);
lean_closure_set(x_21, 6, x_4);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_22);
lean_closure_set(x_23, 2, x_16);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__39___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__38___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__42___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__41___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__6___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__1), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_3);
lean_closure_set(x_8, 4, x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_7);
x_10 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__9___rarg(x_3, x_4, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__37___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__4), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__40___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc(x_5);
x_15 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_16 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_15);
x_17 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_19, 0, x_18);
x_20 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = l_Ring_toAddCommGroup___rarg(x_5);
x_22 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_21);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_24, 0, x_23);
lean_inc(x_10);
lean_inc(x_11);
x_25 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__5), 8, 6);
lean_closure_set(x_25, 0, x_11);
lean_closure_set(x_25, 1, x_14);
lean_closure_set(x_25, 2, x_1);
lean_closure_set(x_25, 3, x_5);
lean_closure_set(x_25, 4, x_10);
lean_closure_set(x_25, 5, x_2);
x_26 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_27, 0, x_11);
lean_closure_set(x_27, 1, x_26);
lean_closure_set(x_27, 2, x_20);
lean_closure_set(x_27, 3, x_10);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__45___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__46___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__45(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__45___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__48___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_12 = lean_apply_2(x_11, x_10, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_14, x_15, x_16);
x_22 = lean_apply_1(x_21, x_19);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_4);
lean_closure_set(x_23, 4, x_5);
lean_closure_set(x_23, 5, x_7);
lean_closure_set(x_23, 6, x_13);
lean_closure_set(x_23, 7, x_14);
lean_closure_set(x_23, 8, x_20);
x_24 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__47___rarg(x_1, x_2, x_5, x_22, x_23);
return x_24;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___boxed), 20, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__52___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__51___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__55___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__54___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15___rarg(x_3, x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__15___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_8 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(x_2, x_3);
x_9 = lean_apply_1(x_8, x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__2), 6, 5);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_6);
lean_closure_set(x_10, 2, x_7);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_3);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__50___rarg(x_1, x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(x_2, x_3);
x_7 = lean_apply_2(x_6, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__3), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_inc(x_3);
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__53___rarg(x_6, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___rarg(x_3, x_5);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___rarg(x_4, x_5);
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__5), 9, 7);
lean_closure_set(x_21, 0, x_2);
lean_closure_set(x_21, 1, x_4);
lean_closure_set(x_21, 2, x_5);
lean_closure_set(x_21, 3, x_8);
lean_closure_set(x_21, 4, x_6);
lean_closure_set(x_21, 5, x_1);
lean_closure_set(x_21, 6, x_3);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_16);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__58___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__59___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__58(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__58___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__61___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_20, x_19);
return x_21;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_22 = lean_apply_1(x_21, x_19);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1___boxed), 20, 19);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_4);
lean_closure_set(x_23, 4, x_5);
lean_closure_set(x_23, 5, x_9);
lean_closure_set(x_23, 6, x_10);
lean_closure_set(x_23, 7, x_6);
lean_closure_set(x_23, 8, x_11);
lean_closure_set(x_23, 9, x_12);
lean_closure_set(x_23, 10, x_13);
lean_closure_set(x_23, 11, x_14);
lean_closure_set(x_23, 12, x_7);
lean_closure_set(x_23, 13, x_8);
lean_closure_set(x_23, 14, x_15);
lean_closure_set(x_23, 15, x_16);
lean_closure_set(x_23, 16, x_17);
lean_closure_set(x_23, 17, x_18);
lean_closure_set(x_23, 18, x_20);
x_24 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__60___rarg(x_1, x_2, x_5, x_22, x_23);
return x_24;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc(x_13);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_20, 0, x_13);
lean_inc(x_20);
lean_inc(x_5);
lean_inc(x_3);
x_21 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__1___rarg), 5, 3);
lean_closure_set(x_21, 0, x_3);
lean_closure_set(x_21, 1, x_5);
lean_closure_set(x_21, 2, x_20);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_14);
lean_inc(x_7);
x_22 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__1), 6, 4);
lean_closure_set(x_22, 0, x_7);
lean_closure_set(x_22, 1, x_14);
lean_closure_set(x_22, 2, x_2);
lean_closure_set(x_22, 3, x_5);
x_23 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_23, 0, x_15);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__5___rarg), 5, 3);
lean_closure_set(x_24, 0, x_4);
lean_closure_set(x_24, 1, x_5);
lean_closure_set(x_24, 2, x_20);
lean_inc(x_23);
x_25 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_25, 0, x_21);
lean_closure_set(x_25, 1, x_22);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_24);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_14);
lean_inc(x_7);
x_26 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__2), 7, 5);
lean_closure_set(x_26, 0, x_7);
lean_closure_set(x_26, 1, x_14);
lean_closure_set(x_26, 2, x_2);
lean_closure_set(x_26, 3, x_5);
lean_closure_set(x_26, 4, x_8);
lean_inc(x_16);
x_27 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_27, 0, x_16);
lean_inc(x_6);
x_28 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_28, 0, x_27);
lean_closure_set(x_28, 1, x_6);
lean_closure_set(x_28, 2, x_26);
lean_inc(x_17);
x_29 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_29, 0, x_17);
lean_inc(x_9);
x_30 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_30, 0, x_28);
lean_closure_set(x_30, 1, x_29);
lean_closure_set(x_30, 2, x_23);
lean_closure_set(x_30, 3, x_9);
x_31 = lean_alloc_closure((void*)(l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2___boxed), 20, 18);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_2);
lean_closure_set(x_31, 2, x_3);
lean_closure_set(x_31, 3, x_4);
lean_closure_set(x_31, 4, x_5);
lean_closure_set(x_31, 5, x_8);
lean_closure_set(x_31, 6, x_13);
lean_closure_set(x_31, 7, x_14);
lean_closure_set(x_31, 8, x_6);
lean_closure_set(x_31, 9, x_7);
lean_closure_set(x_31, 10, x_9);
lean_closure_set(x_31, 11, x_10);
lean_closure_set(x_31, 12, x_11);
lean_closure_set(x_31, 13, x_12);
lean_closure_set(x_31, 14, x_16);
lean_closure_set(x_31, 15, x_17);
lean_closure_set(x_31, 16, x_25);
lean_closure_set(x_31, 17, x_30);
return x_31;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___boxed), 19, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__64___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__63___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__67___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__66___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__70___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__69___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__73___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__72___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__76___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__75___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__79___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__78___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__82___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__81___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__85___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__84___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_2);
x_6 = l_Matrix_fromBlocks___rarg(x_1, x_2, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 5);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_10);
x_13 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__1), 5, 4);
lean_closure_set(x_13, 0, x_5);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_6);
lean_closure_set(x_13, 3, x_11);
x_14 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__12___rarg(x_7, x_8, x_9, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 5);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
x_13 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__1), 5, 4);
lean_closure_set(x_13, 0, x_6);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_7);
lean_closure_set(x_13, 3, x_11);
x_14 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__18___rarg(x_8, x_9, x_10, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_fromBlocks___rarg(x_1, x_2, x_3, x_4, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__3), 11, 10);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_11);
lean_closure_set(x_13, 5, x_5);
lean_closure_set(x_13, 6, x_6);
lean_closure_set(x_13, 7, x_7);
lean_closure_set(x_13, 8, x_8);
lean_closure_set(x_13, 9, x_9);
x_14 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4), 6, 5);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_10);
lean_closure_set(x_14, 3, x_4);
lean_closure_set(x_14, 4, x_12);
x_15 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__21___rarg(x_7, x_8, x_9, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__62___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__6), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__65___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__68___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__8), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__71___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__74___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__10), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__77___rarg(x_7, x_5, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__11), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__80___rarg(x_7, x_5, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__12), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_3);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_closure_set(x_10, 6, x_6);
lean_closure_set(x_10, 7, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__83___rarg(x_3, x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc(x_5);
x_12 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_13 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_12);
x_14 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_13);
lean_dec(x_13);
x_15 = l_Ring_toAddCommGroup___rarg(x_5);
x_16 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_18, 0, x_17);
lean_inc(x_2);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_11);
x_19 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__7), 8, 6);
lean_closure_set(x_19, 0, x_11);
lean_closure_set(x_19, 1, x_7);
lean_closure_set(x_19, 2, x_1);
lean_closure_set(x_19, 3, x_5);
lean_closure_set(x_19, 4, x_10);
lean_closure_set(x_19, 5, x_2);
lean_inc(x_18);
x_20 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_8);
lean_inc(x_10);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__9), 8, 6);
lean_closure_set(x_21, 0, x_10);
lean_closure_set(x_21, 1, x_8);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_5);
lean_closure_set(x_21, 4, x_11);
lean_closure_set(x_21, 5, x_1);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_18);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_10);
x_24 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__13), 9, 7);
lean_closure_set(x_24, 0, x_10);
lean_closure_set(x_24, 1, x_8);
lean_closure_set(x_24, 2, x_2);
lean_closure_set(x_24, 3, x_5);
lean_closure_set(x_24, 4, x_11);
lean_closure_set(x_24, 5, x_1);
lean_closure_set(x_24, 6, x_7);
x_25 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14___boxed), 2, 1);
lean_closure_set(x_25, 0, x_23);
x_26 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_10);
lean_closure_set(x_26, 2, x_24);
x_27 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_27, 0, x_11);
lean_closure_set(x_27, 1, x_20);
lean_closure_set(x_27, 2, x_22);
lean_closure_set(x_27, 3, x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__25___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__24(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOne___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__26(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__35(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__28___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__43(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_21; 
x_21 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__44___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__56(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__49___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_21; 
x_21 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_21;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_21; 
x_21 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg___boxed(lean_object** _args) {
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
x_20 = l_invertibleMul___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__57___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Invertible_copy_x27___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__86(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_fromBlocks_u2082_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_Matrix_fromBlocks_u2082_u2082Invertible___rarg(x_2, x_1, x_4, x_3, x_5, x_9, x_8, x_7, x_6, x_10, x_11);
x_15 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_15, 0, x_12);
x_16 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_16, 0, x_13);
x_17 = lean_alloc_closure((void*)(l_Matrix_submatrix___rarg), 5, 3);
lean_closure_set(x_17, 0, x_14);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_15);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed), 13, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__5___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__4___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__8___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__7___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__11___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__10___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__14___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__13___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__17___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__16___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__20___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__19___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__23___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__22___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__26___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__25___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__3___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__6___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__9___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__3), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__12___rarg(x_7, x_5, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__4), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__15___rarg(x_7, x_5, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__5), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_3);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_closure_set(x_10, 6, x_6);
lean_closure_set(x_10, 7, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__18___rarg(x_3, x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__21___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__7), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_4);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__24___rarg(x_6, x_4, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_sumComm(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_swap___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc(x_5);
x_12 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_13 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_12);
x_14 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_10);
x_16 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__2), 8, 6);
lean_closure_set(x_16, 0, x_10);
lean_closure_set(x_16, 1, x_7);
lean_closure_set(x_16, 2, x_1);
lean_closure_set(x_16, 3, x_5);
lean_closure_set(x_16, 4, x_11);
lean_closure_set(x_16, 5, x_2);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_10);
x_17 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__6), 9, 7);
lean_closure_set(x_17, 0, x_10);
lean_closure_set(x_17, 1, x_7);
lean_closure_set(x_17, 2, x_1);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_11);
lean_closure_set(x_17, 5, x_2);
lean_closure_set(x_17, 6, x_8);
x_18 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__14___boxed), 2, 1);
lean_closure_set(x_18, 0, x_15);
lean_inc(x_10);
x_19 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_10);
lean_closure_set(x_19, 2, x_17);
x_20 = l_Ring_toAddCommGroup___rarg(x_5);
x_21 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_20);
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_23, 0, x_22);
lean_inc(x_23);
x_24 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_16);
lean_inc(x_11);
x_25 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___lambda__8), 8, 6);
lean_closure_set(x_25, 0, x_11);
lean_closure_set(x_25, 1, x_8);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_5);
lean_closure_set(x_25, 4, x_10);
lean_closure_set(x_25, 5, x_1);
x_26 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_26, 0, x_23);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_27, 0, x_19);
lean_closure_set(x_27, 1, x_24);
lean_closure_set(x_27, 2, x_26);
lean_closure_set(x_27, 3, x_11);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfRightInverse___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Invertible_copy_x27___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_fromBlocks_u2081_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_4);
x_10 = lean_apply_2(x_1, x_4, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_apply_1(x_3, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__4___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__3___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_4);
x_10 = lean_apply_2(x_1, x_4, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_apply_1(x_3, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_4);
x_11 = lean_apply_2(x_1, x_4, x_5);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_apply_1(x_3, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_dec(x_3);
x_5 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_4);
x_11 = lean_apply_2(x_1, x_4, x_5);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_apply_1(x_3, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_dec(x_3);
x_5 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__13___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__12___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__16___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__15___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2___rarg(x_3, x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
x_9 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__2___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(x_2, x_3);
x_10 = lean_apply_1(x_9, x_4);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__2), 6, 5);
lean_closure_set(x_11, 0, x_5);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_8);
lean_closure_set(x_11, 3, x_7);
lean_closure_set(x_11, 4, x_3);
x_12 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__11___rarg(x_1, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(x_2, x_3);
x_7 = lean_apply_2(x_6, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__3), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_closure_set(x_10, 6, x_6);
lean_inc(x_3);
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_9);
x_12 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__14___rarg(x_6, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(x_3, x_5);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(x_4, x_5);
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__5), 9, 7);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_5);
lean_closure_set(x_21, 3, x_6);
lean_closure_set(x_21, 4, x_8);
lean_closure_set(x_21, 5, x_2);
lean_closure_set(x_21, 6, x_4);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_22);
lean_closure_set(x_23, 2, x_16);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__20___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__19___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__23___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__22___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Multiset_disjSum___rarg(x_1, x_2);
x_11 = lean_alloc_closure((void*)(l_Sum_instDecidableEq___rarg), 4, 2);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
x_12 = l_Matrix_semiring___rarg(x_9, x_10, x_11);
x_13 = l_Semiring_toMonoidWithZero___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_Invertible_mulLeft___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_7);
lean_closure_set(x_15, 3, x_8);
x_16 = lean_alloc_closure((void*)(l_Invertible_mulLeft___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_6);
lean_closure_set(x_16, 2, x_7);
lean_closure_set(x_16, 3, x_8);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__26___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__29___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__28___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__33___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__32___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__36___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__35___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27___rarg(x_3, x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
x_9 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__27___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_8 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(x_2, x_3);
x_9 = lean_apply_1(x_8, x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__2), 6, 5);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_6);
lean_closure_set(x_10, 2, x_7);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_3);
x_11 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__31___rarg(x_1, x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(x_2, x_3);
x_7 = lean_apply_2(x_6, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__3), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_inc(x_3);
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_9);
x_12 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__34___rarg(x_6, x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_3);
x_9 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___rarg(x_3, x_5);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___rarg(x_4, x_5);
lean_inc(x_5);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Ring_toAddCommGroup___rarg(x_5);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__5), 9, 7);
lean_closure_set(x_21, 0, x_2);
lean_closure_set(x_21, 1, x_4);
lean_closure_set(x_21, 2, x_5);
lean_closure_set(x_21, 3, x_8);
lean_closure_set(x_21, 4, x_6);
lean_closure_set(x_21, 5, x_1);
lean_closure_set(x_21, 6, x_3);
x_22 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_23, 0, x_9);
lean_closure_set(x_23, 1, x_16);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_10);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Multiset_disjSum___rarg(x_1, x_2);
x_11 = lean_alloc_closure((void*)(l_Sum_instDecidableEq___rarg), 4, 2);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
x_12 = l_Matrix_semiring___rarg(x_9, x_10, x_11);
x_13 = l_Semiring_toMonoidWithZero___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_Invertible_mulRight___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_7);
lean_closure_set(x_15, 3, x_8);
x_16 = lean_alloc_closure((void*)(l_Invertible_mulRight___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_6);
lean_closure_set(x_16, 2, x_7);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__41___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__40___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_List_foldrTR___rarg(x_6, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__44___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_disjSum___rarg(x_1, x_2);
x_10 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_fromBlocksZero_u2082_u2081Invertible___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_8);
x_11 = l_Finset_sum___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__43___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 5);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_11);
x_14 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4), 6, 5);
lean_closure_set(x_14, 0, x_5);
lean_closure_set(x_14, 1, x_6);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_12);
x_15 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__25___rarg(x_8, x_9, x_10, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 5);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
x_14 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4), 6, 5);
lean_closure_set(x_14, 0, x_6);
lean_closure_set(x_14, 1, x_7);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_8);
lean_closure_set(x_14, 4, x_12);
x_15 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__39___rarg(x_9, x_10, x_11, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__2), 12, 11);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
lean_closure_set(x_14, 4, x_12);
lean_closure_set(x_14, 5, x_5);
lean_closure_set(x_14, 6, x_6);
lean_closure_set(x_14, 7, x_7);
lean_closure_set(x_14, 8, x_8);
lean_closure_set(x_14, 9, x_9);
lean_closure_set(x_14, 10, x_10);
x_15 = lean_alloc_closure((void*)(l_Matrix_fromBlocks_u2082_u2082Invertible___rarg___lambda__4), 6, 5);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_11);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_13);
x_16 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__42___rarg(x_8, x_9, x_10, x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_13);
x_24 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_24, 0, x_13);
lean_closure_set(x_24, 1, x_15);
lean_closure_set(x_24, 2, x_17);
lean_closure_set(x_24, 3, x_18);
lean_inc(x_14);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_12, x_14);
lean_inc(x_9);
lean_inc(x_17);
lean_inc(x_22);
lean_inc(x_20);
x_26 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_26, 0, x_20);
lean_closure_set(x_26, 1, x_22);
lean_closure_set(x_26, 2, x_17);
lean_closure_set(x_26, 3, x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Invertible_mulLeft___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_24, x_25, x_26);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_22);
lean_inc(x_18);
lean_inc(x_13);
x_28 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___lambda__1), 12, 10);
lean_closure_set(x_28, 0, x_13);
lean_closure_set(x_28, 1, x_15);
lean_closure_set(x_28, 2, x_17);
lean_closure_set(x_28, 3, x_18);
lean_closure_set(x_28, 4, x_20);
lean_closure_set(x_28, 5, x_22);
lean_closure_set(x_28, 6, x_9);
lean_closure_set(x_28, 7, x_1);
lean_closure_set(x_28, 8, x_2);
lean_closure_set(x_28, 9, x_5);
x_29 = lean_alloc_closure((void*)(l_Matrix_fromBlocks___rarg), 6, 4);
lean_closure_set(x_29, 0, x_13);
lean_closure_set(x_29, 1, x_22);
lean_closure_set(x_29, 2, x_23);
lean_closure_set(x_29, 3, x_18);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_30 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_12, x_14);
x_31 = l_Invertible_mulRight___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__38___rarg(x_1, x_2, x_3, x_4, x_5, x_28, x_29, x_30);
x_32 = l_Equiv_symm___elambda__2___rarg(x_31, x_11);
x_33 = l_Equiv_symm___elambda__2___rarg(x_27, x_32);
lean_inc(x_33);
x_34 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2081_u2081___rarg), 3, 1);
lean_closure_set(x_34, 0, x_33);
x_35 = lean_alloc_closure((void*)(l_Matrix_toBlocks_u2082_u2082___rarg), 3, 1);
lean_closure_set(x_35, 0, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___boxed), 23, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__18___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__1), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_3);
lean_closure_set(x_8, 4, x_4);
x_9 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__4), 3, 2);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_7);
x_10 = l_dotProduct___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__21___rarg(x_3, x_4, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_inc(x_5);
x_12 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_13 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_12);
x_14 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_5);
x_16 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_18);
x_19 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_19, 0, x_18);
lean_inc(x_19);
lean_inc(x_5);
lean_inc(x_3);
x_20 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__1___rarg), 5, 3);
lean_closure_set(x_20, 0, x_3);
lean_closure_set(x_20, 1, x_5);
lean_closure_set(x_20, 2, x_19);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_10);
lean_inc(x_7);
x_21 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__1), 6, 4);
lean_closure_set(x_21, 0, x_7);
lean_closure_set(x_21, 1, x_10);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_5);
x_22 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_22, 0, x_15);
lean_inc(x_22);
x_23 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_23, 0, x_22);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__5___rarg), 5, 3);
lean_closure_set(x_24, 0, x_4);
lean_closure_set(x_24, 1, x_5);
lean_closure_set(x_24, 2, x_19);
x_25 = l_AddGroupWithOne_toAddGroup___rarg(x_16);
lean_dec(x_16);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_10);
lean_inc(x_7);
x_27 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg___lambda__2), 7, 5);
lean_closure_set(x_27, 0, x_7);
lean_closure_set(x_27, 1, x_10);
lean_closure_set(x_27, 2, x_2);
lean_closure_set(x_27, 3, x_5);
lean_closure_set(x_27, 4, x_8);
lean_inc(x_26);
x_28 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_fromBlocks_u2082_u2082Invertible___spec__36___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_28, 0, x_26);
lean_inc(x_6);
x_29 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_6);
lean_closure_set(x_29, 2, x_27);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_8);
lean_inc(x_10);
x_30 = lean_alloc_closure((void*)(l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__1), 6, 4);
lean_closure_set(x_30, 0, x_10);
lean_closure_set(x_30, 1, x_8);
lean_closure_set(x_30, 2, x_2);
lean_closure_set(x_30, 3, x_5);
lean_inc(x_23);
lean_inc(x_10);
x_31 = l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18, x_20, x_10, x_21, x_22, x_23, x_24, x_26, x_29, x_22, x_23, x_30);
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_6);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
return x_32;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOne___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__8(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_fromBlocksZero_u2082_u2081Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__37(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_fromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__45(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__47(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfLeftInverse___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__48(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_24; 
x_24 = l_Matrix_invertibleOfFromBlocksZero_u2081_u2082Invertible___at_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___spec__46___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_6);
return x_24;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_11);
x_14 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_fromBlocks_u2081_u2081Invertible___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = lean_alloc_closure((void*)(l_Matrix_submatrix___rarg), 5, 3);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1;
x_13 = l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_11, x_12, x_12);
x_14 = l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg(x_2, x_1, x_4, x_3, x_5, x_9, x_8, x_7, x_6, x_10, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___rarg), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Matrix_submatrixEquivInvertible___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Invertible_copy_x27___at_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
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
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_fromBlocks_u2082_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_invertibleOfFromBlocks_u2082_u2082Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2___rarg), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__2___rarg), 11, 10);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_6);
lean_closure_set(x_11, 6, x_7);
lean_closure_set(x_11, 7, x_8);
lean_closure_set(x_11, 8, x_9);
lean_closure_set(x_11, 9, x_10);
x_12 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg___boxed), 11, 10);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_6);
lean_closure_set(x_12, 6, x_7);
lean_closure_set(x_12, 7, x_8);
lean_closure_set(x_12, 8, x_9);
lean_closure_set(x_12, 9, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___rarg), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_invertibleEquivFromBlocks_u2082_u2082Invertible___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_fromBlocks_u2081_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_invertibleOfFromBlocks_u2081_u2081Invertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2___rarg), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__2___rarg), 11, 10);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_6);
lean_closure_set(x_11, 6, x_7);
lean_closure_set(x_11, 7, x_8);
lean_closure_set(x_11, 8, x_9);
lean_closure_set(x_11, 9, x_10);
x_12 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg___boxed), 11, 10);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_6);
lean_closure_set(x_12, 6, x_7);
lean_closure_set(x_12, 7, x_8);
lean_closure_set(x_12, 8, x_9);
lean_closure_set(x_12, 9, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___rarg), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_invertibleEquivFromBlocks_u2081_u2081Invertible___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Matrix", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_⊕ᵥ_", 12, 8);
return x_1;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__1;
x_2 = l_Matrix_term___u2295_u1d65_____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix_term___u2295_u1d65_____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ⊕ᵥ ", 8, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__6;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix_term___u2295_u1d65_____closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__9;
x_2 = lean_unsigned_to_nat(66u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__5;
x_2 = l_Matrix_term___u2295_u1d65_____closed__7;
x_3 = l_Matrix_term___u2295_u1d65_____closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__3;
x_2 = lean_unsigned_to_nat(65u);
x_3 = l_Matrix_term___u2295_u1d65_____closed__11;
x_4 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_Matrix_term___u2295_u1d65__() {
_start:
{
lean_object* x_1; 
x_1 = l_Matrix_term___u2295_u1d65_____closed__12;
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1;
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2;
x_3 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3;
x_4 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Sum.elim", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Sum", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("elim", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8;
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Matrix_term___u2295_u1d65_____closed__3;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
x_13 = 0;
x_14 = l_Lean_SourceInfo_fromRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_15);
x_19 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7;
x_20 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12;
lean_inc(x_14);
x_21 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14;
lean_inc(x_14);
x_23 = l_Lean_Syntax_node2(x_14, x_22, x_9, x_11);
x_24 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5;
x_25 = l_Lean_Syntax_node2(x_14, x_24, x_21, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_22 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_23 = 0;
x_24 = l_Lean_SourceInfo_fromRef(x_22, x_23);
lean_dec(x_22);
x_25 = l_Matrix_term___u2295_u1d65_____closed__6;
lean_inc(x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Matrix_term___u2295_u1d65_____closed__3;
x_28 = l_Lean_Syntax_node3(x_24, x_27, x_20, x_26, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Invertible(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_NonsingularInverse(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_PosDef(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_SchurComplement(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Invertible(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_NonsingularInverse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_PosDef(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1 = _init_l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1();
lean_mark_persistent(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__1);
l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__2 = _init_l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__2();
lean_mark_persistent(l_Matrix_fromBlocks_u2081_u2081Invertible___rarg___closed__2);
l_Matrix_term___u2295_u1d65_____closed__1 = _init_l_Matrix_term___u2295_u1d65_____closed__1();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__1);
l_Matrix_term___u2295_u1d65_____closed__2 = _init_l_Matrix_term___u2295_u1d65_____closed__2();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__2);
l_Matrix_term___u2295_u1d65_____closed__3 = _init_l_Matrix_term___u2295_u1d65_____closed__3();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__3);
l_Matrix_term___u2295_u1d65_____closed__4 = _init_l_Matrix_term___u2295_u1d65_____closed__4();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__4);
l_Matrix_term___u2295_u1d65_____closed__5 = _init_l_Matrix_term___u2295_u1d65_____closed__5();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__5);
l_Matrix_term___u2295_u1d65_____closed__6 = _init_l_Matrix_term___u2295_u1d65_____closed__6();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__6);
l_Matrix_term___u2295_u1d65_____closed__7 = _init_l_Matrix_term___u2295_u1d65_____closed__7();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__7);
l_Matrix_term___u2295_u1d65_____closed__8 = _init_l_Matrix_term___u2295_u1d65_____closed__8();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__8);
l_Matrix_term___u2295_u1d65_____closed__9 = _init_l_Matrix_term___u2295_u1d65_____closed__9();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__9);
l_Matrix_term___u2295_u1d65_____closed__10 = _init_l_Matrix_term___u2295_u1d65_____closed__10();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__10);
l_Matrix_term___u2295_u1d65_____closed__11 = _init_l_Matrix_term___u2295_u1d65_____closed__11();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__11);
l_Matrix_term___u2295_u1d65_____closed__12 = _init_l_Matrix_term___u2295_u1d65_____closed__12();
lean_mark_persistent(l_Matrix_term___u2295_u1d65_____closed__12);
l_Matrix_term___u2295_u1d65__ = _init_l_Matrix_term___u2295_u1d65__();
lean_mark_persistent(l_Matrix_term___u2295_u1d65__);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__1);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__2);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__3);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__4);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__5);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__6);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__7);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__8);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__9);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__10);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__11);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__12);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__13);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______macroRules__Matrix__term___u2295_u1d65____1___closed__14);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__1);
l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2 = _init_l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2();
lean_mark_persistent(l_Matrix___aux__Mathlib__LinearAlgebra__Matrix__SchurComplement______unexpand__Sum__elim__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
