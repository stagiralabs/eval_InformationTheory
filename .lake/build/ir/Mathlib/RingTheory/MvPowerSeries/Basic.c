// Lean compiler output
// Module: Mathlib.RingTheory.MvPowerSeries.Basic
// Imports: Init Mathlib.Algebra.Order.Antidiag.Finsupp Mathlib.Data.Finsupp.Antidiagonal Mathlib.Data.Finsupp.Weight Mathlib.Tactic.Linarith Mathlib.LinearAlgebra.Pi Mathlib.Algebra.MvPolynomial.Eval
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
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_map___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_MvPolynomial_coeToMvPowerSeries___closed__1;
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddMonoid___rarg(lean_object*);
extern lean_object* l_Nat_instAddMonoid;
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddGroup(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1;
static lean_object* l_MvPowerSeries_constantCoeff___closed__2;
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommGroup___rarg(lean_object*);
static lean_object* l_MvPowerSeries_constantCoeff___closed__1;
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPowerSeries_coeff___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_MvPolynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPowerSeries_coeff___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_ringHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries___rarg(lean_object*, lean_object*);
lean_object* l_Function_eval___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff(lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg(lean_object*);
static lean_object* l_MvPowerSeries_constantCoeff___closed__3;
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_ringHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instInhabited___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPowerSeries_instInhabited___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instZero___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPowerSeries_instZero___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instAddMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instAddGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instAddCommMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instAddCommGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MvPowerSeries_instModule___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MvPowerSeries_instModule(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
static lean_object* _init_l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPowerSeries_coeff___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_coeff___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPowerSeries_coeff___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MvPowerSeries_coeff___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_proj___at_MvPowerSeries_coeff___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_coeff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPowerSeries_coeff___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_MvPowerSeries_constantCoeff___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_instAddMonoid;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_MvPowerSeries_constantCoeff___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MvPowerSeries_constantCoeff___closed__1;
x_2 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MvPowerSeries_constantCoeff___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MvPowerSeries_constantCoeff___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_MvPowerSeries_constantCoeff___closed__3;
x_5 = lean_alloc_closure((void*)(l_MvPowerSeries_constantCoeff___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_constantCoeff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPowerSeries_constantCoeff(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MvPowerSeries_map___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MvPowerSeries_map(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPolynomial_coeff___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_toMvPowerSeries___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_toMvPowerSeries___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_toMvPowerSeries(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_MvPolynomial_coeToMvPowerSeries___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvPolynomial_toMvPowerSeries___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeToMvPowerSeries___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeToMvPowerSeries(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_ringHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeToMvPowerSeries___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_ringHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeToMvPowerSeries_ringHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_MvPowerSeries_map___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_MvPolynomial_coeToMvPowerSeries___closed__1;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPolynomial_coeToMvPowerSeries_algHom___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_comp___at_MvPolynomial_coeToMvPowerSeries_algHom___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeToMvPowerSeries_algHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvPolynomial_coeToMvPowerSeries_algHom___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Antidiag_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Antidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Weight(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Eval(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Antidiag_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Antidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Weight(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Eval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1 = _init_l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_MvPowerSeries_coeff___spec__2___closed__1);
l_MvPowerSeries_constantCoeff___closed__1 = _init_l_MvPowerSeries_constantCoeff___closed__1();
lean_mark_persistent(l_MvPowerSeries_constantCoeff___closed__1);
l_MvPowerSeries_constantCoeff___closed__2 = _init_l_MvPowerSeries_constantCoeff___closed__2();
lean_mark_persistent(l_MvPowerSeries_constantCoeff___closed__2);
l_MvPowerSeries_constantCoeff___closed__3 = _init_l_MvPowerSeries_constantCoeff___closed__3();
lean_mark_persistent(l_MvPowerSeries_constantCoeff___closed__3);
l_MvPolynomial_coeToMvPowerSeries___closed__1 = _init_l_MvPolynomial_coeToMvPowerSeries___closed__1();
lean_mark_persistent(l_MvPolynomial_coeToMvPowerSeries___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
