// Lean compiler output
// Module: Mathlib.Algebra.Group.Submonoid.Defs
// Imports: Init Mathlib.Algebra.Group.Hom.Defs Mathlib.Algebra.Group.Subsemigroup.Defs Mathlib.Tactic.FastInstance Mathlib.Data.Set.Insert
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
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot___rarg___boxed(lean_object*);
lean_object* l_AddMemClass_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toMulOneClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_mul(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton(lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toMulOneClass(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_copy(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_one___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddMonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddZeroClass(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toMulOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneMemClass_one(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_add(lean_object*);
LEAN_EXPORT lean_object* l_ZeroMemClass_zero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toMulOneClass(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddZeroClass(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instTop(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_one___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneMemClass_one___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_zero___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow(lean_object*);
LEAN_EXPORT lean_object* l_OneMemClass_one___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instMin(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_one(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulMemClass_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton(lean_object*);
LEAN_EXPORT lean_object* l_OneMemClass_one___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot(lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_toCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_zero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_zero(lean_object*);
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_toCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instBot(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_mul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddZeroClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_instMin___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_instMin___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instMin___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instMin___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instMin___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instMin___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_instMin___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_instUniqueOfSubsingleton___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_instUniqueOfSubsingleton___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_instUniqueOfSubsingleton___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_instUniqueOfSubsingleton___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_instUniqueOfSubsingleton___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_instUniqueOfSubsingleton___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_eqLocusM___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_eqLocusM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_eqLocusM___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_eqLocusM___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_eqLocusM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_eqLocusM___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OneMemClass_one___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OneMemClass_one(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OneMemClass_one___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OneMemClass_one___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OneMemClass_one___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OneMemClass_one___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OneMemClass_one(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZeroMemClass_zero(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ZeroMemClass_zero___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZeroMemClass_zero___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZeroMemClass_zero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZeroMemClass_zero(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoidClass_nSMul___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_nSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddSubmonoidClass_nSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_7, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubmonoidClass_nPow___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_nPow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubmonoidClass_nPow___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toMulOneClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toMulOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubmonoidClass_toMulOneClass___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddZeroClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoidClass_toAddZeroClass___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_SubmonoidClass_toMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubmonoidClass_toMonoid___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg___boxed), 6, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_5);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoidClass_toAddMonoid___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoidClass_toAddMonoid___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubmonoidClass_toMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_toCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubmonoidClass_toCommMonoid___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddSubmonoidClass_toAddMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_toAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoidClass_toAddCommMonoid___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SubmonoidClass_subtype___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubmonoidClass_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubmonoidClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubmonoidClass_subtype(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddSubmonoidClass_subtype___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoidClass_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoidClass_subtype(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submonoid_mul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submonoid_mul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_mul___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_mul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_mul___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_add___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_add___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_add___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_add(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_add___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_add___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_add___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_one___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_one(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_one___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_one___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_one___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_zero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_zero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_zero___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_zero___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_zero___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toMulOneClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubmonoidClass_toMulOneClass___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toMulOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_toMulOneClass___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_AddSubmonoidClass_toAddZeroClass___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_toAddZeroClass___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubmonoidClass_toMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_toMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_AddSubmonoidClass_toAddMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_toAddMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubmonoidClass_toMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_toCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_toCommMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_AddSubmonoidClass_toAddMonoid___rarg(x_1, lean_box(0), x_3, lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_toAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_toAddCommMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submonoid_subtype___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_subtype(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubmonoid_subtype___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_subtype___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubmonoid_subtype(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Hom_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subsemigroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Insert(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Hom_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subsemigroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FastInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Insert(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
