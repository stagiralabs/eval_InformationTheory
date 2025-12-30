// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Defs
// Imports: Init Mathlib.Algebra.Group.Defs Mathlib.Logic.Nontrivial.Defs Mathlib.Tactic.SplitIfs Mathlib.Logic.Basic
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
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid(lean_object*);
LEAN_EXPORT lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SemigroupWithZero_toMulZeroClass(lean_object*);
LEAN_EXPORT lean_object* l_SemigroupWithZero_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommMonoidWithZero_toMonoidWithZero(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZero_toSemigroupWithZero(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZero_toMulZeroOneClass(lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CancelCommMonoidWithZero_toCancelMonoidWithZero(lean_object*);
LEAN_EXPORT lean_object* l_MulZeroOneClass_toMulZeroClass(lean_object*);
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZero_toSemigroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero(lean_object*);
LEAN_EXPORT lean_object* l_CancelCommMonoidWithZero_toCancelMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SemigroupWithZero_toMulZeroClass___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_SemigroupWithZero_toMulZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SemigroupWithZero_toMulZeroClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_MulZeroOneClass_toMulZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulZeroOneClass_toMulZeroClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_MonoidWithZero_toMulZeroOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidWithZero_toMulZeroOneClass___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZero_toSemigroupWithZero___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_MonoidWithZero_toSemigroupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidWithZero_toSemigroupWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_CommMonoidWithZero_toMonoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommMonoidWithZero_toMonoidWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelCommMonoidWithZero_toCancelMonoidWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelCommMonoidWithZero_toCancelMonoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CancelCommMonoidWithZero_toCancelMonoidWithZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 3);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
lean_ctor_set(x_1, 3, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set(x_12, 2, x_4);
lean_ctor_set(x_12, 3, x_6);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_GroupWithZero_toDivInvMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GroupWithZero_toDivInvMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommGroupWithZero_toGroupWithZero___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_CommGroupWithZero_toGroupWithZero___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 3);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
lean_ctor_set(x_1, 3, x_6);
return x_1;
}
else
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set(x_12, 2, x_4);
lean_ctor_set(x_12, 3, x_6);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_CommGroupWithZero_toGroupWithZero___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_17 = x_1;
} else {
 lean_dec_ref(x_1);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(0, 4, 0);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_4);
lean_ctor_set(x_18, 3, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_toGroupWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommGroupWithZero_toGroupWithZero___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Nontrivial_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_SplitIfs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Nontrivial_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_SplitIfs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
