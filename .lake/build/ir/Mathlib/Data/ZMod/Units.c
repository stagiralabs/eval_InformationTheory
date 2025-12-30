// Lean compiler output
// Module: Mathlib.Data.ZMod.Units
// Imports: Init Mathlib.Algebra.BigOperators.Associated Mathlib.Data.ZMod.Basic Mathlib.RingTheory.Coprime.Lemmas
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
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_unitsMap___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_unitsMap___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsMap(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_ZMod_unitsMap___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_unitsMap___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_unitsMap___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1;
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_unitsMap___spec__3(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_ZMod_unitsMap___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_unitsMap___spec__4(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ZMod_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_unitsMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_unitsMap___spec__4(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_unitsMap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_9 = l_ZMod_val(x_8, x_3);
lean_dec(x_3);
lean_dec(x_8);
x_10 = l_Nat_cast___at_ZMod_unitsMap___spec__4(x_1, x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Int_cast___at_ZMod_unitsMap___spec__3(x_1, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_unitsMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_unitsMap___spec__2___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_ZMod_unitsMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_ZMod_commRing(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Semiring_toMonoidWithZero___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1___boxed), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_unitsMap___spec__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___lambda__1), 2, 0);
x_6 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Units_map___at_ZMod_unitsMap___spec__7(x_1, x_2, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_unitsMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_cast___at_ZMod_unitsMap___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_unitsMap___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ZMod_castHom___at_ZMod_unitsMap___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHomClass_toMonoidHom___at_ZMod_unitsMap___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHomClass_toMonoidHom___at_ZMod_unitsMap___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_ZMod_unitsMap___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_map___at_ZMod_unitsMap___spec__7___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_map___at_ZMod_unitsMap___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_map___at_ZMod_unitsMap___spec__7(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Associated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Coprime_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_ZMod_Units(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Associated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Coprime_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_ZMod_unitsMap___spec__6___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
