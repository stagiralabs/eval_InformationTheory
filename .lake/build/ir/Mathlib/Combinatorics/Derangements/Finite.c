// Lean compiler output
// Module: Mathlib.Combinatorics.Derangements.Finite
// Imports: Init Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Combinatorics.Derangements.Basic Mathlib.Data.Fintype.BigOperators Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements(lean_object*);
LEAN_EXPORT uint8_t l_instFintypeElemPermDerangements___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements(lean_object*);
lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT uint8_t l_instDecidablePredPermDerangements___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidablePredPermDerangements___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_numDerangements(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_numDerangements___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Fintype_decidableForallFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidablePredPermDerangements___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_instDecidableNot___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT uint8_t l_instDecidablePredPermDerangements___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidablePredPermDerangements___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_Fintype_decidableForallFintype___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidablePredPermDerangements___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_instDecidablePredPermDerangements___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredPermDerangements___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_instDecidablePredPermDerangements___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_instFintypeElemPermDerangements___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidablePredPermDerangements___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_Fintype_decidableForallFintype___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_instFintypeElemPermDerangements___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_Equiv_instFintype___rarg(x_1, x_1, x_2, x_2);
x_5 = l_Subtype_fintype___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instFintypeElemPermDerangements___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemPermDerangements___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_instFintypeElemPermDerangements___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_numDerangements(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_dec_eq(x_5, x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_nat_add(x_7, x_4);
x_9 = l_numDerangements(x_7);
lean_dec(x_7);
x_10 = l_numDerangements(x_8);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_12 = lean_nat_mul(x_8, x_11);
lean_dec(x_11);
lean_dec(x_8);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_5);
x_13 = lean_unsigned_to_nat(0u);
return x_13;
}
}
else
{
lean_object* x_14; 
x_14 = lean_unsigned_to_nat(1u);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_numDerangements___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_numDerangements(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Derangements_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Derangements_Finite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Derangements_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
