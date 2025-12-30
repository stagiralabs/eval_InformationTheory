// Lean compiler output
// Module: Mathlib.Algebra.MvPolynomial.Degrees
// Imports: Init Mathlib.Algebra.MonoidAlgebra.Degree Mathlib.Algebra.MvPolynomial.Rename
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__2(lean_object*);
static lean_object* l_MvPolynomial_totalDegree___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_MvPolynomial_totalDegree___spec__2(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static lean_object* l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE(lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1;
static lean_object* l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1;
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_MvPolynomial_totalDegree___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_le(x_1, x_2);
if (x_3 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
static lean_object* _init_l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Finset_fold___rarg(x_3, lean_box(0), lean_box(0), x_4, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvPolynomial_totalDegree___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1;
x_3 = l_Finsupp_sum___at_MvPolynomial_totalDegree___spec__1___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MvPolynomial_totalDegree___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvPolynomial_totalDegree___rarg___lambda__2), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1___boxed), 2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_MvPolynomial_totalDegree___rarg___closed__1;
x_6 = l_Finset_fold___rarg(x_3, lean_box(0), lean_box(0), x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvPolynomial_totalDegree___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPolynomial_totalDegree___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_totalDegree___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPolynomial_totalDegree(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPolynomial_degreesLE___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPolynomial_degreesLE___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPolynomial_degreesLE___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Degree(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Rename(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_MvPolynomial_Degrees(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Degree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Rename(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1 = _init_l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at_MvPolynomial_totalDegree___spec__2___rarg___closed__1);
l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1 = _init_l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1();
lean_mark_persistent(l_Finset_sup___at_MvPolynomial_totalDegree___spec__3___rarg___closed__1);
l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1 = _init_l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1();
lean_mark_persistent(l_MvPolynomial_totalDegree___rarg___lambda__2___closed__1);
l_MvPolynomial_totalDegree___rarg___closed__1 = _init_l_MvPolynomial_totalDegree___rarg___closed__1();
lean_mark_persistent(l_MvPolynomial_totalDegree___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
