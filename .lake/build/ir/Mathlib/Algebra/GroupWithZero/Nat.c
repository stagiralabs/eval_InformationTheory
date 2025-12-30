// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Nat
// Imports: Init Mathlib.Algebra.Group.Nat.Defs Mathlib.Algebra.GroupWithZero.Defs Mathlib.Tactic.Spread
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
LEAN_EXPORT lean_object* l_Nat_instMulZeroOneClass;
LEAN_EXPORT lean_object* l_Nat_instMulZeroClass;
LEAN_EXPORT lean_object* l_Nat_instSemigroupWithZero;
extern lean_object* l_Nat_instMonoid;
extern lean_object* l_Nat_instMulOneClass;
extern lean_object* l_Nat_instAddMonoid;
static lean_object* l_Nat_instCommMonoidWithZero___closed__1;
extern lean_object* l_instMulNat;
extern lean_object* l_Nat_instSemigroup;
LEAN_EXPORT lean_object* l_Nat_instMonoidWithZero;
static lean_object* l_Nat_instSemigroupWithZero___closed__1;
LEAN_EXPORT lean_object* l_Nat_instCancelCommMonoidWithZero;
LEAN_EXPORT lean_object* l_Nat_instCommMonoidWithZero;
extern lean_object* l_Nat_instCommMonoid;
static lean_object* l_Nat_instMonoidWithZero___closed__1;
static lean_object* l_Nat_instMulZeroOneClass___closed__1;
static lean_object* l_Nat_instMulZeroClass___closed__1;
static lean_object* _init_l_Nat_instMulZeroClass___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instAddMonoid;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_instMulNat;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Nat_instMulZeroClass() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instMulZeroClass___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instSemigroupWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instSemigroup;
x_2 = l_Nat_instAddMonoid;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instSemigroupWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instSemigroupWithZero___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instMonoidWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instMonoid;
x_2 = l_Nat_instAddMonoid;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instMonoidWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instMonoidWithZero___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instCommMonoidWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instCommMonoid;
x_2 = l_Nat_instAddMonoid;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instCommMonoidWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instCommMonoidWithZero___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instCancelCommMonoidWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instCommMonoidWithZero;
return x_1;
}
}
static lean_object* _init_l_Nat_instMulZeroOneClass___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Nat_instMulOneClass;
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_dec(x_3);
x_4 = l_instMulNat;
lean_ctor_set(x_1, 1, x_4);
x_5 = l_Nat_instAddMonoid;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_instMulNat;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Nat_instAddMonoid;
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
static lean_object* _init_l_Nat_instMulZeroOneClass() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instMulZeroOneClass___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Spread(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Spread(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instMulZeroClass___closed__1 = _init_l_Nat_instMulZeroClass___closed__1();
lean_mark_persistent(l_Nat_instMulZeroClass___closed__1);
l_Nat_instMulZeroClass = _init_l_Nat_instMulZeroClass();
lean_mark_persistent(l_Nat_instMulZeroClass);
l_Nat_instSemigroupWithZero___closed__1 = _init_l_Nat_instSemigroupWithZero___closed__1();
lean_mark_persistent(l_Nat_instSemigroupWithZero___closed__1);
l_Nat_instSemigroupWithZero = _init_l_Nat_instSemigroupWithZero();
lean_mark_persistent(l_Nat_instSemigroupWithZero);
l_Nat_instMonoidWithZero___closed__1 = _init_l_Nat_instMonoidWithZero___closed__1();
lean_mark_persistent(l_Nat_instMonoidWithZero___closed__1);
l_Nat_instMonoidWithZero = _init_l_Nat_instMonoidWithZero();
lean_mark_persistent(l_Nat_instMonoidWithZero);
l_Nat_instCommMonoidWithZero___closed__1 = _init_l_Nat_instCommMonoidWithZero___closed__1();
lean_mark_persistent(l_Nat_instCommMonoidWithZero___closed__1);
l_Nat_instCommMonoidWithZero = _init_l_Nat_instCommMonoidWithZero();
lean_mark_persistent(l_Nat_instCommMonoidWithZero);
l_Nat_instCancelCommMonoidWithZero = _init_l_Nat_instCancelCommMonoidWithZero();
lean_mark_persistent(l_Nat_instCancelCommMonoidWithZero);
l_Nat_instMulZeroOneClass___closed__1 = _init_l_Nat_instMulZeroOneClass___closed__1();
lean_mark_persistent(l_Nat_instMulZeroOneClass___closed__1);
l_Nat_instMulZeroOneClass = _init_l_Nat_instMulZeroOneClass();
lean_mark_persistent(l_Nat_instMulZeroOneClass);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
