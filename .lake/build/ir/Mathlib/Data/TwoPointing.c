// Lean compiler output
// Module: Mathlib.Data.TwoPointing
// Imports: Init Mathlib.Logic.Nontrivial.Defs Mathlib.Logic.Nonempty Mathlib.Tactic.Simps.Basic
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
LEAN_EXPORT lean_object* l_TwoPointing_swap(lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_swap___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_prod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqTwoPointing___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_TwoPointing_0__decEqTwoPointing____x40_Mathlib_Data_TwoPointing___hyg_285____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqTwoPointing(lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_instInhabitedBool;
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_sum___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_sum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_sum___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_pi(lean_object*, lean_object*);
static lean_object* l_TwoPointing_bool___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_TwoPointing_0__decEqTwoPointing____x40_Mathlib_Data_TwoPointing___hyg_285_(lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_bool;
LEAN_EXPORT lean_object* l_TwoPointing_prop;
LEAN_EXPORT lean_object* l_TwoPointing_swap___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_TwoPointing_0__decEqTwoPointing____x40_Mathlib_Data_TwoPointing___hyg_285____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l_instDecidableEqProd___rarg(x_1, x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_TwoPointing_0__decEqTwoPointing____x40_Mathlib_Data_TwoPointing___hyg_285_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_TwoPointing_0__decEqTwoPointing____x40_Mathlib_Data_TwoPointing___hyg_285____rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqTwoPointing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l_instDecidableEqProd___rarg(x_1, x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqTwoPointing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableEqTwoPointing___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_swap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_swap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoPointing_swap___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_swap___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TwoPointing_swap___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_TwoPointing_pi___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_TwoPointing_pi___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TwoPointing_pi___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TwoPointing_pi___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_pi___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TwoPointing_pi___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_prod___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_1);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_20 = x_2;
} else {
 lean_dec_ref(x_2);
 x_20 = lean_box(0);
}
if (lean_is_scalar(x_20)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_20;
}
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_TwoPointing_prod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TwoPointing_prod___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_sum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_dec(x_5);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_TwoPointing_sum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TwoPointing_sum___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_sum___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TwoPointing_sum___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_TwoPointing_bool___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 0;
x_2 = 1;
x_3 = lean_box(x_1);
x_4 = lean_box(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_TwoPointing_bool() {
_start:
{
lean_object* x_1; 
x_1 = l_TwoPointing_bool___closed__1;
return x_1;
}
}
static lean_object* _init_l_TwoPointing_instInhabitedBool() {
_start:
{
lean_object* x_1; 
x_1 = l_TwoPointing_bool;
return x_1;
}
}
static lean_object* _init_l_TwoPointing_prop() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1, 0, lean_box(0));
lean_ctor_set(x_1, 1, lean_box(0));
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Nontrivial_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Nonempty(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Simps_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_TwoPointing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Nontrivial_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Nonempty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Simps_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_TwoPointing_bool___closed__1 = _init_l_TwoPointing_bool___closed__1();
lean_mark_persistent(l_TwoPointing_bool___closed__1);
l_TwoPointing_bool = _init_l_TwoPointing_bool();
lean_mark_persistent(l_TwoPointing_bool);
l_TwoPointing_instInhabitedBool = _init_l_TwoPointing_instInhabitedBool();
lean_mark_persistent(l_TwoPointing_instInhabitedBool);
l_TwoPointing_prop = _init_l_TwoPointing_prop();
lean_mark_persistent(l_TwoPointing_prop);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
