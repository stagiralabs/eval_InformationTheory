// Lean compiler output
// Module: Mathlib.NumberTheory.Padics.RingHoms
// Imports: Init Mathlib.Algebra.Field.ZMod Mathlib.NumberTheory.Padics.PadicIntegers Mathlib.RingTheory.LocalRing.ResidueField.Defs Mathlib.RingTheory.ZMod
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
LEAN_EXPORT lean_object* l_PadicInt_toZModHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_toZModHom(lean_object*, lean_object*);
lean_object* l_PadicInt_ofIntSeq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq(lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_lift(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_limNthHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_lift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_modPart(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_limNthHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_toZModHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_gcdA(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_limNthHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_PadicInt_toZModHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1(lean_object*, lean_object*);
lean_object* l_ZMod_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PadicInt_modPart(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
lean_inc(x_1);
x_5 = l_Nat_gcdA(x_4, x_1);
x_6 = lean_int_mul(x_3, x_5);
lean_dec(x_5);
lean_dec(x_3);
x_7 = lean_nat_to_int(x_1);
x_8 = lean_int_emod(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_PadicInt_toZModHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_ZMod_commRing(x_1);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_toZModHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_2, x_5);
x_7 = l_Nat_cast___at_PadicInt_toZModHom___spec__1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_toZModHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PadicInt_toZModHom___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_toZModHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PadicInt_toZModHom(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = lean_apply_2(x_4, x_1, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_NumberTheory_Padics_RingHoms_0__PadicInt_appr_match__1_splitter(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1;
x_5 = lean_int_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_nat_abs(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_8 = lean_nat_abs(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_nat_pow(x_1, x_4);
x_6 = lean_apply_2(x_2, x_4, x_3);
x_7 = l_ZMod_val(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_nat_to_int(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PadicInt_nthHom___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PadicInt_nthHom___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PadicInt_nthHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_PadicInt_nthHom___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PadicInt_nthHomSeq___elambda__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_PadicInt_nthHomSeq___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PadicInt_nthHomSeq___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PadicInt_nthHomSeq___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PadicInt_nthHomSeq___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_nthHomSeq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PadicInt_nthHomSeq___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_limNthHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_PadicInt_nthHom___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_alloc_closure((void*)(l_PadicInt_ofIntSeq___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_PadicInt_limNthHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PadicInt_limNthHom___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_limNthHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PadicInt_limNthHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_PadicInt_limNthHom___rarg), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, lean_box(0));
lean_closure_set(x_5, 3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_PadicInt_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PadicInt_lift___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PadicInt_lift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PadicInt_lift(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_ZMod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Padics_PadicIntegers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_ResidueField_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_ZMod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Padics_RingHoms(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_ZMod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Padics_PadicIntegers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_ResidueField_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_ZMod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1 = _init_l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_NumberTheory_Padics_RingHoms_0__Int_neg_match__1_splitter___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
