// Lean compiler output
// Module: Mathlib.Analysis.Calculus.LogDeriv
// Imports: Init Mathlib.Analysis.Calculus.Deriv.ZPow
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
LEAN_EXPORT lean_object* l_logDeriv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_logDeriv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_NormedCommRing_toNonUnitalNormedCommRing___rarg(lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_NormedField_toNormedDivisionRing___rarg(lean_object*);
static lean_object* l_RingHom_id___at_logDeriv___spec__2___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_logDeriv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedField_toNormedCommRing___rarg(lean_object*);
lean_object* l_NonUnitalNormedRing_toNormedAddCommGroup___rarg(lean_object*);
static lean_object* _init_l_RingHom_id___at_logDeriv___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = l_NormedField_toNormedCommRing___rarg(x_1);
x_7 = l_NormedCommRing_toNonUnitalNormedCommRing___rarg(x_6);
x_8 = l_NonUnitalNormedRing_toNormedAddCommGroup___rarg(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = l_NormedField_toNormedCommRing___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg(x_2, x_3, x_4, lean_box(0), x_5);
x_12 = lean_apply_1(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_deriv___at_logDeriv___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_logDeriv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_6 = l_NormedField_toNormedDivisionRing___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_deriv___at_logDeriv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
x_10 = lean_apply_1(x_4, x_5);
x_11 = lean_apply_2(x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_logDeriv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_logDeriv___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_logDeriv___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_logDeriv___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____at_logDeriv___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_deriv___at_logDeriv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_deriv___at_logDeriv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_logDeriv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_logDeriv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_ZPow(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_LogDeriv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_ZPow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_logDeriv___spec__2___closed__1 = _init_l_RingHom_id___at_logDeriv___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_logDeriv___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
