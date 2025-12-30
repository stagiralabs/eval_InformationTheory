// Lean compiler output
// Module: Mathlib.NumberTheory.PellMatiyasevic
// Imports: Init Mathlib.Data.Nat.Prime.Basic Mathlib.NumberTheory.Zsqrtd.Basic
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
LEAN_EXPORT lean_object* l_Pell_xn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_xz___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_pell___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_xn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_yz(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_yn___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Pell_pell___closed__1;
LEAN_EXPORT lean_object* l_Pell_pellZd___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_az(lean_object*);
LEAN_EXPORT lean_object* l_Pell_xz(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_yz___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_yn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter___rarg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_pellZd(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_pell(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_IsPell_match__1_splitter(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_nat_mul(x_1, x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Pell_pell___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pell_pell(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = l_Pell_pell(x_1, lean_box(0), x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_nat_mul(x_9, x_1);
x_11 = l___private_Mathlib_NumberTheory_PellMatiyasevic_0__Pell_d(x_1, lean_box(0));
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_nat_mul(x_11, x_12);
lean_dec(x_11);
x_14 = lean_nat_add(x_10, x_13);
lean_dec(x_13);
lean_dec(x_10);
x_15 = lean_nat_mul(x_12, x_1);
lean_dec(x_12);
x_16 = lean_nat_add(x_9, x_15);
lean_dec(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_Pell_pell___closed__1;
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Pell_pell___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_pell(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_xn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Pell_pell(x_1, lean_box(0), x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pell_xn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_xn(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_yn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Pell_pell(x_1, lean_box(0), x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pell_yn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_yn(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_xz(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Pell_xn(x_1, lean_box(0), x_3);
x_5 = lean_nat_to_int(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pell_xz___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_xz(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_yz(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Pell_yn(x_1, lean_box(0), x_3);
x_5 = lean_nat_to_int(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pell_yz___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_yz(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_az(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_pellZd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Pell_xn(x_1, lean_box(0), x_3);
x_5 = lean_nat_to_int(x_4);
x_6 = l_Pell_yn(x_1, lean_box(0), x_3);
x_7 = lean_nat_to_int(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pell_pellZd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pell_pellZd(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Zsqrtd_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_PellMatiyasevic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Zsqrtd_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Pell_pell___closed__1 = _init_l_Pell_pell___closed__1();
lean_mark_persistent(l_Pell_pell___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
