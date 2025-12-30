// Lean compiler output
// Module: Mathlib.Data.Nat.BinaryRec
// Imports: Init Batteries.Tactic.Alias Mathlib.Init
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
LEAN_EXPORT lean_object* l_Nat_bit(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_bitCasesOn(lean_object*);
LEAN_EXPORT uint8_t l_Nat_binaryRec_x27___rarg___lambda__1(uint8_t, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_bitCasesOn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_bit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_bitCasesOn___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_bit(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_3, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_nat_mul(x_5, x_2);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Nat_bit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Nat_bit(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_bitCasesOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_land(x_3, x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
x_7 = lean_nat_shiftr(x_1, x_3);
if (x_6 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 1;
x_9 = lean_box(x_8);
x_10 = lean_apply_2(x_2, x_9, x_7);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_2, x_12, x_7);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Nat_bitCasesOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_bitCasesOn___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_bitCasesOn___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_bitCasesOn___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_land(x_6, x_3);
x_8 = lean_nat_dec_eq(x_7, x_4);
lean_dec(x_7);
x_9 = lean_nat_shiftr(x_3, x_6);
lean_inc(x_2);
x_10 = l_Nat_binaryRec___rarg(x_1, x_2, x_9);
if (x_8 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_apply_3(x_2, x_12, x_9, x_10);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_apply_3(x_2, x_15, x_9, x_10);
return x_16;
}
}
else
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRec___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_binaryRec___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Nat_binaryRec_x27___rarg___lambda__1(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
x_8 = lean_box(x_3);
x_9 = lean_alloc_closure((void*)(l_Nat_binaryRec_x27___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_forall__prop__decidable___rarg(x_7, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(x_3);
x_13 = lean_apply_4(x_2, x_12, x_4, lean_box(0), x_5);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Nat_binaryRec_x27___rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Nat_binaryRec___rarg(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRec_x27___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Nat_binaryRec_x27___rarg___lambda__1(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Nat_binaryRec_x27___rarg___lambda__2(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_binaryRec_x27___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(x_3);
x_10 = lean_apply_4(x_1, x_9, x_4, lean_box(0), x_6);
return x_10;
}
else
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Nat_binaryRecFromOne___rarg___lambda__1___boxed), 6, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Nat_binaryRec_x27___rarg(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRecFromOne___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Nat_binaryRecFromOne___rarg___lambda__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRecFromOne___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_binaryRecFromOne___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Alias(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_BinaryRec(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Alias(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
