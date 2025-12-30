// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Coeff
// Imports: Init Mathlib.Algebra.MonoidAlgebra.Support Mathlib.Algebra.Polynomial.Basic Mathlib.Algebra.Regular.Basic Mathlib.Data.Nat.Choose.Sum
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
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_lsum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lcoeff___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lcoeff___spec__1(lean_object*, lean_object*);
lean_object* l_Polynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lsum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lsum(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lsum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lcoeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lsum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_lcoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_lsum___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lsum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lsum___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_lcoeff___rarg(lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lsum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_lsum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_lsum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Polynomial_lsum___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = l_Polynomial_coeff___rarg(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_sum___at_Polynomial_lsum___spec__3___rarg(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lsum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Polynomial_sum___at_Polynomial_lsum___spec__2___rarg(x_2, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lsum(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Polynomial_lsum___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lsum___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_lsum___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___at_Polynomial_lsum___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_sum___at_Polynomial_lsum___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lsum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Polynomial_lsum___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lsum___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_lsum(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lcoeff___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lcoeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_coeff___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lcoeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_lcoeff___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_lcoeff___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_lcoeff___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_lcoeff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_lcoeff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Polynomial_coeff___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_constantCoeff___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_constantCoeff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_constantCoeff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Regular_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Coeff(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Regular_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1 = _init_l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Polynomial_lsum___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
