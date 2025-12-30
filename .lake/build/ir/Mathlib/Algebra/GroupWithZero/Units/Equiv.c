// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Units.Equiv
// Imports: Init Mathlib.Algebra.Group.Units.Equiv Mathlib.Algebra.GroupWithZero.Units.Basic
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
lean_object* l_Units_mk0___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__2(lean_object*);
lean_object* l_Units_mulLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulLeft_u2080(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulRight_u2080___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__1(lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulRight_u2080(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulLeft_u2080___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080(lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2(lean_object*, lean_object*);
lean_object* l_Units_mulRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080(lean_object*);
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Units_mk0___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_unitsEquivNeZero___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_unitsEquivNeZero___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_unitsEquivNeZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_unitsEquivNeZero___elambda__2___rarg___boxed), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_unitsEquivNeZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_unitsEquivNeZero___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_unitsEquivNeZero___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_unitsEquivNeZero___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulLeft_u2080___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Units_mk0___rarg(x_1, x_2, lean_box(0));
x_7 = l_Units_mulLeft___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulLeft_u2080(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_mulLeft_u2080___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulRight_u2080___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Units_mk0___rarg(x_1, x_2, lean_box(0));
x_7 = l_Units_mulRight___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulRight_u2080(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_mulRight_u2080___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_4);
x_6 = l_MulZeroOneClass_toMulZeroClass___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_3, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_divRight_u2080___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_divRight_u2080___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_divRight_u2080___elambda__2___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_Equiv_divRight_u2080___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_divRight_u2080(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_divRight_u2080___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_divLeft_u2080___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Equiv_divLeft_u2080___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_divLeft_u2080(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_divLeft_u2080___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Equiv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Equiv(builtin, lean_io_mk_world());
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
