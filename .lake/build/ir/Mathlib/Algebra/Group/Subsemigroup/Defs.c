// Lean compiler output
// Module: Mathlib.Algebra.Group.Subsemigroup.Defs
// Imports: Init Mathlib.Algebra.Group.Hom.Defs Mathlib.Algebra.Group.InjSurj Mathlib.Data.SetLike.Basic Mathlib.Tactic.FastInstance
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
LEAN_EXPORT lean_object* l_AddMemClass_toAddCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_toSemigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_eqLocus___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_toSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_toAddSemigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instBot(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot(lean_object*);
LEAN_EXPORT lean_object* l_MulHom_eqLocus(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_copy(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulHom_eqLocus___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_toCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_mul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instTop(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_add___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_toAddCommSemigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_eqLocus___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddHom_eqLocus(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddHom_eqLocus___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_toAddSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instMin(lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulMemClass_toCommSemigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemigroup_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubsemigroup_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemigroup_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubsemigroup_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubsemigroup_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubsemigroup_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubsemigroup_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_instMin___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemigroup_instMin___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instMin___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instMin___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_instMin___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_instMin___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubsemigroup_instMin___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHom_eqLocus___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_eqLocus(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_eqLocus___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_eqLocus___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulHom_eqLocus___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_eqLocus___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_eqLocus(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddHom_eqLocus___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_eqLocus___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddHom_eqLocus___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_mul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_2(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_mul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulMemClass_mul___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_add___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMemClass_add___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_add___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddMemClass_add___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_toSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_toSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulMemClass_toSemigroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_toAddSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_toAddSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMemClass_toAddSemigroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_toCommSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_toCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulMemClass_toCommSemigroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_toAddCommSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_toAddCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMemClass_toAddCommSemigroup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulMemClass_subtype___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulMemClass_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulMemClass_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulMemClass_subtype___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulMemClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulMemClass_subtype(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddMemClass_subtype___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMemClass_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMemClass_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMemClass_subtype___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMemClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMemClass_subtype(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Hom_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Subsemigroup_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Hom_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FastInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
