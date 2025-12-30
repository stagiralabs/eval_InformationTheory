// Lean compiler output
// Module: Mathlib.Analysis.Normed.Lp.LpEquiv
// Imports: Init Mathlib.Analysis.Normed.Lp.lpSpace Mathlib.Analysis.Normed.Lp.PiLp Mathlib.Topology.ContinuousMap.Bounded.Basic
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
LEAN_EXPORT lean_object* l_Equiv_lpPiLp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_lpPiLp___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_lpPiLp___elambda__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Equiv_lpPiLp___elambda__2___rarg), 2, 0);
x_5 = lean_alloc_closure((void*)(l_Equiv_lpPiLp___elambda__1___rarg___boxed), 1, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_lpPiLp___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_lpPiLp___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_lpPiLp___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_lpPiLp___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_lpPiLp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_lpPiLp___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_lpPiLp___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_lpPiLp___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_lpPiLp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_lpPiLp___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Lp_lpSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Lp_PiLp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Bounded_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Lp_LpEquiv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Lp_lpSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Lp_PiLp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Bounded_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
