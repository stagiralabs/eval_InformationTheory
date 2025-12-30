// Lean compiler output
// Module: Mathlib.RingTheory.Polynomial.Basic
// Imports: Init Mathlib.Algebra.CharP.Defs Mathlib.Algebra.GeomSum Mathlib.Algebra.MvPolynomial.CommRing Mathlib.Algebra.MvPolynomial.Equiv Mathlib.Algebra.Polynomial.BigOperators Mathlib.RingTheory.Noetherian.Basic
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
LEAN_EXPORT lean_object* l_Polynomial_degreeLT(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLE___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_leadingCoeff(lean_object*);
static lean_object* l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_leadingCoeffNth___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_leadingCoeffNth___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLE___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_degreeLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLT___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_degreeLE___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLT___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_degreeLE(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Ideal_leadingCoeffNth___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_leadingCoeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial___rarg(lean_object*, lean_object*);
lean_object* l_Polynomial_lcoeff___rarg(lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLE___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg(x_1, x_2, lean_box(0), x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Polynomial_degreeLE___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Polynomial_degreeLE___spec__5___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_lcoeff___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_6 = l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg(x_1, x_5, lean_box(0), x_4);
lean_dec(x_4);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Polynomial_degreeLE___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_iInf___at_Polynomial_degreeLE___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Polynomial_degreeLE___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_iInf___at_Polynomial_degreeLE___spec__5___rarg(x_1, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_degreeLE___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLE___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_degreeLE___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_comap___at_Polynomial_degreeLE___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_ker___at_Polynomial_degreeLE___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_Polynomial_degreeLE___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLE___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Polynomial_degreeLE___spec__5___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_degreeLE___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLE___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_degreeLE___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLT___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg(x_1, x_2, lean_box(0), x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Polynomial_degreeLT___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_Polynomial_degreeLT___spec__5___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_lcoeff___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_6 = l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg(x_1, x_5, lean_box(0), x_4);
lean_dec(x_4);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Polynomial_degreeLT___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_iInf___at_Polynomial_degreeLT___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Polynomial_degreeLT___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_iInf___at_Polynomial_degreeLT___spec__5___rarg(x_1, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_degreeLT___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_degreeLT___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_degreeLT___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_comap___at_Polynomial_degreeLT___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_ker___at_Polynomial_degreeLT___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_Polynomial_degreeLT___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Polynomial_degreeLT___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Polynomial_degreeLT___spec__5___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_degreeLT___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeLT___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_degreeLT___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_ofPolynomial___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_ofPolynomial___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_ofPolynomial___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_degreeLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_degreeLE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_degreeLE___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_degreeLE___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_degreeLE___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_leadingCoeffNth___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Ideal_leadingCoeffNth___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Polynomial_lcoeff___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
x_6 = l_Ideal_degreeLE___rarg(x_1, x_2, x_5);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_8 = l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg(x_1, x_7, lean_box(0), x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_leadingCoeffNth___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Ideal_leadingCoeffNth___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Ideal_leadingCoeffNth___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_map___at_Ideal_leadingCoeffNth___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_leadingCoeffNth___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_leadingCoeffNth___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iSup___at_Ideal_leadingCoeff___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_leadingCoeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Ideal_leadingCoeffNth___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_iSup___at_Ideal_leadingCoeff___spec__1___rarg(x_1, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_leadingCoeff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_leadingCoeff___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Ideal_leadingCoeff___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iSup___at_Ideal_leadingCoeff___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GeomSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_CommRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Polynomial_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GeomSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_CommRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1 = _init_l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Polynomial_degreeLE___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
