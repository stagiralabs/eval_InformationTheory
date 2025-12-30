// Lean compiler output
// Module: Mathlib.LinearAlgebra.Multilinear.Pi
// Imports: Init Mathlib.LinearAlgebra.Pi Mathlib.LinearAlgebra.Multilinear.Basic
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
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily_u2097___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily_u2097(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___elambda__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___elambda__1___rarg), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___elambda__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_Pi_addMonoid___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___elambda__3___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___rarg___boxed), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_piFamily___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_piFamily___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_piFamily___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily_u2097___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily___rarg___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piFamily_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_piFamily_u2097___rarg), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Multilinear_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Multilinear_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Multilinear_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1 = _init_l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_MultilinearMap_piFamily_u2097___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
