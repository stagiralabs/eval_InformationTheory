// Lean compiler output
// Module: Mathlib.Data.FP.Basic
// Imports: Init Mathlib.Data.Semiquot Mathlib.Data.Nat.Size Batteries.Data.Rat.Basic Mathlib.Data.PNat.Defs Mathlib.Data.Rat.Init Mathlib.Algebra.Ring.Int.Defs Mathlib.Algebra.Order.Group.Unbundled.Basic
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
static lean_object* l_Int_shift2___closed__1;
LEAN_EXPORT lean_object* l_FP_Float_add(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FP_decValidFinite(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_nextUpPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_instAdd(lean_object*);
LEAN_EXPORT lean_object* l_FP_instInhabitedRMode;
LEAN_EXPORT lean_object* l_FP_Float_sub___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_nextUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_emin(lean_object*);
LEAN_EXPORT uint8_t l_FP_Float_isZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___rarg___boxed(lean_object*);
lean_object* l_Nat_binaryRec___at_Nat_size___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_prec(lean_object*);
extern uint8_t l_instInhabitedBool;
uint8_t l_Nat_decidable__dvd(lean_object*, lean_object*);
lean_object* l_Int_pred(lean_object*);
LEAN_EXPORT lean_object* l_FP_nextDnPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FP_Float_sign___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_instNeg(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isFinite___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isZero___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_neg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_mul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isFinite___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_decValidFinite___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_FP_emin___closed__1;
LEAN_EXPORT lean_object* l_FP_emax(lean_object*);
lean_object* l_Nat_div2(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_zero(lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Rat_blt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_div(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_shift2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sub(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_toRat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_emax___boxed(lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isZero___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_ofRatDn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign_x27___boxed(lean_object*);
lean_object* l_mkRat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_ofRat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FP_divNatLtTwoPow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_instSub(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_mul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_toRat(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_prec___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isZero(lean_object*);
LEAN_EXPORT lean_object* l_FP_ofPosRatDn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Int_succ(lean_object*);
LEAN_EXPORT lean_object* l_FP_ofRatUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign_x27(lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FP_Float_isFinite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FP_toRat___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign___rarg___boxed(lean_object*);
uint8_t l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_sign_x27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_neg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_div___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_FP_ofRat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_isFinite(lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_nextDn(lean_object*, lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_shift2(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_instInhabitedFloat(lean_object*);
LEAN_EXPORT lean_object* l_FP_RMode_toCtorIdx(lean_object*);
LEAN_EXPORT uint8_t l_FP_Float_sign_x27___rarg(lean_object*);
lean_object* l_Rat_floor(lean_object*);
LEAN_EXPORT lean_object* l_FP_Float_zero___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_nextUpPos(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
LEAN_EXPORT lean_object* l_FP_nextDnPos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FP_divNatLtTwoPow___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_shift2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_shift2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Int_shift2___closed__1;
x_5 = lean_int_dec_lt(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_nat_abs(x_3);
x_7 = lean_nat_shiftl(x_1, x_6);
lean_dec(x_6);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_13 = lean_nat_shiftl(x_2, x_12);
lean_dec(x_12);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Int_shift2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Int_shift2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_toCtorIdx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_RMode_toCtorIdx(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_FP_RMode_noConfusion___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_RMode_noConfusion___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_RMode_noConfusion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_RMode_noConfusion(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_FP_instInhabitedRMode() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FP_prec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_prec___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_prec(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_emax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_emax___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_emax(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_FP_emin___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_emin(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_nat_to_int(x_2);
x_4 = l_FP_emin___closed__1;
x_5 = lean_int_sub(x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_FP_decValidFinite(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_4 = l_FP_emin(x_1);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_nat_to_int(x_5);
x_7 = lean_int_add(x_2, x_6);
x_8 = l_FP_emin___closed__1;
x_9 = lean_int_sub(x_7, x_8);
lean_dec(x_7);
x_10 = lean_int_dec_le(x_4, x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_nat_to_int(x_12);
x_14 = lean_int_dec_le(x_9, x_13);
lean_dec(x_13);
lean_dec(x_9);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_4);
x_15 = 0;
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Nat_binaryRec___at_Nat_size___spec__1(x_16, x_3);
x_18 = lean_nat_to_int(x_17);
x_19 = lean_int_add(x_2, x_18);
lean_dec(x_18);
x_20 = lean_int_sub(x_19, x_6);
lean_dec(x_6);
lean_dec(x_19);
x_21 = lean_int_dec_le(x_20, x_4);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_4);
x_22 = lean_int_dec_eq(x_2, x_20);
lean_dec(x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_20);
x_23 = lean_int_dec_eq(x_2, x_4);
lean_dec(x_4);
return x_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_decValidFinite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FP_decValidFinite(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_FP_Float_isFinite___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_isFinite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_Float_isFinite___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_isFinite___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_FP_Float_isFinite___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_isFinite___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_Float_isFinite(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_toRat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Int_shift2(x_5, x_6, x_4);
lean_dec(x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_to_int(x_8);
x_11 = l_mkRat(x_10, x_9);
if (x_3 == 0)
{
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Rat_neg(x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_FP_toRat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_toRat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_toRat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_toRat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_zero(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_FP_emin(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*2, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_Float_zero___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_FP_Float_zero(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FP_instInhabitedFloat(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 1;
x_3 = l_FP_Float_zero(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_FP_Float_sign_x27___rarg(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, 0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = l_instInhabitedBool;
return x_3;
}
default: 
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_Float_sign_x27___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign_x27___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_FP_Float_sign_x27___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_Float_sign_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FP_Float_sign___rarg(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, 0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
default: 
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_Float_sign___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_FP_Float_sign___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sign___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_Float_sign(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FP_Float_isZero___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_isZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_Float_isZero___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_isZero___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_FP_Float_isZero___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_isZero___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FP_Float_isZero(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_neg(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_2, 0);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 1;
lean_ctor_set_uint8(x_2, 0, x_5);
return x_2;
}
else
{
uint8_t x_6; 
x_6 = 0;
lean_ctor_set_uint8(x_2, 0, x_6);
return x_2;
}
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_2, 0);
lean_dec(x_2);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
x_9 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_9, 0, x_8);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_11, 0, x_10);
return x_11;
}
}
}
case 1:
{
lean_object* x_12; 
x_12 = lean_box(1);
return x_12;
}
default: 
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = 1;
lean_ctor_set_uint8(x_2, sizeof(void*)*2, x_15);
return x_2;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_2);
x_18 = 1;
x_19 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set_uint8(x_19, sizeof(void*)*2, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*2, x_21);
return x_2;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*2, x_24);
return x_25;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_neg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FP_Float_neg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_FP_divNatLtTwoPow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Int_shift2___closed__1;
x_5 = lean_int_dec_lt(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_nat_abs(x_3);
x_7 = lean_nat_shiftl(x_2, x_6);
lean_dec(x_6);
x_8 = lean_nat_dec_lt(x_1, x_7);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_13 = lean_nat_shiftl(x_1, x_12);
lean_dec(x_12);
x_14 = lean_nat_dec_lt(x_13, x_2);
lean_dec(x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_FP_divNatLtTwoPow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FP_divNatLtTwoPow(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_ofPosRatDn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Nat_binaryRec___at_Nat_size___spec__1(x_4, x_2);
x_6 = lean_nat_to_int(x_5);
x_7 = l_Nat_binaryRec___at_Nat_size___spec__1(x_4, x_3);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_int_sub(x_6, x_8);
lean_dec(x_8);
lean_dec(x_6);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_nat_to_int(x_10);
x_12 = lean_int_sub(x_9, x_11);
lean_dec(x_9);
x_13 = lean_int_add(x_12, x_11);
lean_inc(x_2);
lean_inc(x_3);
x_14 = l_Int_shift2(x_3, x_2, x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_nat_dec_lt(x_16, x_15);
lean_dec(x_15);
lean_dec(x_16);
x_18 = l_FP_emin(x_1);
if (x_17 == 0)
{
x_19 = x_12;
goto block_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = l_FP_emin___closed__1;
x_79 = lean_int_sub(x_12, x_78);
lean_dec(x_12);
x_19 = x_79;
goto block_77;
}
block_77:
{
uint8_t x_20; 
x_20 = lean_int_dec_le(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_18);
x_21 = lean_int_add(x_19, x_11);
lean_dec(x_11);
x_22 = l_Int_shift2(x_3, x_2, x_21);
lean_dec(x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_nat_to_int(x_25);
x_27 = l_mkRat(x_26, x_24);
lean_inc(x_27);
x_28 = l_Rat_floor(x_27);
x_29 = l_Int_toNat(x_28);
lean_dec(x_28);
x_30 = 0;
x_31 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_31, 0, x_19);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*2, x_30);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
x_35 = lean_box(x_34);
lean_ctor_set(x_22, 1, x_35);
lean_ctor_set(x_22, 0, x_31);
return x_22;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_nat_to_int(x_37);
x_39 = l_mkRat(x_38, x_36);
lean_inc(x_39);
x_40 = l_Rat_floor(x_39);
x_41 = l_Int_toNat(x_40);
lean_dec(x_40);
x_42 = 0;
x_43 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_43, 0, x_19);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*2, x_42);
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
lean_dec(x_39);
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_dec_eq(x_44, x_45);
lean_dec(x_44);
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_19);
x_49 = lean_int_add(x_18, x_11);
lean_dec(x_11);
x_50 = l_Int_shift2(x_3, x_2, x_49);
lean_dec(x_49);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
x_54 = lean_nat_to_int(x_53);
x_55 = l_mkRat(x_54, x_52);
lean_inc(x_55);
x_56 = l_Rat_floor(x_55);
x_57 = l_Int_toNat(x_56);
lean_dec(x_56);
x_58 = 0;
x_59 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_59, 0, x_18);
lean_ctor_set(x_59, 1, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*2, x_58);
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
lean_dec(x_55);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_dec_eq(x_60, x_61);
lean_dec(x_60);
x_63 = lean_box(x_62);
lean_ctor_set(x_50, 1, x_63);
lean_ctor_set(x_50, 0, x_59);
return x_50;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_64 = lean_ctor_get(x_50, 0);
x_65 = lean_ctor_get(x_50, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_50);
x_66 = lean_nat_to_int(x_65);
x_67 = l_mkRat(x_66, x_64);
lean_inc(x_67);
x_68 = l_Rat_floor(x_67);
x_69 = l_Int_toNat(x_68);
lean_dec(x_68);
x_70 = 0;
x_71 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_71, 0, x_18);
lean_ctor_set(x_71, 1, x_69);
lean_ctor_set_uint8(x_71, sizeof(void*)*2, x_70);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
lean_dec(x_67);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_dec_eq(x_72, x_73);
lean_dec(x_72);
x_75 = lean_box(x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_nextUpPos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Nat_binaryRec___at_Nat_size___spec__1(x_7, x_6);
x_9 = l_Nat_binaryRec___at_Nat_size___spec__1(x_7, x_3);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_nat_to_int(x_11);
x_13 = lean_int_dec_eq(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = l_Int_succ(x_2);
lean_dec(x_2);
x_15 = l_Nat_div2(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*2, x_16);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_2);
x_18 = 0;
x_19 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_19, 0, x_18);
return x_19;
}
}
else
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_1);
x_20 = 0;
x_21 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_6);
lean_ctor_set_uint8(x_21, sizeof(void*)*2, x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_FP_nextUpPos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_nextUpPos(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_nextDnPos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = l_Nat_binaryRec___at_Nat_size___spec__1(x_5, x_8);
x_10 = lean_nat_add(x_8, x_7);
x_11 = l_Nat_binaryRec___at_Nat_size___spec__1(x_5, x_10);
lean_dec(x_10);
x_12 = lean_nat_dec_eq(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_FP_emin(x_1);
x_14 = lean_int_dec_eq(x_2, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
lean_dec(x_13);
x_15 = l_Int_pred(x_2);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_mul(x_16, x_8);
lean_dec(x_8);
x_18 = lean_nat_add(x_17, x_7);
lean_dec(x_17);
x_19 = 0;
x_20 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*2, x_19);
return x_20;
}
else
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_2);
x_21 = 0;
x_22 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_8);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_21);
return x_22;
}
}
else
{
uint8_t x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = 0;
x_24 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_8);
lean_ctor_set_uint8(x_24, sizeof(void*)*2, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
lean_inc(x_1);
x_25 = l_FP_emin(x_1);
x_26 = l_FP_nextUpPos(x_1, x_25, x_5, lean_box(0));
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_FP_nextDnPos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_nextDnPos(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_nextUp(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_FP_nextUpPos(x_1, x_4, x_5, lean_box(0));
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_1);
x_9 = l_FP_nextDnPos(x_1, x_7, x_8, lean_box(0));
lean_dec(x_8);
x_10 = l_FP_Float_neg(x_1, x_9);
lean_dec(x_1);
return x_10;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_FP_nextDn(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_FP_nextDnPos(x_1, x_4, x_5, lean_box(0));
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_1);
x_9 = l_FP_nextUpPos(x_1, x_7, x_8, lean_box(0));
lean_dec(x_8);
x_10 = l_FP_Float_neg(x_1, x_9);
lean_dec(x_1);
return x_10;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_FP_ofRatUp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Int_shift2___closed__1;
x_6 = lean_int_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_nat_abs(x_3);
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_7, x_10);
lean_dec(x_7);
x_12 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
lean_inc(x_1);
x_13 = l_FP_ofPosRatDn(x_1, x_12, x_4);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l_FP_nextUp(x_1, x_16);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
return x_18;
}
}
else
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_7);
lean_dec(x_4);
x_19 = 0;
x_20 = l_FP_Float_zero(x_1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_nat_abs(x_3);
lean_dec(x_3);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_21, x_22);
lean_dec(x_21);
x_24 = lean_nat_add(x_23, x_22);
lean_dec(x_23);
lean_inc(x_1);
x_25 = l_FP_ofPosRatDn(x_1, x_24, x_4);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_FP_Float_neg(x_1, x_26);
lean_dec(x_1);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_FP_ofRatDn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Rat_neg(x_2);
lean_inc(x_1);
x_4 = l_FP_ofRatUp(x_1, x_3);
x_5 = l_FP_Float_neg(x_1, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_ofRat(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_FP_ofRatDn(x_1, x_3);
lean_inc(x_3);
x_5 = l_FP_ofRatUp(x_1, x_3);
x_6 = l_FP_Float_isFinite___rarg(x_5);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
lean_inc(x_5);
x_9 = l_FP_toRat___rarg(x_5, lean_box(0));
x_10 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_3, x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_FP_Float_isFinite___rarg(x_4);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = 1;
x_13 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_inc(x_3);
x_14 = l_Rat_sub(x_9, x_3);
lean_inc(x_4);
x_15 = l_FP_toRat___rarg(x_4, lean_box(0));
x_16 = l_Rat_sub(x_3, x_15);
lean_inc(x_16);
lean_inc(x_14);
x_17 = l_Rat_blt(x_14, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = l_Rat_blt(x_16, x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
x_20 = lean_unsigned_to_nat(2u);
x_21 = l_Nat_decidable__dvd(x_20, x_19);
lean_dec(x_19);
if (x_21 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_dec(x_5);
return x_4;
}
}
else
{
lean_dec(x_5);
return x_4;
}
}
else
{
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
return x_5;
}
}
}
else
{
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_FP_ofRat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FP_ofRat(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FP_Float_instNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FP_Float_neg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FP_Float_add(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_3, 0);
if (x_6 == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_7; 
lean_free_object(x_3);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_4, 0);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; 
lean_free_object(x_4);
x_9 = lean_box(1);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_box(1);
return x_12;
}
}
}
case 1:
{
lean_object* x_13; 
lean_free_object(x_3);
x_13 = lean_box(1);
return x_13;
}
default: 
{
lean_dec(x_4);
return x_3;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_14; 
lean_free_object(x_3);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_4, 0);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_4);
x_16 = lean_box(1);
return x_16;
}
else
{
return x_4;
}
}
else
{
uint8_t x_17; 
x_17 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_box(1);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_19, 0, x_17);
return x_19;
}
}
}
case 1:
{
lean_object* x_20; 
lean_free_object(x_3);
x_20 = lean_box(1);
return x_20;
}
default: 
{
lean_dec(x_4);
return x_3;
}
}
}
}
else
{
uint8_t x_21; 
x_21 = lean_ctor_get_uint8(x_3, 0);
lean_dec(x_3);
if (x_21 == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_22; lean_object* x_23; 
x_22 = lean_ctor_get_uint8(x_4, 0);
if (lean_is_exclusive(x_4)) {
 x_23 = x_4;
} else {
 lean_dec_ref(x_4);
 x_23 = lean_box(0);
}
if (x_22 == 0)
{
lean_object* x_24; 
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(0, 0, 1);
} else {
 x_24 = x_23;
}
lean_ctor_set_uint8(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_25; 
lean_dec(x_23);
x_25 = lean_box(1);
return x_25;
}
}
case 1:
{
lean_object* x_26; 
x_26 = lean_box(1);
return x_26;
}
default: 
{
lean_object* x_27; 
lean_dec(x_4);
x_27 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_27, 0, x_21);
return x_27;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_28; lean_object* x_29; 
x_28 = lean_ctor_get_uint8(x_4, 0);
if (lean_is_exclusive(x_4)) {
 x_29 = x_4;
} else {
 lean_dec_ref(x_4);
 x_29 = lean_box(0);
}
if (x_28 == 0)
{
lean_object* x_30; 
lean_dec(x_29);
x_30 = lean_box(1);
return x_30;
}
else
{
lean_object* x_31; 
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 0, 1);
} else {
 x_31 = x_29;
}
lean_ctor_set_uint8(x_31, 0, x_28);
return x_31;
}
}
case 1:
{
lean_object* x_32; 
x_32 = lean_box(1);
return x_32;
}
default: 
{
lean_object* x_33; 
lean_dec(x_4);
x_33 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_33, 0, x_21);
return x_33;
}
}
}
}
}
case 1:
{
lean_object* x_34; 
lean_dec(x_4);
lean_dec(x_1);
x_34 = lean_box(1);
return x_34;
}
default: 
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_35; 
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_4);
if (x_35 == 0)
{
return x_4;
}
else
{
uint8_t x_36; lean_object* x_37; 
x_36 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
x_37 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_37, 0, x_36);
return x_37;
}
}
case 1:
{
lean_object* x_38; 
lean_dec(x_3);
lean_dec(x_1);
x_38 = lean_box(1);
return x_38;
}
default: 
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_3);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_4);
if (x_40 == 0)
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_42 = lean_ctor_get(x_3, 0);
x_43 = lean_ctor_get(x_3, 1);
x_44 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_45 = lean_ctor_get(x_4, 0);
x_46 = lean_ctor_get(x_4, 1);
lean_ctor_set(x_4, 1, x_43);
lean_ctor_set(x_4, 0, x_42);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_41);
lean_ctor_set(x_3, 1, x_46);
lean_ctor_set(x_3, 0, x_45);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_44);
x_47 = l_FP_toRat___rarg(x_4, lean_box(0));
x_48 = l_FP_toRat___rarg(x_3, lean_box(0));
x_49 = l_Rat_add(x_47, x_48);
x_50 = l_FP_ofRat(x_1, x_2, x_49);
return x_50;
}
else
{
uint8_t x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_51 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_52 = lean_ctor_get(x_3, 0);
x_53 = lean_ctor_get(x_3, 1);
x_54 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_55 = lean_ctor_get(x_4, 0);
x_56 = lean_ctor_get(x_4, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_4);
x_57 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_53);
lean_ctor_set_uint8(x_57, sizeof(void*)*2, x_51);
lean_ctor_set(x_3, 1, x_56);
lean_ctor_set(x_3, 0, x_55);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_54);
x_58 = l_FP_toRat___rarg(x_57, lean_box(0));
x_59 = l_FP_toRat___rarg(x_3, lean_box(0));
x_60 = l_Rat_add(x_58, x_59);
x_61 = l_FP_ofRat(x_1, x_2, x_60);
return x_61;
}
}
else
{
uint8_t x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_63 = lean_ctor_get(x_3, 0);
x_64 = lean_ctor_get(x_3, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_3);
x_65 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_66 = lean_ctor_get(x_4, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_68 = x_4;
} else {
 lean_dec_ref(x_4);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(2, 2, 1);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_63);
lean_ctor_set(x_69, 1, x_64);
lean_ctor_set_uint8(x_69, sizeof(void*)*2, x_62);
x_70 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set_uint8(x_70, sizeof(void*)*2, x_65);
x_71 = l_FP_toRat___rarg(x_69, lean_box(0));
x_72 = l_FP_toRat___rarg(x_70, lean_box(0));
x_73 = l_Rat_add(x_71, x_72);
x_74 = l_FP_ofRat(x_1, x_2, x_73);
return x_74;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_add___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_Float_add(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_Float_instAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_closure((void*)(l_FP_Float_add___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sub(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_FP_Float_neg(x_1, x_4);
x_6 = l_FP_Float_add(x_1, x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FP_Float_sub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_Float_sub(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_Float_instSub(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_closure((void*)(l_FP_Float_sub___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FP_Float_mul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_dec(x_1);
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_ctor_get_uint8(x_3, 0);
lean_dec(x_3);
x_6 = l_FP_Float_isZero___rarg(x_4);
if (x_6 == 0)
{
uint8_t x_7; uint8_t x_8; 
x_7 = l_FP_Float_sign___rarg(x_4);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
if (x_5 == 0)
{
if (x_7 == 0)
{
uint8_t x_9; 
x_9 = 0;
lean_ctor_set_uint8(x_4, 0, x_9);
return x_4;
}
else
{
uint8_t x_10; 
x_10 = 1;
lean_ctor_set_uint8(x_4, 0, x_10);
return x_4;
}
}
else
{
if (x_7 == 0)
{
uint8_t x_11; 
x_11 = 1;
lean_ctor_set_uint8(x_4, 0, x_11);
return x_4;
}
else
{
uint8_t x_12; 
x_12 = 0;
lean_ctor_set_uint8(x_4, 0, x_12);
return x_4;
}
}
}
else
{
lean_dec(x_4);
if (x_5 == 0)
{
if (x_7 == 0)
{
uint8_t x_13; lean_object* x_14; 
x_13 = 0;
x_14 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_14, 0, x_13);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; 
x_15 = 1;
x_16 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_16, 0, x_15);
return x_16;
}
}
else
{
if (x_7 == 0)
{
uint8_t x_17; lean_object* x_18; 
x_17 = 1;
x_18 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_18, 0, x_17);
return x_18;
}
else
{
uint8_t x_19; lean_object* x_20; 
x_19 = 0;
x_20 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_20, 0, x_19);
return x_20;
}
}
}
}
else
{
lean_object* x_21; 
lean_dec(x_4);
x_21 = lean_box(1);
return x_21;
}
}
case 1:
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = lean_box(1);
return x_22;
}
default: 
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_3);
if (x_23 == 0)
{
uint8_t x_24; uint8_t x_25; 
x_24 = lean_ctor_get_uint8(x_3, 0);
x_25 = l_FP_Float_isZero___rarg(x_4);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = l_FP_Float_sign___rarg(x_4);
lean_dec(x_4);
if (x_24 == 0)
{
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = 0;
lean_ctor_set_uint8(x_3, 0, x_27);
return x_3;
}
else
{
uint8_t x_28; 
x_28 = 1;
lean_ctor_set_uint8(x_3, 0, x_28);
return x_3;
}
}
else
{
if (x_26 == 0)
{
uint8_t x_29; 
x_29 = 1;
lean_ctor_set_uint8(x_3, 0, x_29);
return x_3;
}
else
{
uint8_t x_30; 
x_30 = 0;
lean_ctor_set_uint8(x_3, 0, x_30);
return x_3;
}
}
}
else
{
lean_object* x_31; 
lean_free_object(x_3);
lean_dec(x_4);
x_31 = lean_box(1);
return x_31;
}
}
else
{
uint8_t x_32; uint8_t x_33; 
x_32 = lean_ctor_get_uint8(x_3, 0);
lean_dec(x_3);
x_33 = l_FP_Float_isZero___rarg(x_4);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_FP_Float_sign___rarg(x_4);
lean_dec(x_4);
if (x_32 == 0)
{
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
x_36 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_36, 0, x_35);
return x_36;
}
else
{
uint8_t x_37; lean_object* x_38; 
x_37 = 1;
x_38 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_38, 0, x_37);
return x_38;
}
}
else
{
if (x_34 == 0)
{
uint8_t x_39; lean_object* x_40; 
x_39 = 1;
x_40 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_40, 0, x_39);
return x_40;
}
else
{
uint8_t x_41; lean_object* x_42; 
x_41 = 0;
x_42 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_42, 0, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; 
lean_dec(x_4);
x_43 = lean_box(1);
return x_43;
}
}
}
}
}
case 1:
{
lean_object* x_44; 
lean_dec(x_4);
lean_dec(x_1);
x_44 = lean_box(1);
return x_44;
}
default: 
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_4);
if (x_45 == 0)
{
uint8_t x_46; uint8_t x_47; 
x_46 = lean_ctor_get_uint8(x_4, 0);
x_47 = l_FP_Float_isZero___rarg(x_3);
if (x_47 == 0)
{
uint8_t x_48; 
x_48 = l_FP_Float_sign___rarg(x_3);
lean_dec(x_3);
if (x_48 == 0)
{
if (x_46 == 0)
{
uint8_t x_49; 
x_49 = 0;
lean_ctor_set_uint8(x_4, 0, x_49);
return x_4;
}
else
{
uint8_t x_50; 
x_50 = 1;
lean_ctor_set_uint8(x_4, 0, x_50);
return x_4;
}
}
else
{
if (x_46 == 0)
{
uint8_t x_51; 
x_51 = 1;
lean_ctor_set_uint8(x_4, 0, x_51);
return x_4;
}
else
{
uint8_t x_52; 
x_52 = 0;
lean_ctor_set_uint8(x_4, 0, x_52);
return x_4;
}
}
}
else
{
lean_object* x_53; 
lean_free_object(x_4);
lean_dec(x_3);
x_53 = lean_box(1);
return x_53;
}
}
else
{
uint8_t x_54; uint8_t x_55; 
x_54 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
x_55 = l_FP_Float_isZero___rarg(x_3);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = l_FP_Float_sign___rarg(x_3);
lean_dec(x_3);
if (x_56 == 0)
{
if (x_54 == 0)
{
uint8_t x_57; lean_object* x_58; 
x_57 = 0;
x_58 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_58, 0, x_57);
return x_58;
}
else
{
uint8_t x_59; lean_object* x_60; 
x_59 = 1;
x_60 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_60, 0, x_59);
return x_60;
}
}
else
{
if (x_54 == 0)
{
uint8_t x_61; lean_object* x_62; 
x_61 = 1;
x_62 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_62, 0, x_61);
return x_62;
}
else
{
uint8_t x_63; lean_object* x_64; 
x_63 = 0;
x_64 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_64, 0, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; 
lean_dec(x_3);
x_65 = lean_box(1);
return x_65;
}
}
}
case 1:
{
lean_object* x_66; 
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_box(1);
return x_66;
}
default: 
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_3);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_4);
if (x_68 == 0)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_69 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_70 = lean_ctor_get(x_3, 0);
x_71 = lean_ctor_get(x_3, 1);
x_72 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_73 = lean_ctor_get(x_4, 0);
x_74 = lean_ctor_get(x_4, 1);
lean_ctor_set(x_4, 1, x_71);
lean_ctor_set(x_4, 0, x_70);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_69);
lean_ctor_set(x_3, 1, x_74);
lean_ctor_set(x_3, 0, x_73);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_72);
x_75 = l_FP_toRat___rarg(x_4, lean_box(0));
x_76 = l_FP_toRat___rarg(x_3, lean_box(0));
x_77 = l_Rat_mul(x_75, x_76);
lean_dec(x_76);
lean_dec(x_75);
x_78 = l_FP_ofRat(x_1, x_2, x_77);
return x_78;
}
else
{
uint8_t x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_79 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_80 = lean_ctor_get(x_3, 0);
x_81 = lean_ctor_get(x_3, 1);
x_82 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_83 = lean_ctor_get(x_4, 0);
x_84 = lean_ctor_get(x_4, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_4);
x_85 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_85, 0, x_80);
lean_ctor_set(x_85, 1, x_81);
lean_ctor_set_uint8(x_85, sizeof(void*)*2, x_79);
lean_ctor_set(x_3, 1, x_84);
lean_ctor_set(x_3, 0, x_83);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_82);
x_86 = l_FP_toRat___rarg(x_85, lean_box(0));
x_87 = l_FP_toRat___rarg(x_3, lean_box(0));
x_88 = l_Rat_mul(x_86, x_87);
lean_dec(x_87);
lean_dec(x_86);
x_89 = l_FP_ofRat(x_1, x_2, x_88);
return x_89;
}
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_90 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_91 = lean_ctor_get(x_3, 0);
x_92 = lean_ctor_get(x_3, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_3);
x_93 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_94 = lean_ctor_get(x_4, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_4, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_96 = x_4;
} else {
 lean_dec_ref(x_4);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(2, 2, 1);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_91);
lean_ctor_set(x_97, 1, x_92);
lean_ctor_set_uint8(x_97, sizeof(void*)*2, x_90);
x_98 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_95);
lean_ctor_set_uint8(x_98, sizeof(void*)*2, x_93);
x_99 = l_FP_toRat___rarg(x_97, lean_box(0));
x_100 = l_FP_toRat___rarg(x_98, lean_box(0));
x_101 = l_Rat_mul(x_99, x_100);
lean_dec(x_100);
lean_dec(x_99);
x_102 = l_FP_ofRat(x_1, x_2, x_101);
return x_102;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_mul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_Float_mul(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FP_Float_div(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 2)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
uint8_t x_6; uint8_t x_7; 
x_6 = lean_ctor_get_uint8(x_3, 0);
x_7 = l_FP_Float_sign___rarg(x_4);
lean_dec(x_4);
if (x_6 == 0)
{
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
lean_ctor_set_uint8(x_3, 0, x_8);
return x_3;
}
else
{
uint8_t x_9; 
x_9 = 1;
lean_ctor_set_uint8(x_3, 0, x_9);
return x_3;
}
}
else
{
if (x_7 == 0)
{
uint8_t x_10; 
x_10 = 1;
lean_ctor_set_uint8(x_3, 0, x_10);
return x_3;
}
else
{
uint8_t x_11; 
x_11 = 0;
lean_ctor_set_uint8(x_3, 0, x_11);
return x_3;
}
}
}
else
{
uint8_t x_12; uint8_t x_13; 
x_12 = lean_ctor_get_uint8(x_3, 0);
lean_dec(x_3);
x_13 = l_FP_Float_sign___rarg(x_4);
lean_dec(x_4);
if (x_12 == 0)
{
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
x_14 = 0;
x_15 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_15, 0, x_14);
return x_15;
}
else
{
uint8_t x_16; lean_object* x_17; 
x_16 = 1;
x_17 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_17, 0, x_16);
return x_17;
}
}
else
{
if (x_13 == 0)
{
uint8_t x_18; lean_object* x_19; 
x_18 = 1;
x_19 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_19, 0, x_18);
return x_19;
}
else
{
uint8_t x_20; lean_object* x_21; 
x_20 = 0;
x_21 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_21, 0, x_20);
return x_21;
}
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_4);
lean_dec(x_3);
x_22 = lean_box(1);
return x_22;
}
}
case 1:
{
lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_1);
x_23 = lean_box(1);
return x_23;
}
default: 
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_24; uint8_t x_25; 
x_24 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
x_25 = l_FP_Float_sign___rarg(x_3);
lean_dec(x_3);
if (x_25 == 0)
{
if (x_24 == 0)
{
uint8_t x_26; lean_object* x_27; 
x_26 = 0;
x_27 = l_FP_Float_zero(x_1, x_26);
return x_27;
}
else
{
uint8_t x_28; lean_object* x_29; 
x_28 = 1;
x_29 = l_FP_Float_zero(x_1, x_28);
return x_29;
}
}
else
{
if (x_24 == 0)
{
uint8_t x_30; lean_object* x_31; 
x_30 = 1;
x_31 = l_FP_Float_zero(x_1, x_30);
return x_31;
}
else
{
uint8_t x_32; lean_object* x_33; 
x_32 = 0;
x_33 = l_FP_Float_zero(x_1, x_32);
return x_33;
}
}
}
case 1:
{
lean_object* x_34; 
lean_dec(x_3);
lean_dec(x_1);
x_34 = lean_box(1);
return x_34;
}
default: 
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_3);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_4);
if (x_36 == 0)
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_37 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
x_40 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_41 = lean_ctor_get(x_4, 0);
x_42 = lean_ctor_get(x_4, 1);
lean_ctor_set(x_4, 1, x_39);
lean_ctor_set(x_4, 0, x_38);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_37);
lean_ctor_set(x_3, 1, x_42);
lean_ctor_set(x_3, 0, x_41);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_40);
x_43 = l_FP_Float_isZero___rarg(x_3);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = l_FP_toRat___rarg(x_4, lean_box(0));
x_45 = l_FP_toRat___rarg(x_3, lean_box(0));
x_46 = l_Rat_div(x_44, x_45);
lean_dec(x_44);
x_47 = l_FP_ofRat(x_1, x_2, x_46);
return x_47;
}
else
{
lean_dec(x_3);
lean_dec(x_4);
lean_dec(x_1);
if (x_37 == 0)
{
if (x_40 == 0)
{
uint8_t x_48; lean_object* x_49; 
x_48 = 0;
x_49 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_49, 0, x_48);
return x_49;
}
else
{
uint8_t x_50; lean_object* x_51; 
x_50 = 1;
x_51 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_51, 0, x_50);
return x_51;
}
}
else
{
if (x_40 == 0)
{
uint8_t x_52; lean_object* x_53; 
x_52 = 1;
x_53 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_53, 0, x_52);
return x_53;
}
else
{
uint8_t x_54; lean_object* x_55; 
x_54 = 0;
x_55 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_55, 0, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_56 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_57 = lean_ctor_get(x_3, 0);
x_58 = lean_ctor_get(x_3, 1);
x_59 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_60 = lean_ctor_get(x_4, 0);
x_61 = lean_ctor_get(x_4, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_4);
x_62 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set_uint8(x_62, sizeof(void*)*2, x_56);
lean_ctor_set(x_3, 1, x_61);
lean_ctor_set(x_3, 0, x_60);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_59);
x_63 = l_FP_Float_isZero___rarg(x_3);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = l_FP_toRat___rarg(x_62, lean_box(0));
x_65 = l_FP_toRat___rarg(x_3, lean_box(0));
x_66 = l_Rat_div(x_64, x_65);
lean_dec(x_64);
x_67 = l_FP_ofRat(x_1, x_2, x_66);
return x_67;
}
else
{
lean_dec(x_3);
lean_dec(x_62);
lean_dec(x_1);
if (x_56 == 0)
{
if (x_59 == 0)
{
uint8_t x_68; lean_object* x_69; 
x_68 = 0;
x_69 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_69, 0, x_68);
return x_69;
}
else
{
uint8_t x_70; lean_object* x_71; 
x_70 = 1;
x_71 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_71, 0, x_70);
return x_71;
}
}
else
{
if (x_59 == 0)
{
uint8_t x_72; lean_object* x_73; 
x_72 = 1;
x_73 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_73, 0, x_72);
return x_73;
}
else
{
uint8_t x_74; lean_object* x_75; 
x_74 = 0;
x_75 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_75, 0, x_74);
return x_75;
}
}
}
}
}
else
{
uint8_t x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_76 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_77 = lean_ctor_get(x_3, 0);
x_78 = lean_ctor_get(x_3, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_3);
x_79 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_80 = lean_ctor_get(x_4, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_4, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_82 = x_4;
} else {
 lean_dec_ref(x_4);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(2, 2, 1);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_78);
lean_ctor_set_uint8(x_83, sizeof(void*)*2, x_76);
x_84 = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(x_84, 0, x_80);
lean_ctor_set(x_84, 1, x_81);
lean_ctor_set_uint8(x_84, sizeof(void*)*2, x_79);
x_85 = l_FP_Float_isZero___rarg(x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = l_FP_toRat___rarg(x_83, lean_box(0));
x_87 = l_FP_toRat___rarg(x_84, lean_box(0));
x_88 = l_Rat_div(x_86, x_87);
lean_dec(x_86);
x_89 = l_FP_ofRat(x_1, x_2, x_88);
return x_89;
}
else
{
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_1);
if (x_76 == 0)
{
if (x_79 == 0)
{
uint8_t x_90; lean_object* x_91; 
x_90 = 0;
x_91 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_91, 0, x_90);
return x_91;
}
else
{
uint8_t x_92; lean_object* x_93; 
x_92 = 1;
x_93 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_93, 0, x_92);
return x_93;
}
}
else
{
if (x_79 == 0)
{
uint8_t x_94; lean_object* x_95; 
x_94 = 1;
x_95 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_95, 0, x_94);
return x_95;
}
else
{
uint8_t x_96; lean_object* x_97; 
x_96 = 0;
x_97 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_97, 0, x_96);
return x_97;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FP_Float_div___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FP_Float_div(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Semiquot(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Size(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Rat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_FP_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Semiquot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Size(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Rat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_shift2___closed__1 = _init_l_Int_shift2___closed__1();
lean_mark_persistent(l_Int_shift2___closed__1);
l_FP_instInhabitedRMode = _init_l_FP_instInhabitedRMode();
lean_mark_persistent(l_FP_instInhabitedRMode);
l_FP_emin___closed__1 = _init_l_FP_emin___closed__1();
lean_mark_persistent(l_FP_emin___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
