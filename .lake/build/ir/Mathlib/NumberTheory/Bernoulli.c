// Lean compiler output
// Module: Mathlib.NumberTheory.Bernoulli
// Imports: Init Mathlib.Algebra.BigOperators.Field Mathlib.RingTheory.PowerSeries.Inverse Mathlib.RingTheory.PowerSeries.WellKnown
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
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bernoulli(lean_object*);
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2;
static lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_sub(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(lean_object*);
lean_object* l_Nat_factorial(lean_object*);
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___rarg(lean_object*, lean_object*);
static lean_object* l_bernoulli___closed__1;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
lean_object* l_PowerSeries_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_bernoulli_x27___spec__2(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bernoulliPowerSeries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___rarg(lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bernoulli_x27(lean_object*);
lean_object* l_Nat_fast__choose(lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
static lean_object* l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1;
static lean_object* _init_l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_add), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_bernoulli_x27___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2;
x_3 = l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_bernoulli_x27___spec__2(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_bernoulli_x27___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = l_Nat_fast__choose(x_1, x_3);
x_5 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_4);
x_6 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
lean_inc(x_3);
x_7 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_3);
x_8 = l_Rat_sub(x_6, x_7);
x_9 = l_Rat_add(x_8, x_2);
x_10 = l_Rat_div(x_5, x_9);
lean_dec(x_5);
x_11 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(x_3);
x_12 = l_Rat_mul(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
static lean_object* _init_l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2;
lean_inc(x_1);
x_3 = l_List_ofFn___rarg(x_1, x_2);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1;
x_5 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Finset_sum___at_bernoulli_x27___spec__1___rarg(x_3, x_5);
x_7 = l_Rat_sub(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_bernoulli_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_bernoulli_x27___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at_bernoulli_x27___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_2);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(x_2);
x_5 = l_Nat_factorial(x_2);
lean_dec(x_2);
x_6 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_5);
x_7 = l_Rat_div(x_4, x_6);
lean_dec(x_4);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_bernoulli_x27PowerSeries___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_PowerSeries_mk___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_bernoulli_x27PowerSeries___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bernoulli_x27PowerSeries___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bernoulli_x27PowerSeries(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_bernoulli___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1;
x_2 = l_Rat_neg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bernoulli(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = l_bernoulli___closed__1;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Int_pow(x_3, x_1);
lean_dec(x_3);
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_nat_pow(x_6, x_1);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3(x_1);
x_10 = l_Rat_mul(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_2);
x_4 = l_bernoulli(x_2);
x_5 = l_Nat_factorial(x_2);
lean_dec(x_2);
x_6 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_5);
x_7 = l_Rat_div(x_4, x_6);
lean_dec(x_4);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_bernoulliPowerSeries___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_PowerSeries_mk___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bernoulliPowerSeries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_bernoulliPowerSeries___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bernoulliPowerSeries___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bernoulliPowerSeries(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerSeries_Inverse(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerSeries_WellKnown(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Bernoulli(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerSeries_Inverse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerSeries_WellKnown(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1 = _init_l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1();
lean_mark_persistent(l_Multiset_sum___at_bernoulli_x27___spec__2___closed__1);
l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2 = _init_l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2();
lean_mark_persistent(l_Multiset_sum___at_bernoulli_x27___spec__2___closed__2);
l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1 = _init_l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1();
lean_mark_persistent(l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__1);
l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2 = _init_l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2();
lean_mark_persistent(l___private_Batteries_WF_0__WellFounded_fixC___at_bernoulli_x27___spec__3___closed__2);
l_bernoulli___closed__1 = _init_l_bernoulli___closed__1();
lean_mark_persistent(l_bernoulli___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
