// Lean compiler output
// Module: Mathlib.RingTheory.IntegralClosure.IsIntegralClosure.Basic
// Imports: Init Mathlib.Algebra.Polynomial.Roots Mathlib.LinearAlgebra.FiniteDimensional.Defs Mathlib.RingTheory.IntegralClosure.IsIntegralClosure.Defs Mathlib.RingTheory.IntegralClosure.Algebra.Basic Mathlib.RingTheory.FiniteType Mathlib.RingTheory.Polynomial.IntegralNormalization Mathlib.RingTheory.Polynomial.ScaleRoots
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
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_RingHom_toAlgebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_integralClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure(lean_object*, lean_object*, lean_object*);
static lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg___boxed(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1;
lean_inc(x_5);
x_10 = l_RingHom_toAlgebra_x27___rarg(x_5, x_5, x_9, lean_box(0));
lean_dec(x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg___boxed), 1, 0);
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
lean_inc(x_7);
x_12 = l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg(x_1, x_2, x_4, x_6, x_7, x_8, x_9, lean_box(0));
x_13 = l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_11, x_12);
lean_dec(x_7);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg___boxed), 4, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___lambda__1), 2, 0);
x_14 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg___boxed), 4, 3);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_11);
lean_closure_set(x_15, 2, lean_box(0));
return x_15;
}
}
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = l_integralClosure___rarg(x_2, x_4);
lean_inc(x_8);
x_10 = l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_8, x_9, x_8, lean_box(0), x_6);
x_11 = l_integralClosure___rarg(x_3, x_5);
x_12 = l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_8, x_9, x_8, x_10, x_11, lean_box(0));
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgHom_mapIntegralClosure___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_subtype___at_AlgHom_mapIntegralClosure___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
LEAN_EXPORT lean_object* l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_RingHom_comp___at_AlgHom_mapIntegralClosure___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgHom_comp___at_AlgHom_mapIntegralClosure___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
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
LEAN_EXPORT lean_object* l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgHom_restrictDomain___at_AlgHom_mapIntegralClosure___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
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
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MonoidHomClass_toMonoidHom___at_AlgHom_mapIntegralClosure___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
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
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_RingHomClass_toRingHom___at_AlgHom_mapIntegralClosure___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
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
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_RingHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
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
LEAN_EXPORT lean_object* l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_AlgHom_codRestrict___at_AlgHom_mapIntegralClosure___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
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
LEAN_EXPORT lean_object* l_AlgHom_mapIntegralClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgHom_mapIntegralClosure___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Equiv_symm___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5___rarg), 4, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
lean_inc(x_2);
x_8 = l_AlgHom_mapIntegralClosure___rarg(x_1, x_2, x_3, x_4, x_5, x_7);
x_9 = l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_10 = lean_alloc_closure((void*)(l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = l_AlgHom_mapIntegralClosure___rarg(x_1, x_3, x_2, x_5, x_4, x_10);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgEquiv_mapIntegralClosure___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgEquiv_toRingEquiv___at_AlgEquiv_mapIntegralClosure___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgEquiv_symm___at_AlgEquiv_mapIntegralClosure___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgHomClass_toAlgHom___at_AlgEquiv_mapIntegralClosure___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_AlgEquiv_ofAlgHom___at_AlgEquiv_mapIntegralClosure___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
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
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_mapIntegralClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AlgEquiv_mapIntegralClosure___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Roots(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FiniteDimensional_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralClosure_IsIntegralClosure_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralClosure_Algebra_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_FiniteType(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_IntegralNormalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_ScaleRoots(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_IntegralClosure_IsIntegralClosure_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Roots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FiniteDimensional_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralClosure_IsIntegralClosure_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralClosure_Algebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_FiniteType(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_IntegralNormalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_ScaleRoots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1 = _init_l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1();
lean_mark_persistent(l_IsScalarTower_toAlgHom___at_AlgHom_mapIntegralClosure___spec__2___rarg___closed__1);
l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_AlgHom_mapIntegralClosure___spec__8___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
