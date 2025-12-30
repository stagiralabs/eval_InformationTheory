// Lean compiler output
// Module: Mathlib.Data.Num.Basic
// Imports: Init Lean.Linter.Deprecated Mathlib.Data.One.Defs Mathlib.Data.Int.Notation Mathlib.Data.Nat.BinaryRec Mathlib.Tactic.TypeStar
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
static lean_object* l_ZNum_instAdd___closed__1;
LEAN_EXPORT lean_object* l_Num_instSub;
LEAN_EXPORT uint8_t l_PosNum_cmp(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castZNum(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_instSub;
LEAN_EXPORT uint8_t l_Num_decidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castPosNum(lean_object*);
LEAN_EXPORT lean_object* l_Num_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_bit(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_divMod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_ofNatSucc___boxed(lean_object*);
uint8_t l_instDecidableEqOrdering(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ZNum_ofInt_x27(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_bit1(lean_object*);
LEAN_EXPORT lean_object* l_Num_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_pred(lean_object*);
static lean_object* l_instOneNum___closed__1;
LEAN_EXPORT lean_object* l_Num_gcdAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqPosNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_numNatCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_succ(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_div_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Num_cmp(lean_object*, lean_object*);
static lean_object* l_instOneZNum___closed__1;
LEAN_EXPORT lean_object* l_instReprNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_pred_x27(lean_object*);
LEAN_EXPORT lean_object* l_Num_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Num_ofNat_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_sub_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castNum___at_instReprNum___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedZNum;
static lean_object* l_Num_instMod___closed__1;
LEAN_EXPORT lean_object* l_ZNum_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprZNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_size(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_ofZNum_x27(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_cmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instZeroZNum;
LEAN_EXPORT lean_object* l_PosNum_ofZNum___boxed(lean_object*);
static lean_object* l_Num_instSub___closed__1;
LEAN_EXPORT lean_object* l_instInhabitedNum;
LEAN_EXPORT lean_object* l_Num_instDiv;
LEAN_EXPORT lean_object* l_ZNum_zNeg(lean_object*);
static lean_object* l_Num_instMul___closed__1;
LEAN_EXPORT lean_object* l_instReprPosNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_bit1(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_natSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_ofNat(lean_object*);
static lean_object* l_ZNum_pred___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castZNum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_div_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_abs(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_instAdd;
LEAN_EXPORT uint8_t l_instDecidableEqPosNum(lean_object*, lean_object*);
static lean_object* l_PosNum_instSub___closed__1;
static lean_object* l_ZNum_instMod___closed__1;
LEAN_EXPORT lean_object* l_Num_natSize(lean_object*);
LEAN_EXPORT lean_object* l_instReprPosNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_bit(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Num_natSize___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Num_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_natSize(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_sub(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_ofZNum(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_ofInt_x27___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqZNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_succ(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Num_ofZNum_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOnePosNum;
static lean_object* l_ZNum_ofInt_x27___closed__1;
static lean_object* l_PosNum_instAdd___closed__1;
LEAN_EXPORT lean_object* l_Num_toZNum(lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_instReprZNum___spec__2___boxed(lean_object*);
static lean_object* l_ZNum_instMul___closed__1;
LEAN_EXPORT lean_object* l_PosNum_isOne___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_pred(lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_instReprPosNum___spec__1(lean_object*);
static lean_object* l_Num_instDiv___closed__1;
LEAN_EXPORT lean_object* l_PosNum_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_PosNum_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedPosNum;
LEAN_EXPORT lean_object* l_instOneNum;
LEAN_EXPORT lean_object* l_PosNum_succ(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_size(lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_mul(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
static lean_object* l_ZNum_instDiv___closed__1;
LEAN_EXPORT lean_object* l_znumCoe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castNum(lean_object*);
LEAN_EXPORT lean_object* l_castNum___at_instReprNum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_posNumCoe___rarg(lean_object*, lean_object*);
static lean_object* l_PosNum_instMul___closed__1;
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_decidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castNum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instAdd;
LEAN_EXPORT lean_object* l_PosNum_mod_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_instLE;
LEAN_EXPORT lean_object* l_Num_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_cmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_instLE;
LEAN_EXPORT lean_object* l_instZeroNum;
LEAN_EXPORT lean_object* l_ZNum_bit0(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ZNum_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_instReprPosNum___spec__1___boxed(lean_object*);
static lean_object* l_ZNum_instNeg___closed__1;
LEAN_EXPORT lean_object* l_PosNum_instOfNatHAddNatOfNat(lean_object*);
LEAN_EXPORT lean_object* l_instOneZNum;
LEAN_EXPORT uint8_t l_ZNum_decidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_posNumCoe(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_ofNatSucc(lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_instReprZNum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Num_toZNumNeg(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_instMul;
LEAN_EXPORT lean_object* l_PosNum_bit___boxed(lean_object*, lean_object*);
static lean_object* l_castPosNum___at_instReprZNum___spec__2___closed__1;
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_divMod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_bit0(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_instMul;
LEAN_EXPORT lean_object* l_PosNum_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instNeg;
LEAN_EXPORT lean_object* l_castPosNum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instMod;
LEAN_EXPORT lean_object* l_Num_ofNat_x27___boxed(lean_object*);
static lean_object* l_Num_ofZNum_x27___closed__1;
LEAN_EXPORT lean_object* l_PosNum_divModAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_sub_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castNum___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_decidableLT___boxed(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_ofZNum(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_znumCoe(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqZNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_decidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprZNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_instLT;
LEAN_EXPORT lean_object* l_Num_bit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_succ_x27(lean_object*);
LEAN_EXPORT lean_object* l_Num_instMod;
LEAN_EXPORT lean_object* l_castZNum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PosNum_mod_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544_(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ZNum_cmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_pred(lean_object*);
LEAN_EXPORT lean_object* l_castZNum___at_instReprZNum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_bitm1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_instAdd;
LEAN_EXPORT lean_object* l_Num_ofNat_x27(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instMul;
lean_object* lean_nat_pred(lean_object*);
LEAN_EXPORT lean_object* l_Num_mod(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_PosNum_isOne(lean_object*);
LEAN_EXPORT lean_object* l_numNatCoe(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT uint8_t l_PosNum_decidableLE(lean_object*, lean_object*);
static lean_object* l_PosNum_succ___closed__1;
LEAN_EXPORT lean_object* l_Num_instLT;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castZNum___at_instReprZNum___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_cmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instDiv;
LEAN_EXPORT lean_object* l_PosNum_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_div2(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instLT;
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_decidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Num_psub(lean_object*, lean_object*);
static lean_object* l_Num_instAdd___closed__1;
LEAN_EXPORT lean_object* l_Num_ppred(lean_object*);
LEAN_EXPORT lean_object* l_ZNum_instLE;
LEAN_EXPORT lean_object* l_PosNum_instOfNatHAddNatOfNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_2, 0);
x_1 = x_5;
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_2, 0);
x_1 = x_9;
x_2 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqPosNum(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqPosNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableEqPosNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instOnePosNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instInhabitedPosNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359_(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_6, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqNum(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqNum____x40_Mathlib_Data_Num_Basic___hyg_359_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableEqNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instZeroNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instOneNum___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instOneNum() {
_start:
{
lean_object* x_1; 
x_1 = l_instOneNum___closed__1;
return x_1;
}
}
static lean_object* _init_l_instInhabitedNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_2, 0);
x_7 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_5, x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_2, 0);
x_11 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_9, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqZNum(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Mathlib_Data_Num_Basic_0__decEqZNum____x40_Mathlib_Data_Num_Basic___hyg_544_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqZNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableEqZNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instZeroZNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instOneZNum___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instOneZNum() {
_start:
{
lean_object* x_1; 
x_1 = l_instOneZNum___closed__1;
return x_1;
}
}
static lean_object* _init_l_instInhabitedZNum() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PosNum_bit(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_bit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_PosNum_bit(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_PosNum_succ___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_succ(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_PosNum_succ___closed__1;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_PosNum_succ(x_4);
lean_ctor_set_tag(x_1, 2);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_PosNum_succ(x_6);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
default: 
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_ctor_set_tag(x_1, 1);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
}
LEAN_EXPORT uint8_t l_PosNum_isOne(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
LEAN_EXPORT lean_object* l_PosNum_isOne___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_PosNum_isOne(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PosNum_add(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; 
x_3 = l_PosNum_succ(x_2);
return x_3;
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; 
x_4 = l_PosNum_succ(x_1);
return x_4;
}
case 1:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = l_PosNum_add(x_5, x_7);
x_9 = l_PosNum_succ(x_8);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_PosNum_add(x_5, x_10);
x_12 = l_PosNum_succ(x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
default: 
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_2);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = l_PosNum_add(x_14, x_16);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_17);
return x_2;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l_PosNum_add(x_14, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_21; 
x_21 = l_PosNum_succ(x_1);
return x_21;
}
case 1:
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_2);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_2, 0);
x_25 = l_PosNum_add(x_22, x_24);
lean_ctor_set(x_2, 0, x_25);
return x_2;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = l_PosNum_add(x_22, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
default: 
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_2);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_2, 0);
x_32 = l_PosNum_add(x_29, x_31);
lean_ctor_set(x_2, 0, x_32);
return x_2;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
lean_dec(x_2);
x_34 = l_PosNum_add(x_29, x_33);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
return x_35;
}
}
}
}
}
}
}
static lean_object* _init_l_PosNum_instAdd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PosNum_add), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PosNum_instAdd() {
_start:
{
lean_object* x_1; 
x_1 = l_PosNum_instAdd___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PosNum_pred_x27(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
lean_ctor_set_tag(x_1, 2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
default: 
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_PosNum_pred_x27(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
lean_free_object(x_1);
x_11 = l_instOneNum___closed__1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_10, 0);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_14);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_PosNum_pred_x27(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = l_instOneNum___closed__1;
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(1, 1, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_PosNum_pred(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_pred_x27(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_size(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_PosNum_size(x_3);
x_5 = l_PosNum_succ(x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_size___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_size(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_natSize(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(1u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_PosNum_natSize(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_natSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_natSize(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_5 = l_PosNum_mul(x_1, x_4);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 0, x_5);
x_6 = l_PosNum_add(x_2, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_1);
x_8 = l_PosNum_mul(x_1, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_PosNum_add(x_9, x_1);
return x_10;
}
}
default: 
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = l_PosNum_mul(x_1, x_12);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_PosNum_mul(x_1, x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
static lean_object* _init_l_PosNum_instMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PosNum_mul), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PosNum_instMul() {
_start:
{
lean_object* x_1; 
x_1 = l_PosNum_instMul___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PosNum_ofNatSucc(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_PosNum_ofNatSucc(x_5);
lean_dec(x_5);
x_7 = l_PosNum_succ(x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_ofNatSucc___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_ofNatSucc(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_ofNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_nat_pred(x_1);
x_3 = l_PosNum_ofNatSucc(x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PosNum_ofNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_ofNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_instOfNatHAddNatOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = l_PosNum_ofNat(x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PosNum_instOfNatHAddNatOfNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_instOfNatHAddNatOfNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_PosNum_cmp(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
case 1:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_1 = x_6;
x_2 = x_7;
goto _start;
}
default: 
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_2, 0);
x_11 = l_PosNum_cmp(x_9, x_10);
x_12 = lean_box(x_11);
if (lean_obj_tag(x_12) == 1)
{
uint8_t x_13; 
x_13 = 2;
return x_13;
}
else
{
lean_dec(x_12);
return x_11;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_14; 
x_14 = 2;
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_2, 0);
x_17 = l_PosNum_cmp(x_15, x_16);
x_18 = lean_box(x_17);
if (lean_obj_tag(x_18) == 1)
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
else
{
lean_dec(x_18);
return x_17;
}
}
default: 
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_2, 0);
x_1 = x_20;
x_2 = x_21;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_PosNum_cmp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PosNum_cmp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_PosNum_instLT() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_PosNum_instLE() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_PosNum_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_PosNum_cmp(x_1, x_2);
x_4 = 0;
x_5 = l_instDecidableEqOrdering(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PosNum_decidableLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PosNum_decidableLT(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_PosNum_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_PosNum_decidableLT(x_2, x_1);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PosNum_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PosNum_decidableLE(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_castPosNum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_dec(x_2);
return x_1;
}
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_castPosNum___rarg(x_1, x_2, x_4);
lean_inc(x_2);
lean_inc(x_5);
x_6 = lean_apply_2(x_2, x_5, x_5);
x_7 = lean_apply_2(x_2, x_6, x_1);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_2);
x_9 = l_castPosNum___rarg(x_1, x_2, x_8);
lean_inc(x_9);
x_10 = lean_apply_2(x_2, x_9, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_castPosNum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_castPosNum___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castPosNum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_castPosNum___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_castNum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = l_castPosNum___rarg(x_1, x_2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_castNum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_castNum___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castNum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_castNum___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_posNumCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_castPosNum___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_posNumCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_posNumCoe___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_numNatCoe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_castNum___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_numNatCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_numNatCoe___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_instReprPosNum___spec__1(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(1u);
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_castPosNum___at_instReprPosNum___spec__1(x_3);
x_5 = lean_nat_add(x_4, x_4);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_5);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_castPosNum___at_instReprPosNum___spec__1(x_8);
x_10 = lean_nat_add(x_9, x_9);
lean_dec(x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_instReprPosNum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_castPosNum___at_instReprPosNum___spec__1(x_1);
x_4 = l___private_Init_Data_Repr_0__Nat_reprFast(x_3);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_instReprPosNum___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_castPosNum___at_instReprPosNum___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instReprPosNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instReprPosNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_castNum___at_instReprNum___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_castPosNum___at_instReprPosNum___spec__1(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_instReprNum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_castNum___at_instReprNum___spec__1(x_1);
x_4 = l___private_Init_Data_Repr_0__Nat_reprFast(x_3);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_castNum___at_instReprNum___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_castNum___at_instReprNum___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instReprNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instReprNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Num_succ_x27(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PosNum_succ(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Num_succ(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Num_succ_x27(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Num_add(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_PosNum_add(x_3, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_PosNum_add(x_3, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
}
static lean_object* _init_l_Num_instAdd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Num_add), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Num_instAdd() {
_start:
{
lean_object* x_1; 
x_1 = l_Num_instAdd___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Num_bit0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_bit1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_instOneNum___closed__1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_bit(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; 
x_3 = l_Num_bit0(x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = l_Num_bit1(x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Num_bit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Num_bit(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Num_size(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_PosNum_size(x_4);
lean_dec(x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_PosNum_size(x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_natSize(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_PosNum_natSize(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Num_natSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Num_natSize(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Num_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = l_PosNum_mul(x_5, x_7);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_PosNum_mul(x_5, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
}
static lean_object* _init_l_Num_instMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Num_mul), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Num_instMul() {
_start:
{
lean_object* x_1; 
x_1 = l_Num_instMul___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Num_cmp(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = l_PosNum_cmp(x_6, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_cmp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Num_cmp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Num_instLT() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Num_instLE() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Num_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_Num_cmp(x_1, x_2);
x_4 = 0;
x_5 = l_instDecidableEqOrdering(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Num_decidableLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Num_decidableLT(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Num_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_Num_decidableLT(x_2, x_1);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Num_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Num_decidableLE(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Num_toZNum(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_toZNumNeg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_ctor_set_tag(x_1, 2);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_land(x_5, x_2);
x_7 = lean_nat_dec_eq(x_6, x_3);
lean_dec(x_6);
x_8 = lean_nat_shiftr(x_2, x_5);
x_9 = l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(x_1, x_8);
lean_dec(x_8);
if (x_7 == 0)
{
lean_object* x_10; 
x_10 = l_Num_bit1(x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Num_bit0(x_9);
return x_11;
}
}
else
{
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Num_ofNat_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Num_ofNat_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Num_ofNat_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Num_ofNat_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZNum_zNeg(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_ctor_set_tag(x_1, 2);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
default: 
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_ctor_set_tag(x_1, 1);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
}
static lean_object* _init_l_ZNum_instNeg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ZNum_zNeg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instNeg() {
_start:
{
lean_object* x_1; 
x_1 = l_ZNum_instNeg___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZNum_abs(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
default: 
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_ctor_set_tag(x_1, 1);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_succ(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_instOneZNum___closed__1;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_PosNum_succ(x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_PosNum_succ(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_PosNum_pred_x27(x_9);
x_11 = l_Num_toZNumNeg(x_10);
return x_11;
}
}
}
}
static lean_object* _init_l_ZNum_pred___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZNum_pred(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_ZNum_pred___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PosNum_pred_x27(x_3);
x_5 = l_Num_toZNum(x_4);
return x_5;
}
default: 
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = l_PosNum_succ(x_7);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_PosNum_succ(x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_bit0(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
default: 
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_bit1(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_instOneZNum___closed__1;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
default: 
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = l_PosNum_pred_x27(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_free_object(x_1);
x_12 = l_ZNum_pred___closed__1;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_PosNum_pred_x27(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = l_ZNum_pred___closed__1;
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
if (lean_is_scalar(x_20)) {
 x_21 = lean_alloc_ctor(1, 1, 0);
} else {
 x_21 = x_20;
}
lean_ctor_set(x_21, 0, x_19);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_bitm1(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_ZNum_pred___closed__1;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_PosNum_pred_x27(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_free_object(x_1);
x_6 = l_instOneZNum___closed__1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
}
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_PosNum_pred_x27(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = l_instOneZNum___closed__1;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_14 = x_11;
} else {
 lean_dec_ref(x_11);
 x_14 = lean_box(0);
}
if (lean_is_scalar(x_14)) {
 x_15 = lean_alloc_ctor(1, 1, 0);
} else {
 x_15 = x_14;
}
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
default: 
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_1, 0, x_19);
return x_1;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
static lean_object* _init_l_ZNum_ofInt_x27___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZNum_ofInt_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_ZNum_ofInt_x27___closed__1;
x_3 = lean_int_dec_lt(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_nat_abs(x_1);
x_5 = lean_box(0);
x_6 = l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(x_5, x_4);
lean_dec(x_4);
x_7 = l_Num_toZNum(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_nat_abs(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_nat_add(x_10, x_9);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = l_Nat_binaryRec___at_Num_ofNat_x27___spec__1(x_12, x_11);
lean_dec(x_11);
x_14 = l_Num_toZNumNeg(x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_ZNum_ofInt_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZNum_ofInt_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_sub_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PosNum_pred_x27(x_2);
x_4 = l_Num_toZNum(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_PosNum_pred_x27(x_2);
x_6 = l_Num_toZNumNeg(x_5);
return x_6;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_PosNum_pred_x27(x_1);
x_8 = l_Num_toZNum(x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_PosNum_sub_x27(x_9, x_10);
x_12 = l_ZNum_bit0(x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_PosNum_sub_x27(x_13, x_14);
x_16 = l_ZNum_bit1(x_15);
return x_16;
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_PosNum_pred_x27(x_1);
x_18 = l_Num_toZNum(x_17);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = l_PosNum_sub_x27(x_19, x_20);
x_22 = l_ZNum_bitm1(x_21);
return x_22;
}
default: 
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_PosNum_sub_x27(x_23, x_24);
x_26 = l_ZNum_bit0(x_25);
return x_26;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_PosNum_ofZNum_x27(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_ofZNum(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_ofZNum___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PosNum_ofZNum(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PosNum_sub_x27(x_1, x_2);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_box(0);
return x_5;
}
}
}
static lean_object* _init_l_PosNum_instSub___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PosNum_sub), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PosNum_instSub() {
_start:
{
lean_object* x_1; 
x_1 = l_PosNum_instSub___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Num_ppred(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_PosNum_pred_x27(x_4);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_PosNum_pred_x27(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_pred(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PosNum_pred_x27(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Num_div2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_free_object(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
}
static lean_object* _init_l_Num_ofZNum_x27___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Num_ofZNum_x27(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Num_ofZNum_x27___closed__1;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
default: 
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_ofZNum(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Num_sub_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_ctor_set_tag(x_2, 2);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = l_PosNum_sub_x27(x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_psub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Num_sub_x27(x_1, x_2);
x_4 = l_Num_ofZNum_x27(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Num_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Num_sub_x27(x_1, x_2);
x_4 = l_Num_ofZNum(x_3);
return x_4;
}
}
static lean_object* _init_l_Num_instSub___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Num_sub), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Num_instSub() {
_start:
{
lean_object* x_1; 
x_1 = l_Num_instSub___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZNum_add(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_2;
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_PosNum_add(x_3, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_PosNum_add(x_3, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
default: 
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = l_PosNum_sub_x27(x_10, x_11);
return x_12;
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_PosNum_sub_x27(x_14, x_13);
return x_15;
}
default: 
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = l_PosNum_add(x_16, x_18);
lean_ctor_set(x_2, 0, x_19);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = l_PosNum_add(x_16, x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
}
}
static lean_object* _init_l_ZNum_instAdd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ZNum_add), 2, 0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instAdd() {
_start:
{
lean_object* x_1; 
x_1 = l_ZNum_instAdd___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZNum_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
case 1:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = l_PosNum_mul(x_5, x_7);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_PosNum_mul(x_5, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
default: 
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = l_PosNum_mul(x_12, x_14);
lean_ctor_set(x_2, 0, x_15);
return x_2;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_PosNum_mul(x_12, x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_box(0);
return x_19;
}
case 1:
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = l_PosNum_mul(x_20, x_22);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 0, x_23);
return x_2;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_PosNum_mul(x_20, x_24);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
default: 
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_2, 0);
x_30 = l_PosNum_mul(x_27, x_29);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
lean_dec(x_2);
x_32 = l_PosNum_mul(x_27, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
}
}
}
}
}
static lean_object* _init_l_ZNum_instMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ZNum_mul), 2, 0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instMul() {
_start:
{
lean_object* x_1; 
x_1 = l_ZNum_instMul___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_ZNum_cmp(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
default: 
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = l_PosNum_cmp(x_6, x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_2, 0);
x_12 = l_PosNum_cmp(x_11, x_10);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_cmp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ZNum_cmp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_ZNum_instLT() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instLE() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_ZNum_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_ZNum_cmp(x_1, x_2);
x_4 = 0;
x_5 = l_instDecidableEqOrdering(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZNum_decidableLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ZNum_decidableLT(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ZNum_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_ZNum_decidableLT(x_2, x_1);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZNum_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ZNum_decidableLE(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PosNum_divModAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
lean_inc(x_3);
x_5 = l_Num_sub_x27(x_3, x_4);
x_6 = l_Num_ofZNum_x27(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Num_bit0(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = l_Num_bit1(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_PosNum_divMod(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_instOneNum___closed__1;
x_5 = l_PosNum_divModAux(x_1, x_3, x_4);
return x_5;
}
case 1:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_7 = l_PosNum_divMod(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Num_bit1(x_9);
x_11 = l_PosNum_divModAux(x_1, x_8, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_13 = l_PosNum_divMod(x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Num_bit0(x_15);
x_17 = l_PosNum_divModAux(x_1, x_14, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_PosNum_divMod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PosNum_divMod(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PosNum_div_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PosNum_divMod(x_2, x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PosNum_div_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PosNum_div_x27(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PosNum_mod_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PosNum_divMod(x_2, x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PosNum_mod_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PosNum_mod_x27(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
lean_inc(x_4);
lean_inc(x_2);
x_5 = l_Num_add(x_2, x_4);
lean_inc(x_3);
x_6 = l_Num_sub_x27(x_3, x_5);
x_7 = l_Num_ofZNum_x27(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = l_Num_div2(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Num_div2(x_2);
x_12 = l_Num_add(x_11, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l___private_Mathlib_Data_Num_Basic_0__PosNum_sqrtAux1(x_1, x_2, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_1 = x_7;
x_2 = x_9;
x_3 = x_10;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Num_div(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_PosNum_div_x27(x_5, x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Num_div(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Num_mod(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_PosNum_mod_x27(x_4, x_5);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_Num_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Num_mod(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Num_instDiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Num_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Num_instDiv() {
_start:
{
lean_object* x_1; 
x_1 = l_Num_instDiv___closed__1;
return x_1;
}
}
static lean_object* _init_l_Num_instMod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Num_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Num_instMod() {
_start:
{
lean_object* x_1; 
x_1 = l_Num_instMod___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Num_gcdAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l_Num_mod(x_3, x_2);
lean_dec(x_3);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Num_gcd(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Num_decidableLE(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Num_natSize(x_2);
x_5 = l_Num_natSize(x_1);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
x_7 = l_Num_gcdAux(x_6, x_2, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Num_natSize(x_1);
x_9 = l_Num_natSize(x_2);
x_10 = lean_nat_add(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
x_11 = l_Num_gcdAux(x_10, x_1, x_2);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_ZNum_div(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_PosNum_div_x27(x_5, x_6);
lean_dec(x_5);
x_8 = l_Num_toZNum(x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_PosNum_div_x27(x_9, x_10);
lean_dec(x_9);
x_12 = l_Num_toZNumNeg(x_11);
return x_12;
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = lean_box(0);
return x_13;
}
case 1:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_2);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_2, 0);
x_18 = l_PosNum_pred_x27(x_16);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_17);
x_19 = l_Num_div(x_18, x_1);
lean_dec(x_18);
x_20 = l_Num_succ_x27(x_19);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 0, x_20);
return x_2;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_dec(x_2);
x_23 = l_PosNum_pred_x27(x_21);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_22);
x_24 = l_Num_div(x_23, x_1);
lean_dec(x_23);
x_25 = l_Num_succ_x27(x_24);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_29 = x_2;
} else {
 lean_dec_ref(x_2);
 x_29 = lean_box(0);
}
x_30 = l_PosNum_pred_x27(x_27);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_28);
x_32 = l_Num_div(x_30, x_31);
lean_dec(x_30);
x_33 = l_Num_succ_x27(x_32);
if (lean_is_scalar(x_29)) {
 x_34 = lean_alloc_ctor(2, 1, 0);
} else {
 x_34 = x_29;
 lean_ctor_set_tag(x_34, 2);
}
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
default: 
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_1);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_2);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_1, 0);
x_38 = lean_ctor_get(x_2, 0);
x_39 = l_PosNum_pred_x27(x_37);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_38);
x_40 = l_Num_div(x_39, x_1);
lean_dec(x_39);
x_41 = l_Num_succ_x27(x_40);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_41);
return x_2;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_2, 0);
lean_inc(x_43);
lean_dec(x_2);
x_44 = l_PosNum_pred_x27(x_42);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_43);
x_45 = l_Num_div(x_44, x_1);
lean_dec(x_44);
x_46 = l_Num_succ_x27(x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_ctor_get(x_2, 0);
lean_inc(x_49);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_50 = x_2;
} else {
 lean_dec_ref(x_2);
 x_50 = lean_box(0);
}
x_51 = l_PosNum_pred_x27(x_48);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_49);
x_53 = l_Num_div(x_51, x_52);
lean_dec(x_51);
x_54 = l_Num_succ_x27(x_53);
if (lean_is_scalar(x_50)) {
 x_55 = lean_alloc_ctor(1, 1, 0);
} else {
 x_55 = x_50;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_ZNum_mod(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_ZNum_abs(x_2);
x_6 = l_Num_mod(x_1, x_5);
lean_dec(x_1);
x_7 = l_Num_toZNum(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_ZNum_abs(x_2);
x_11 = l_Num_mod(x_9, x_10);
lean_dec(x_9);
x_12 = l_Num_toZNum(x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_ZNum_abs(x_2);
x_15 = l_PosNum_pred_x27(x_13);
lean_inc(x_14);
x_16 = l_Num_mod(x_15, x_14);
lean_dec(x_15);
x_17 = l_Num_succ(x_16);
x_18 = l_Num_sub_x27(x_14, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_ZNum_instDiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ZNum_div), 2, 0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instDiv() {
_start:
{
lean_object* x_1; 
x_1 = l_ZNum_instDiv___closed__1;
return x_1;
}
}
static lean_object* _init_l_ZNum_instMod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ZNum_mod), 2, 0);
return x_1;
}
}
static lean_object* _init_l_ZNum_instMod() {
_start:
{
lean_object* x_1; 
x_1 = l_ZNum_instMod___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZNum_gcd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZNum_abs(x_1);
x_4 = l_ZNum_abs(x_2);
x_5 = l_Num_gcd(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_castZNum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
x_7 = l_castPosNum___rarg(x_2, x_3, x_6);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = l_castPosNum___rarg(x_2, x_3, x_8);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_castZNum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_castZNum___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castZNum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_castZNum___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_znumCoe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_castZNum___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_znumCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_znumCoe___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_castPosNum___at_instReprZNum___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_instReprZNum___spec__2(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_castPosNum___at_instReprZNum___spec__2___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_castPosNum___at_instReprZNum___spec__2(x_3);
x_5 = lean_int_add(x_4, x_4);
lean_dec(x_4);
x_6 = l_castPosNum___at_instReprZNum___spec__2___closed__1;
x_7 = lean_int_add(x_5, x_6);
lean_dec(x_5);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_castPosNum___at_instReprZNum___spec__2(x_8);
x_10 = lean_int_add(x_9, x_9);
lean_dec(x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_castZNum___at_instReprZNum___spec__1(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_ZNum_ofInt_x27___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_castPosNum___at_instReprZNum___spec__2(x_3);
return x_4;
}
default: 
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_castPosNum___at_instReprZNum___spec__2(x_5);
x_7 = lean_int_neg(x_6);
lean_dec(x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_instReprZNum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_castZNum___at_instReprZNum___spec__1(x_1);
x_4 = l_ZNum_ofInt_x27___closed__1;
x_5 = lean_int_dec_lt(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Int_repr(x_3);
lean_dec(x_3);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Int_repr(x_3);
lean_dec(x_3);
x_9 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Repr_addAppParen(x_9, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_instReprZNum___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_castPosNum___at_instReprZNum___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_castZNum___at_instReprZNum___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_castZNum___at_instReprZNum___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instReprZNum___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instReprZNum(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_One_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_BinaryRec(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_TypeStar(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Num_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Deprecated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_One_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_BinaryRec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_TypeStar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instOnePosNum = _init_l_instOnePosNum();
lean_mark_persistent(l_instOnePosNum);
l_instInhabitedPosNum = _init_l_instInhabitedPosNum();
lean_mark_persistent(l_instInhabitedPosNum);
l_instZeroNum = _init_l_instZeroNum();
lean_mark_persistent(l_instZeroNum);
l_instOneNum___closed__1 = _init_l_instOneNum___closed__1();
lean_mark_persistent(l_instOneNum___closed__1);
l_instOneNum = _init_l_instOneNum();
lean_mark_persistent(l_instOneNum);
l_instInhabitedNum = _init_l_instInhabitedNum();
lean_mark_persistent(l_instInhabitedNum);
l_instZeroZNum = _init_l_instZeroZNum();
lean_mark_persistent(l_instZeroZNum);
l_instOneZNum___closed__1 = _init_l_instOneZNum___closed__1();
lean_mark_persistent(l_instOneZNum___closed__1);
l_instOneZNum = _init_l_instOneZNum();
lean_mark_persistent(l_instOneZNum);
l_instInhabitedZNum = _init_l_instInhabitedZNum();
lean_mark_persistent(l_instInhabitedZNum);
l_PosNum_succ___closed__1 = _init_l_PosNum_succ___closed__1();
lean_mark_persistent(l_PosNum_succ___closed__1);
l_PosNum_instAdd___closed__1 = _init_l_PosNum_instAdd___closed__1();
lean_mark_persistent(l_PosNum_instAdd___closed__1);
l_PosNum_instAdd = _init_l_PosNum_instAdd();
lean_mark_persistent(l_PosNum_instAdd);
l_PosNum_instMul___closed__1 = _init_l_PosNum_instMul___closed__1();
lean_mark_persistent(l_PosNum_instMul___closed__1);
l_PosNum_instMul = _init_l_PosNum_instMul();
lean_mark_persistent(l_PosNum_instMul);
l_PosNum_instLT = _init_l_PosNum_instLT();
lean_mark_persistent(l_PosNum_instLT);
l_PosNum_instLE = _init_l_PosNum_instLE();
lean_mark_persistent(l_PosNum_instLE);
l_Num_instAdd___closed__1 = _init_l_Num_instAdd___closed__1();
lean_mark_persistent(l_Num_instAdd___closed__1);
l_Num_instAdd = _init_l_Num_instAdd();
lean_mark_persistent(l_Num_instAdd);
l_Num_instMul___closed__1 = _init_l_Num_instMul___closed__1();
lean_mark_persistent(l_Num_instMul___closed__1);
l_Num_instMul = _init_l_Num_instMul();
lean_mark_persistent(l_Num_instMul);
l_Num_instLT = _init_l_Num_instLT();
lean_mark_persistent(l_Num_instLT);
l_Num_instLE = _init_l_Num_instLE();
lean_mark_persistent(l_Num_instLE);
l_ZNum_instNeg___closed__1 = _init_l_ZNum_instNeg___closed__1();
lean_mark_persistent(l_ZNum_instNeg___closed__1);
l_ZNum_instNeg = _init_l_ZNum_instNeg();
lean_mark_persistent(l_ZNum_instNeg);
l_ZNum_pred___closed__1 = _init_l_ZNum_pred___closed__1();
lean_mark_persistent(l_ZNum_pred___closed__1);
l_ZNum_ofInt_x27___closed__1 = _init_l_ZNum_ofInt_x27___closed__1();
lean_mark_persistent(l_ZNum_ofInt_x27___closed__1);
l_PosNum_instSub___closed__1 = _init_l_PosNum_instSub___closed__1();
lean_mark_persistent(l_PosNum_instSub___closed__1);
l_PosNum_instSub = _init_l_PosNum_instSub();
lean_mark_persistent(l_PosNum_instSub);
l_Num_ofZNum_x27___closed__1 = _init_l_Num_ofZNum_x27___closed__1();
lean_mark_persistent(l_Num_ofZNum_x27___closed__1);
l_Num_instSub___closed__1 = _init_l_Num_instSub___closed__1();
lean_mark_persistent(l_Num_instSub___closed__1);
l_Num_instSub = _init_l_Num_instSub();
lean_mark_persistent(l_Num_instSub);
l_ZNum_instAdd___closed__1 = _init_l_ZNum_instAdd___closed__1();
lean_mark_persistent(l_ZNum_instAdd___closed__1);
l_ZNum_instAdd = _init_l_ZNum_instAdd();
lean_mark_persistent(l_ZNum_instAdd);
l_ZNum_instMul___closed__1 = _init_l_ZNum_instMul___closed__1();
lean_mark_persistent(l_ZNum_instMul___closed__1);
l_ZNum_instMul = _init_l_ZNum_instMul();
lean_mark_persistent(l_ZNum_instMul);
l_ZNum_instLT = _init_l_ZNum_instLT();
lean_mark_persistent(l_ZNum_instLT);
l_ZNum_instLE = _init_l_ZNum_instLE();
lean_mark_persistent(l_ZNum_instLE);
l_Num_instDiv___closed__1 = _init_l_Num_instDiv___closed__1();
lean_mark_persistent(l_Num_instDiv___closed__1);
l_Num_instDiv = _init_l_Num_instDiv();
lean_mark_persistent(l_Num_instDiv);
l_Num_instMod___closed__1 = _init_l_Num_instMod___closed__1();
lean_mark_persistent(l_Num_instMod___closed__1);
l_Num_instMod = _init_l_Num_instMod();
lean_mark_persistent(l_Num_instMod);
l_ZNum_instDiv___closed__1 = _init_l_ZNum_instDiv___closed__1();
lean_mark_persistent(l_ZNum_instDiv___closed__1);
l_ZNum_instDiv = _init_l_ZNum_instDiv();
lean_mark_persistent(l_ZNum_instDiv);
l_ZNum_instMod___closed__1 = _init_l_ZNum_instMod___closed__1();
lean_mark_persistent(l_ZNum_instMod___closed__1);
l_ZNum_instMod = _init_l_ZNum_instMod();
lean_mark_persistent(l_ZNum_instMod);
l_castPosNum___at_instReprZNum___spec__2___closed__1 = _init_l_castPosNum___at_instReprZNum___spec__2___closed__1();
lean_mark_persistent(l_castPosNum___at_instReprZNum___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
