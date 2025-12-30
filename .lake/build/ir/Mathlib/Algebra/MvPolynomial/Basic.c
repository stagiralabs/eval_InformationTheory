// Lean compiler output
// Module: Mathlib.Algebra.MvPolynomial.Basic
// Imports: Init Mathlib.Algebra.Algebra.Tower Mathlib.Algebra.GroupWithZero.Divisibility Mathlib.Algebra.Regular.Pow Mathlib.Algebra.MonoidAlgebra.Support Mathlib.Data.Finsupp.Antidiagonal Mathlib.Order.SymmDiff Mathlib.RingTheory.Adjoin.Basic Mathlib.Algebra.MonoidAlgebra.Basic
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
uint8_t l_Finsupp_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finsupp_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidAlgebra_unique___rarg(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1;
extern lean_object* l_Nat_instAddMonoid;
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPolynomial_lcoeff___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_support___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_support(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeff(lean_object*, lean_object*, lean_object*);
static lean_object* l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1;
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_unique___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_MvPolynomial_decidableEqMvPolynomial___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_support___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_unique___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_unique(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_support___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_MvPolynomial_decidableEqMvPolynomial___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Finsupp_instDecidableEq___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Finsupp_instDecidableEq___rarg(x_6, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_decidableEqMvPolynomial___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_MvPolynomial_decidableEqMvPolynomial___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_decidableEqMvPolynomial___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_decidableEqMvPolynomial(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_unique___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidAlgebra_unique___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_unique(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPolynomial_unique___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_unique___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPolynomial_unique___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_support___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_support(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_support___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_support___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvPolynomial_support___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_support___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_support(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_coeff___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeff(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvPolynomial_coeff___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_coeffAddMonoidHom___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeffAddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPolynomial_lcoeff___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvPolynomial_coeff___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_lcoeff___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MvPolynomial_lcoeff___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_lcoeff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_lcoeff(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Nat_instAddMonoid;
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_box(0);
x_7 = lean_alloc_closure((void*)(l_MvPolynomial_constantCoeff___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l_MvPolynomial_coeff___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPolynomial_constantCoeff___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_constantCoeff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_constantCoeff(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MvPolynomial_coeffsIn___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_coeffsIn___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_coeffsIn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvPolynomial_coeffsIn(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Divisibility(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Regular_Pow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Antidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SymmDiff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Adjoin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_MvPolynomial_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Divisibility(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Regular_Pow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Antidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SymmDiff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Adjoin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1 = _init_l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1();
lean_mark_persistent(l_MvPolynomial_decidableEqMvPolynomial___rarg___closed__1);
l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1 = _init_l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_MvPolynomial_lcoeff___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
