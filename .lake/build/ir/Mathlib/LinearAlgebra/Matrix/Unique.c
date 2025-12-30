// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Unique
// Imports: Init Mathlib.Data.Matrix.Basic
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
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv___rarg(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueEquiv___elambda__1___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueEquiv___elambda__2___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Matrix_uniqueEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueEquiv___elambda__1___rarg___boxed), 3, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueEquiv___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_uniqueEquiv___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_uniqueEquiv___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueAddEquiv___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAddEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_uniqueAddEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueLinearEquiv___elambda__1___rarg), 4, 0);
return x_4;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Matrix_uniqueEquiv___rarg(x_1, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_uniqueLinearEquiv___elambda__1___rarg), 4, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
lean_ctor_set(x_6, 1, x_8);
return x_6;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_uniqueLinearEquiv___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_uniqueLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_Matrix_uniqueEquiv___rarg(x_1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_uniqueRingEquiv___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueRingEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_uniqueRingEquiv___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Matrix_uniqueEquiv___rarg(x_1, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_uniqueAlgEquiv___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_uniqueAlgEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_uniqueAlgEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Unique(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_uniqueLinearEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
