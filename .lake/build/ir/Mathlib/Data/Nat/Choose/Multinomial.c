// Lean compiler output
// Module: Mathlib.Data.Nat.Choose.Multinomial
// Imports: Init Mathlib.Algebra.BigOperators.Fin Mathlib.Algebra.Order.Antidiag.Pi Mathlib.Data.Nat.Choose.Sum Mathlib.Data.Nat.Factorial.BigOperators Mathlib.Data.Nat.Factorial.DoubleFactorial Mathlib.Data.Fin.VecNotation Mathlib.Data.Finset.Sym Mathlib.Data.Finsupp.Multiset
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
LEAN_EXPORT lean_object* l_Nat_multinomial___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_Finsupp_multinomial___rarg___closed__2;
static lean_object* l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1;
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_multinomial(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod___at_Finsupp_multinomial___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_multinomial___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod___at_Finsupp_multinomial___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_multinomial(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_multinomial___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_toFinsupp___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Multiset_multinomial___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Nat_multinomial___spec__2(lean_object*);
lean_object* l_Nat_factorial(lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Nat_multinomial___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Finsupp_multinomial___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_multinomial___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_multinomial(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Nat_multinomial___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_multinomial___rarg(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_multinomial___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Nat_multinomial___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Nat_multinomial___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Nat_multinomial___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Nat_multinomial___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Nat_multinomial___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1;
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Nat_multinomial___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_prod___at_Nat_multinomial___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_multinomial___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_Nat_factorial(x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_multinomial___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Finset_sum___at_Nat_multinomial___spec__1___rarg(x_1, x_2);
x_4 = l_Nat_factorial(x_3);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Nat_multinomial___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Finset_prod___at_Nat_multinomial___spec__2___rarg(x_1, x_5);
x_7 = lean_nat_div(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_multinomial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_multinomial___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_multinomial___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_multinomial___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Finsupp_multinomial___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Finset_sum___at_Finsupp_multinomial___spec__2___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_multinomial___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_multinomial___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1;
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_multinomial___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_prod___at_Finsupp_multinomial___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod___at_Finsupp_multinomial___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Finset_prod___at_Finsupp_multinomial___spec__4___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod___at_Finsupp_multinomial___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_prod___at_Finsupp_multinomial___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_factorial(x_2);
return x_3;
}
}
static lean_object* _init_l_Finsupp_multinomial___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finsupp_multinomial___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Finsupp_multinomial___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finsupp_multinomial___rarg___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Finsupp_multinomial___rarg___closed__1;
lean_inc(x_1);
x_3 = l_Finsupp_sum___at_Finsupp_multinomial___spec__1___rarg(x_1, x_2);
x_4 = l_Nat_factorial(x_3);
lean_dec(x_3);
x_5 = l_Finsupp_multinomial___rarg___closed__2;
x_6 = l_Finsupp_prod___at_Finsupp_multinomial___spec__3___rarg(x_1, x_5);
x_7 = lean_nat_div(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_multinomial___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_multinomial___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_multinomial___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_multinomial___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_multinomial___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Multiset_toFinsupp___rarg(x_1);
x_4 = l_AddEquiv_instEquivLike___elambda__2___rarg(x_3, x_2);
x_5 = l_Finsupp_multinomial___rarg(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_multinomial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_multinomial___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Antidiag_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorial_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorial_DoubleFactorial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_VecNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Multiset(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Choose_Multinomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Antidiag_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorial_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorial_DoubleFactorial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_VecNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1 = _init_l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at_Nat_multinomial___spec__1___rarg___closed__1);
l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1 = _init_l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1();
lean_mark_persistent(l_Finset_prod___at_Nat_multinomial___spec__2___rarg___closed__1);
l_Finsupp_multinomial___rarg___closed__1 = _init_l_Finsupp_multinomial___rarg___closed__1();
lean_mark_persistent(l_Finsupp_multinomial___rarg___closed__1);
l_Finsupp_multinomial___rarg___closed__2 = _init_l_Finsupp_multinomial___rarg___closed__2();
lean_mark_persistent(l_Finsupp_multinomial___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
