// Lean compiler output
// Module: Mathlib.Dynamics.Flow
// Imports: Init Mathlib.Topology.Algebra.Group.Basic Mathlib.Logic.Function.Iterate
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
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_fromIter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_toHomeomorph___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Flow_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_fromIter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_toHomeomorph(lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Flow_reverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_fromIter___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_reverse(lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict(lean_object*);
LEAN_EXPORT lean_object* l_Flow_fromIter___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_fromIter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Flow_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_toHomeomorph___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Flow_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Flow_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Flow_instInhabited___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Flow_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Flow_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Flow_instInhabited(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Flow_instCoeFunForallForall___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Flow_instCoeFunForallForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Flow_instCoeFunForallForall(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Flow_fromIter___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_iterate___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Flow_fromIter___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Flow_fromIter___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_fromIter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Flow_fromIter___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Flow_fromIter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Flow_fromIter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Flow_fromIter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Flow_fromIter(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Flow_restrict___elambda__1___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Flow_restrict___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Flow_restrict___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Flow_restrict___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Flow_restrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Flow_restrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_7);
x_12 = lean_apply_2(x_6, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Flow_reverse___elambda__1___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_reverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Flow_reverse___elambda__1___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Flow_reverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Flow_reverse___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_reverse___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Flow_reverse___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Flow_toHomeomorph___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_6);
lean_inc(x_7);
x_8 = lean_apply_1(x_6, x_7);
x_9 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_7);
x_12 = lean_apply_1(x_6, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Flow_toHomeomorph(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Flow_toHomeomorph___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Flow_toHomeomorph___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Flow_toHomeomorph___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Function_Iterate(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Dynamics_Flow(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
