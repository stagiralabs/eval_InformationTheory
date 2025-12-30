// Lean compiler output
// Module: Mathlib.Algebra.Algebra.Tower
// Imports: Init Mathlib.Algebra.Algebra.Equiv Mathlib.LinearAlgebra.Span.Basic
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
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_lsmul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_lsmul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Algebra_lsmul___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_AddHomClass_toAddHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_lsmul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1;
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Algebra_lsmul___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2;
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Algebra_lsmul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Algebra_lsmul___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Algebra_lsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_8);
lean_closure_set(x_12, 2, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_Algebra_lsmul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Algebra_lsmul___rarg___boxed), 11, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Algebra_lsmul___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Algebra_lsmul___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_DistribMulAction_toLinearMap___at_Algebra_lsmul___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Algebra_lsmul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Algebra_lsmul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Algebra_lsmul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Algebra_lsmul(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_IsScalarTower_toAlgHom___rarg___boxed), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsScalarTower_toAlgHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsScalarTower_toAlgHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IsScalarTower_toAlgHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___lambda__1), 2, 0);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AlgHom_restrictScalars___rarg___boxed), 11, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHomClass_toMonoidHom___at_AlgHom_restrictScalars___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHomClass_toRingHom___at_AlgHom_restrictScalars___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgHom_restrictScalars___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_AlgHom_restrictScalars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgHom_restrictScalars(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___lambda__2), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AlgEquiv_restrictScalars___rarg___boxed), 11, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_AlgEquiv_restrictScalars___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulEquivClass_toMulEquiv___at_AlgEquiv_restrictScalars___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AddHomClass_toAddHom___at_AlgEquiv_restrictScalars___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddEquivClass_toAddEquiv___at_AlgEquiv_restrictScalars___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquivClass_toRingEquiv___at_AlgEquiv_restrictScalars___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgEquiv_restrictScalars___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_AlgEquiv_restrictScalars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgEquiv_restrictScalars(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Span_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Algebra_Tower(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Span_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1 = _init_l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Algebra_lsmul___spec__2___closed__1);
l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_AlgHom_restrictScalars___spec__3___rarg___closed__1);
l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1 = _init_l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1();
lean_mark_persistent(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__1);
l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2 = _init_l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2();
lean_mark_persistent(l_EquivLike_toEquiv___at_AlgEquiv_restrictScalars___spec__3___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
