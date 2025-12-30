// Lean compiler output
// Module: Mathlib.RingTheory.Localization.Algebra
// Imports: Init Mathlib.Algebra.Module.LocalizedModule.IsLocalization Mathlib.RingTheory.Ideal.Maps Mathlib.RingTheory.Localization.BaseChange Mathlib.RingTheory.Localization.Basic Mathlib.RingTheory.Localization.Ideal Mathlib.RingTheory.PolynomialAlgebra
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
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_AlgHom_toKerIsLocalization___spec__6___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_AlgHom_toKerIsLocalization___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg(x_1, x_2, x_4, lean_box(0), x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg(x_1, x_2, x_4, lean_box(0), x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_RingHom_toKerIsLocalization___rarg___boxed), 7, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_comap___at_RingHom_toKerIsLocalization___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingHom_ker___at_RingHom_toKerIsLocalization___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHom_toKerIsLocalization___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_RingHom_toKerIsLocalization(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg(x_3, lean_box(0), x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg(x_3, lean_box(0), x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_AlgHom_toKerIsLocalization___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg(x_1, lean_box(0), x_3, x_5, lean_box(0), x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg(x_1, lean_box(0), x_3, x_5, lean_box(0), x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_12, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg___boxed), 11, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29) {
_start:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg(x_1, lean_box(0), x_4, x_5, x_2);
x_31 = l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg(x_1, lean_box(0), x_7, x_8, x_2);
x_32 = lean_alloc_closure((void*)(l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg___boxed), 11, 10);
lean_closure_set(x_32, 0, x_16);
lean_closure_set(x_32, 1, lean_box(0));
lean_closure_set(x_32, 2, x_20);
lean_closure_set(x_32, 3, x_22);
lean_closure_set(x_32, 4, x_30);
lean_closure_set(x_32, 5, x_31);
lean_closure_set(x_32, 6, lean_box(0));
lean_closure_set(x_32, 7, lean_box(0));
lean_closure_set(x_32, 8, x_29);
lean_closure_set(x_32, 9, lean_box(0));
return x_32;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgHom_toKerIsLocalization___rarg___boxed), 29, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submonoid_map___at_AlgHom_toKerIsLocalization___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Algebra_algebraMapSubmonoid___at_AlgHom_toKerIsLocalization___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_AlgHom_toKerIsLocalization___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_AlgHom_toKerIsLocalization___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_comap___at_AlgHom_toKerIsLocalization___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_ker___at_AlgHom_toKerIsLocalization___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_toKerIsLocalization___at_AlgHom_toKerIsLocalization___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toKerIsLocalization___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_30; 
x_30 = l_AlgHom_toKerIsLocalization___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_30;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_LocalizedModule_IsLocalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Maps(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_BaseChange(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Ideal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PolynomialAlgebra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Localization_Algebra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_LocalizedModule_IsLocalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Maps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_BaseChange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PolynomialAlgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1 = _init_l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_RingHom_toKerIsLocalization___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
