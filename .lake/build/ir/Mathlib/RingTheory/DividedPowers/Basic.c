// Lean compiler output
// Module: Mathlib.RingTheory.DividedPowers.Basic
// Imports: Init Mathlib.RingTheory.PowerSeries.Basic Mathlib.Combinatorics.Enumerative.Bell Mathlib.Data.Nat.Choose.Multinomial
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
LEAN_EXPORT lean_object* l_dividedPowersBot___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_exp___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot(lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_exp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_exp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_PowerSeries_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_exp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_7);
x_8 = lean_apply_2(x_1, x_5, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
return x_7;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_4, x_10);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_12 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_2);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dividedPowersBot___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_dividedPowersBot___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_dividedPowersBot___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_dividedPowersBot___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_dividedPowersBot___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dividedPowersBot___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_dividedPowersBot___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_dividedPowersBot___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instInhabitedDividedPowersBotIdealOfDecidableEq___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCoeFunDividedPowersForallNatForall___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCoeFunDividedPowersForallNatForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instCoeFunDividedPowersForallNatForall(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_exp___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_exp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_DividedPowers_exp___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_PowerSeries_mk___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_exp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DividedPowers_exp___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_exp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DividedPowers_exp(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_5 = l_Equiv_symm___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_2, x_3, x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_DividedPowers_ofRingEquiv___elambda__1___rarg), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_DividedPowers_ofRingEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DividedPowers_ofRingEquiv___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_DividedPowers_ofRingEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_ofRingEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_DividedPowers_ofRingEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DividedPowers_ofRingEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_DividedPowers_equiv___elambda__1___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DividedPowers_ofRingEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_DividedPowers_equiv___elambda__2___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_DividedPowers_equiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, lean_box(0));
x_8 = l_Equiv_symm___rarg(x_5);
x_9 = lean_alloc_closure((void*)(l_DividedPowers_equiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DividedPowers_equiv___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_DividedPowers_equiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_DividedPowers_equiv___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DividedPowers_equiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_DividedPowers_equiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerSeries_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Enumerative_Bell(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Multinomial(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_DividedPowers_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerSeries_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Enumerative_Bell(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Multinomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
