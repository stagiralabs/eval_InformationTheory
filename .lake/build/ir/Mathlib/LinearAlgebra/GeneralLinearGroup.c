// Lean compiler output
// Module: Mathlib.LinearAlgebra.GeneralLinearGroup
// Imports: Init Mathlib.Algebra.Module.Equiv.Basic
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
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_ofLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_generalLinearEquiv___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_generalLinearEquiv(lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_ofLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
lean_ctor_set(x_4, 1, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_GeneralLinearGroup_toLinearEquiv___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_ofLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_4);
x_7 = l_LinearEquiv_symm___rarg(x_1, x_1, x_2, x_2, x_3, x_3, x_6, x_6, lean_box(0), lean_box(0), x_4);
lean_dec(x_6);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_4, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_11);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_GeneralLinearGroup_ofLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_GeneralLinearGroup_ofLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_generalLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_toLinearEquiv___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_ofLinearEquiv___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_GeneralLinearGroup_generalLinearEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_GeneralLinearGroup_generalLinearEquiv___rarg), 3, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Equiv_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_GeneralLinearGroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_LinearMap_GeneralLinearGroup_toLinearEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
