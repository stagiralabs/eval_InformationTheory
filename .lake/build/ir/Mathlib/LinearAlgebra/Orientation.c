// Lean compiler output
// Module: Mathlib.LinearAlgebra.Orientation
// Imports: Init Mathlib.LinearAlgebra.Ray Mathlib.LinearAlgebra.Determinant
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
LEAN_EXPORT lean_object* l_Orientation_reindex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_AlternatingMap_domLCongr___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___rarg(lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsEmpty_oriented(lean_object*);
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10___rarg(lean_object*);
lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Orientation_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsEmpty_oriented___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__2(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detRowAlternating___at_Basis_orientation___spec__4(lean_object*);
static lean_object* l_RingHom_id___at_Orientation_map___spec__2___closed__1;
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_MultilinearMap_compLinearMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Orientation_reindex___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Quot_congr___rarg(lean_object*, lean_object*);
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7(lean_object*);
lean_object* l_AlternatingMap_domDomCongr_u2097___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_orientation(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_eval___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Orientation_reindex(lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___rarg(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_orientation___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Orientation_map(lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detRowAlternating___at_Basis_orientation___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_Perm_sign___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_MultilinearMap_domDomCongr___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_Function_module___rarg(lean_object*);
lean_object* l_AlternatingMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Orientation_map___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_9);
lean_closure_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_LinearEquiv_symm___rarg(x_1, x_1, x_2, x_3, x_4, x_5, x_6, x_6, lean_box(0), lean_box(0), x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg(x_8, lean_box(0), x_2, x_4, lean_box(0), x_3, x_5, lean_box(0), x_9, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_1);
x_13 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Semiring_toModule___rarg(x_11);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_10);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_11);
x_17 = lean_alloc_closure((void*)(l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1___boxed), 9, 8);
lean_closure_set(x_17, 0, x_11);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_6);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_7);
lean_closure_set(x_17, 5, x_16);
lean_closure_set(x_17, 6, x_10);
lean_closure_set(x_17, 7, x_1);
x_18 = lean_alloc_closure((void*)(l_AlternatingMap_domLCongr___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_18, 0, x_11);
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, lean_box(0));
lean_closure_set(x_18, 5, x_14);
lean_closure_set(x_18, 6, x_15);
lean_closure_set(x_18, 7, lean_box(0));
lean_closure_set(x_18, 8, lean_box(0));
lean_closure_set(x_18, 9, x_6);
lean_closure_set(x_18, 10, x_7);
lean_closure_set(x_18, 11, x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___rarg), 1, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___rarg(x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg___boxed), 13, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___rarg(x_9);
x_11 = l_Equiv_subtypeEquiv___rarg(x_10, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_6, x_7, lean_box(0), x_9);
x_11 = l_Quot_congr___rarg(x_10, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Module_Ray_map___at_Orientation_map___spec__5___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Orientation_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_6, x_7, lean_box(0), lean_box(0), x_9);
x_11 = l_Module_Ray_map___at_Orientation_map___spec__5___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_6, x_7, lean_box(0), x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Orientation_map(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Orientation_map___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_compLinearMap___at_Orientation_map___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_AlternatingMap_compLinearMap___at_Orientation_map___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlternatingMap_domLCongr___at_Orientation_map___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_map___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearEquiv_toAddEquiv___at_Orientation_map___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toEquiv___at_Orientation_map___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RayVector_mapLinearEquiv___at_Orientation_map___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_map___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Module_Ray_map___at_Orientation_map___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Equiv_symm___rarg(x_8);
x_11 = lean_alloc_closure((void*)(l_AlternatingMap_domDomCongr_u2097___elambda__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___rarg(x_7);
x_9 = l_Equiv_subtypeEquiv___rarg(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), lean_box(0), x_7);
x_9 = l_Quot_congr___rarg(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Orientation_reindex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), lean_box(0), lean_box(0), x_7);
x_9 = l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), lean_box(0), x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Orientation_reindex(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Orientation_reindex___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_reindex___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlternatingMap_domDomCongr___at_Orientation_reindex___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlternatingMap_domDomCongr_u2097___at_Orientation_reindex___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Orientation_reindex___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_reindex___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_Orientation_reindex___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_Orientation_reindex___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RayVector_mapLinearEquiv___at_Orientation_reindex___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Module_Ray_map___at_Orientation_reindex___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Orientation_reindex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Orientation_reindex___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_1);
x_9 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Semiring_toModule___rarg(x_7);
x_12 = lean_alloc_closure((void*)(l_AlternatingMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed), 6, 5);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_10);
lean_closure_set(x_12, 2, x_4);
lean_closure_set(x_12, 3, x_11);
lean_closure_set(x_12, 4, x_7);
x_13 = lean_alloc_closure((void*)(l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___rarg), 1, 0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IsEmpty_oriented___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_AlternatingMap_constLinearEquivOfIsEmpty___at_IsEmpty_oriented___spec__2___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), lean_box(0));
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_7);
lean_dec(x_7);
x_10 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_1(x_12, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_IsEmpty_oriented(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsEmpty_oriented___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_IsEmpty_oriented___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_IsEmpty_oriented___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_IsEmpty_oriented___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlternatingMap_constOfIsEmpty___at_IsEmpty_oriented___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_rayOfNeZero___at_IsEmpty_oriented___spec__5___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_IsEmpty_oriented___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_rayOfNeZero___at_IsEmpty_oriented___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Basis_toMatrix___at_Basis_orientation___spec__2___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_1(x_3, x_4);
x_8 = lean_apply_2(x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Ring_toAddCommGroup___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__1), 4, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = l_List_foldrTR___rarg(x_9, x_10, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_sum___at_Basis_orientation___spec__8___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Multiset_map___rarg(x_7, x_6);
x_9 = l_Multiset_sum___at_Basis_orientation___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Basis_orientation___spec__7___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_MultilinearMap_domDomCongr___elambda__1___rarg(x_2, x_3, x_5);
x_8 = lean_apply_2(x_6, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Equiv_Perm_sign___rarg(x_1, x_2);
lean_inc(x_5);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__2), 5, 4);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc_n(x_2, 2);
lean_inc_n(x_1, 2);
x_9 = l_Equiv_instFintype___rarg(x_1, x_1, x_2, x_2);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__3), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_8);
x_11 = l_Finset_sum___at_Basis_orientation___spec__7___rarg(x_3, x_4, x_5, x_6, x_7, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Semiring_toModule___rarg(x_5);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = l_Pi_addMonoid___rarg(x_7);
x_9 = l_Pi_Function_module___rarg(x_6);
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4___boxed), 8, 7);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
lean_closure_set(x_10, 6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Orientation_map___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___at_Basis_orientation___spec__10___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_detRowAlternating___at_Basis_orientation___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_3);
x_9 = l_MultilinearMap_mkPiAlgebra___at_Basis_orientation___spec__9___rarg(x_1, lean_box(0), x_3);
x_10 = lean_alloc_closure((void*)(l_LinearMap_proj___at_Basis_orientation___spec__10___rarg), 1, 0);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg(x_3, x_4, x_5, x_8);
x_13 = lean_apply_1(x_12, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Matrix_detRowAlternating___at_Basis_orientation___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_detRowAlternating___at_Basis_orientation___spec__4___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_Basis_toMatrix___at_Basis_orientation___spec__2___rarg), 4, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = l_Matrix_detRowAlternating___at_Basis_orientation___spec__4___rarg(x_1, lean_box(0), x_6, x_7);
x_12 = lean_apply_1(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Basis_det___at_Basis_orientation___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_rayOfNeZero___at_Basis_orientation___spec__13___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Basis_orientation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Basis_det___at_Basis_orientation___spec__1___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, lean_box(0));
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Basis_orientation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Basis_orientation___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Basis_orientation___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Basis_toMatrix___at_Basis_orientation___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Basis_toMatrix___at_Basis_orientation___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_domDomCongr___at_Basis_orientation___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sum___at_Basis_orientation___spec__8___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Basis_orientation___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Multiset_sum___at_Basis_orientation___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Basis_orientation___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_sum___at_Basis_orientation___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_alternatization___at_Basis_orientation___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_alternatization___at_Basis_orientation___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Basis_orientation___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Basis_orientation___spec__11(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_Basis_orientation___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj___at_Basis_orientation___spec__10(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_compLinearMap___at_Basis_orientation___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Basis_det___at_Basis_orientation___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Basis_det___at_Basis_orientation___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_rayOfNeZero___at_Basis_orientation___spec__13___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___at_Basis_orientation___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_rayOfNeZero___at_Basis_orientation___spec__13(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Ray(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Determinant(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Orientation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Ray(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Determinant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Orientation_map___spec__2___closed__1 = _init_l_RingHom_id___at_Orientation_map___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Orientation_map___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
