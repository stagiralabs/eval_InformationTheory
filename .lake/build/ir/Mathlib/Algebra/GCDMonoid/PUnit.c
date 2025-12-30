// Lean compiler output
// Module: Mathlib.Algebra.GCDMonoid.PUnit
// Imports: Init Mathlib.Algebra.GCDMonoid.Basic Mathlib.Algebra.Ring.PUnit
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
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__1(lean_object*);
lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_PUnit_normalizedGCDMonoid___closed__3;
static lean_object* l_PUnit_normalizedGCDMonoid___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid;
static lean_object* l_PUnit_normalizedGCDMonoid___closed__2;
static lean_object* l_PUnit_normalizedGCDMonoid___closed__4;
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__1___boxed(lean_object*);
extern lean_object* l_PUnit_cancelCommMonoidWithZero;
static lean_object* l_PUnit_normalizedGCDMonoid___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__2(lean_object*, lean_object*);
static lean_object* l_PUnit_normalizedGCDMonoid___closed__1;
static lean_object* _init_l_PUnit_normalizedGCDMonoid___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_cancelCommMonoidWithZero;
x_2 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_normalizedGCDMonoid___lambda__1___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_normalizedGCDMonoid___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_normalizedGCDMonoid___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_normalizedGCDMonoid___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_normalizedGCDMonoid___closed__3;
x_2 = l_PUnit_normalizedGCDMonoid___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_PUnit_normalizedGCDMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_normalizedGCDMonoid___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_normalizedGCDMonoid___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_normalizedGCDMonoid___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_normalizedGCDMonoid___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_PUnit(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GCDMonoid_PUnit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_PUnit(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PUnit_normalizedGCDMonoid___lambda__1___closed__1 = _init_l_PUnit_normalizedGCDMonoid___lambda__1___closed__1();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___lambda__1___closed__1);
l_PUnit_normalizedGCDMonoid___lambda__1___closed__2 = _init_l_PUnit_normalizedGCDMonoid___lambda__1___closed__2();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___lambda__1___closed__2);
l_PUnit_normalizedGCDMonoid___closed__1 = _init_l_PUnit_normalizedGCDMonoid___closed__1();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___closed__1);
l_PUnit_normalizedGCDMonoid___closed__2 = _init_l_PUnit_normalizedGCDMonoid___closed__2();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___closed__2);
l_PUnit_normalizedGCDMonoid___closed__3 = _init_l_PUnit_normalizedGCDMonoid___closed__3();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___closed__3);
l_PUnit_normalizedGCDMonoid___closed__4 = _init_l_PUnit_normalizedGCDMonoid___closed__4();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid___closed__4);
l_PUnit_normalizedGCDMonoid = _init_l_PUnit_normalizedGCDMonoid();
lean_mark_persistent(l_PUnit_normalizedGCDMonoid);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
