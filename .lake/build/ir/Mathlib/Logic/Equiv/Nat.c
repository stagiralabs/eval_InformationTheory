// Lean compiler output
// Module: Mathlib.Logic.Equiv.Nat
// Imports: Init Mathlib.Data.Nat.Bits Mathlib.Data.Nat.Pairing
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
lean_object* l_Nat_bit(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_boolProdNatEquivNat___elambda__1(lean_object*);
static lean_object* l_Equiv_boolProdNatEquivNat___closed__2;
lean_object* l_Equiv_boolProdEquivSum(lean_object*);
extern lean_object* l_Equiv_intEquivNatSumNat;
LEAN_EXPORT lean_object* l_Equiv_prodEquivOfEquivNat(lean_object*);
static lean_object* l_Equiv_natSumNatEquivNat___closed__1;
LEAN_EXPORT lean_object* l_Equiv_prodEquivOfEquivNat___rarg(lean_object*);
lean_object* l_Equiv_prodCongr___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
static lean_object* l_Equiv_natSumNatEquivNat___closed__2;
LEAN_EXPORT lean_object* l_Equiv_natSumNatEquivNat;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_boolProdNatEquivNat;
static lean_object* l_Equiv_natSumNatEquivNat___closed__3;
LEAN_EXPORT lean_object* l_Equiv_intEquivNat;
static lean_object* l_Equiv_boolProdNatEquivNat___closed__3;
extern lean_object* l_Nat_pairEquiv;
static lean_object* l_Equiv_boolProdNatEquivNat___closed__1;
lean_object* l_Nat_boddDiv2___boxed(lean_object*);
static lean_object* l_Equiv_intEquivNat___closed__1;
LEAN_EXPORT lean_object* l_Equiv_boolProdNatEquivNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Nat_bit(x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Equiv_boolProdNatEquivNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_boolProdNatEquivNat___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_boolProdNatEquivNat___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_boddDiv2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_boolProdNatEquivNat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_boolProdNatEquivNat___closed__1;
x_2 = l_Equiv_boolProdNatEquivNat___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_boolProdNatEquivNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_boolProdNatEquivNat___closed__3;
return x_1;
}
}
static lean_object* _init_l_Equiv_natSumNatEquivNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_boolProdEquivSum(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Equiv_natSumNatEquivNat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_natSumNatEquivNat___closed__1;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Equiv_natSumNatEquivNat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_natSumNatEquivNat___closed__2;
x_2 = l_Equiv_boolProdNatEquivNat;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_natSumNatEquivNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_natSumNatEquivNat___closed__3;
return x_1;
}
}
static lean_object* _init_l_Equiv_intEquivNat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_intEquivNatSumNat;
x_2 = l_Equiv_natSumNatEquivNat;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_intEquivNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_intEquivNat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_prodEquivOfEquivNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc_n(x_1, 2);
x_2 = l_Equiv_prodCongr___rarg(x_1, x_1);
x_3 = l_Nat_pairEquiv;
x_4 = l_Equiv_trans___rarg(x_2, x_3);
x_5 = l_Equiv_symm___rarg(x_1);
x_6 = l_Equiv_trans___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_prodEquivOfEquivNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_prodEquivOfEquivNat___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Bits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Pairing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Equiv_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Bits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Pairing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_boolProdNatEquivNat___closed__1 = _init_l_Equiv_boolProdNatEquivNat___closed__1();
lean_mark_persistent(l_Equiv_boolProdNatEquivNat___closed__1);
l_Equiv_boolProdNatEquivNat___closed__2 = _init_l_Equiv_boolProdNatEquivNat___closed__2();
lean_mark_persistent(l_Equiv_boolProdNatEquivNat___closed__2);
l_Equiv_boolProdNatEquivNat___closed__3 = _init_l_Equiv_boolProdNatEquivNat___closed__3();
lean_mark_persistent(l_Equiv_boolProdNatEquivNat___closed__3);
l_Equiv_boolProdNatEquivNat = _init_l_Equiv_boolProdNatEquivNat();
lean_mark_persistent(l_Equiv_boolProdNatEquivNat);
l_Equiv_natSumNatEquivNat___closed__1 = _init_l_Equiv_natSumNatEquivNat___closed__1();
lean_mark_persistent(l_Equiv_natSumNatEquivNat___closed__1);
l_Equiv_natSumNatEquivNat___closed__2 = _init_l_Equiv_natSumNatEquivNat___closed__2();
lean_mark_persistent(l_Equiv_natSumNatEquivNat___closed__2);
l_Equiv_natSumNatEquivNat___closed__3 = _init_l_Equiv_natSumNatEquivNat___closed__3();
lean_mark_persistent(l_Equiv_natSumNatEquivNat___closed__3);
l_Equiv_natSumNatEquivNat = _init_l_Equiv_natSumNatEquivNat();
lean_mark_persistent(l_Equiv_natSumNatEquivNat);
l_Equiv_intEquivNat___closed__1 = _init_l_Equiv_intEquivNat___closed__1();
lean_mark_persistent(l_Equiv_intEquivNat___closed__1);
l_Equiv_intEquivNat = _init_l_Equiv_intEquivNat();
lean_mark_persistent(l_Equiv_intEquivNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
