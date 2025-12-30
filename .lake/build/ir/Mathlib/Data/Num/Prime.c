// Lean compiler output
// Module: Mathlib.Data.Num.Prime
// Imports: Init Mathlib.Data.Num.Lemmas Mathlib.Data.Nat.Prime.Defs Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_PosNum_minFac___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter(lean_object*);
lean_object* l_PosNum_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_minFac(lean_object*);
LEAN_EXPORT uint8_t l_Num_decidablePrime(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_decidablePrime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_minFacAux(lean_object*, lean_object*, lean_object*);
uint8_t l_PosNum_decidableLT(lean_object*, lean_object*);
lean_object* l_PosNum_succ(lean_object*);
uint8_t l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter(lean_object*);
static lean_object* l_PosNum_minFac___closed__1;
LEAN_EXPORT lean_object* l_Num_minFac(lean_object*);
LEAN_EXPORT lean_object* l_castPosNum___at_PosNum_minFac___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Num_decidablePrime___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_PosNum_decidableDvd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_PosNum_mul(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_PosNum_decidablePrime(lean_object*);
LEAN_EXPORT lean_object* l_PosNum_minFacAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
lean_inc(x_3);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_3);
lean_inc_n(x_8, 2);
x_9 = l_PosNum_mul(x_8, x_8);
x_10 = l_PosNum_decidableLT(x_1, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_inc(x_1);
lean_inc(x_8);
x_11 = l_PosNum_decidableDvd(x_8, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = l_PosNum_succ(x_3);
x_2 = x_7;
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_1;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_2);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Num_Prime_0__PosNum_minFacAux_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_PosNum_minFac___spec__1(lean_object* x_1) {
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
x_4 = l_castPosNum___at_PosNum_minFac___spec__1(x_3);
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
x_9 = l_castPosNum___at_PosNum_minFac___spec__1(x_8);
x_10 = lean_nat_add(x_9, x_9);
lean_dec(x_9);
return x_10;
}
}
}
}
static lean_object* _init_l_PosNum_minFac___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_PosNum_ofNat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PosNum_minFac(lean_object* x_1) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_castPosNum___at_PosNum_minFac___spec__1(x_4);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = l_PosNum_minFacAux(x_1, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_castPosNum___at_PosNum_minFac___spec__1(x_8);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = l_PosNum_minFacAux(x_9, x_10, x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_PosNum_minFac___closed__1;
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_castPosNum___at_PosNum_minFac___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_castPosNum___at_PosNum_minFac___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
case 1:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
default: 
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Num_Prime_0__PosNum_minFac_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_PosNum_decidablePrime(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_castPosNum___at_PosNum_minFac___spec__1(x_4);
lean_dec(x_4);
x_6 = lean_box(0);
lean_inc(x_1);
x_7 = l_PosNum_minFacAux(x_1, x_5, x_6);
x_8 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_7, x_1);
lean_dec(x_1);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l_castPosNum___at_PosNum_minFac___spec__1(x_9);
lean_dec(x_9);
x_12 = lean_box(0);
lean_inc(x_10);
x_13 = l_PosNum_minFacAux(x_10, x_11, x_12);
x_14 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_13, x_10);
lean_dec(x_10);
lean_dec(x_13);
return x_14;
}
}
default: 
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = l___private_Mathlib_Data_Num_Basic_0__decEqPosNum____x40_Mathlib_Data_Num_Basic___hyg_29_(x_15, x_16);
lean_dec(x_15);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_PosNum_decidablePrime___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_PosNum_decidablePrime(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Num_minFac(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_PosNum_minFac___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PosNum_minFac(x_3);
return x_4;
}
}
}
LEAN_EXPORT uint8_t l_Num_decidablePrime(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PosNum_decidablePrime(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Num_decidablePrime___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Num_decidablePrime(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Num_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Num_Prime(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Num_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PosNum_minFac___closed__1 = _init_l_PosNum_minFac___closed__1();
lean_mark_persistent(l_PosNum_minFac___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
