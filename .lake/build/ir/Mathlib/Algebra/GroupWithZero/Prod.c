// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Prod
// Imports: Init Mathlib.Algebra.Group.Prod Mathlib.Algebra.GroupWithZero.Hom Mathlib.Algebra.GroupWithZero.Units.Basic
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
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg(lean_object*);
lean_object* l_Prod_instMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mulMulHom___at_mulMonoidHom___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_divMonoidWithZeroHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMulZeroClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulMonoidWithZeroHom(lean_object*);
lean_object* l_Prod_instMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMulZeroOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instSemigroupWithZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMonoidWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulMonoidWithZeroHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_divMonoidWithZeroHom(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMulZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instSemigroupWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instCommMonoidWithZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMonoidWithZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1(lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMulZeroOneClass(lean_object*, lean_object*);
lean_object* l_Prod_instMulOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instCommMonoidWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instMulZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Prod_instMul___rarg), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instMulZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instMulZeroClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instSemigroupWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Prod_instMul___rarg), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instSemigroupWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instSemigroupWithZero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instMulZeroOneClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instMulOneClass___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instMulZeroOneClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instMulZeroOneClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instMonoidWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instMonoidWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instMonoidWithZero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_instCommMonoidWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instMonoid___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_instCommMonoidWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instCommMonoidWithZero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulMonoidWithZeroHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_mulMulHom___at_mulMonoidHom___spec__1___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mulMonoidWithZeroHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_mulMonoidWithZeroHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_1);
x_3 = lean_alloc_closure((void*)(l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_divMonoidHom___at_divMonoidWithZeroHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_divMonoidWithZeroHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_divMonoidHom___at_divMonoidWithZeroHom___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_divMonoidWithZeroHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_divMonoidWithZeroHom___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
