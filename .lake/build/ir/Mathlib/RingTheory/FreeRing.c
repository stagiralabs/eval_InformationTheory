// Lean compiler output
// Module: Mathlib.RingTheory.FreeRing
// Imports: Init Mathlib.GroupTheory.FreeAbelianGroup
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
static lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3;
LEAN_EXPORT lean_object* l_FreeRing_of(lean_object*);
static lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeRing_lift(lean_object*, lean_object*);
lean_object* l_FreeMonoid_instCancelMonoid(lean_object*);
static lean_object* l_instRingFreeRing___closed__1;
LEAN_EXPORT lean_object* l_instRingFreeRing(lean_object*);
static lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3;
static lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1;
lean_object* l_FreeMonoid_lift___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2;
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeRing_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeRing_map(lean_object*, lean_object*);
lean_object* l_FreeAbelianGroup_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeRing_map___rarg(lean_object*);
static lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1;
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
static lean_object* l_instRingFreeRing___closed__2;
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
lean_object* l_FreeAbelianGroup_liftMonoid___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeRing_lift___at_FreeRing_map___spec__1(lean_object*, lean_object*);
static lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2;
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___boxed(lean_object*);
static lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4;
lean_object* l_FreeMonoid_lift___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_FreeRing_map___rarg___closed__1;
LEAN_EXPORT lean_object* l_FreeRing_lift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3(lean_object*, lean_object*);
lean_object* l_FreeAbelianGroup_ring___rarg(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedFreeRing(lean_object*);
lean_object* l_FreeMonoid_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1(lean_object*, lean_object*);
lean_object* l_FreeAbelianGroup_liftMonoid___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_instRingFreeRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_FreeMonoid_instCancelMonoid(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_instRingFreeRing___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instRingFreeRing___closed__1;
x_2 = l_FreeAbelianGroup_ring___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instRingFreeRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instRingFreeRing___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInhabitedFreeRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeRing_of___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_FreeMonoid_of___rarg(x_1);
x_3 = l_FreeAbelianGroup_of___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeRing_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeRing_of___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FreeMonoid_lift___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Semiring_toMonoidWithZero___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_FreeMonoid_lift___elambda__2___rarg___boxed), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_FreeAbelianGroup_liftMonoid___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_instRingFreeRing___closed__1;
x_4 = lean_alloc_closure((void*)(l_FreeAbelianGroup_liftMonoid___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeRing_lift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg(x_1);
x_3 = l_FreeAbelianGroup_liftMonoid___at_FreeRing_lift___spec__2___rarg(x_1);
x_4 = l_Equiv_trans___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeRing_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeRing_lift___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_instRingFreeRing(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Semiring_toMonoidWithZero___rarg(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_FreeMonoid_lift___elambda__2___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3;
x_2 = l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_lift___at_FreeRing_map___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4;
return x_3;
}
}
static lean_object* _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_FreeAbelianGroup_liftMonoid___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instRingFreeRing___closed__1;
x_2 = l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1;
x_3 = lean_alloc_closure((void*)(l_FreeAbelianGroup_liftMonoid___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1;
x_2 = l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeRing_lift___at_FreeRing_map___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_FreeMonoid_lift___at_FreeRing_map___spec__2(lean_box(0), lean_box(0));
x_4 = l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3(lean_box(0), lean_box(0));
x_5 = l_Equiv_trans___rarg(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_FreeRing_map___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FreeRing_of___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FreeRing_map___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_FreeRing_lift___at_FreeRing_map___spec__1(lean_box(0), lean_box(0));
x_3 = l_FreeRing_map___rarg___closed__1;
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeRing_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeRing_map___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_FreeAbelianGroup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_FreeRing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_FreeAbelianGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instRingFreeRing___closed__1 = _init_l_instRingFreeRing___closed__1();
lean_mark_persistent(l_instRingFreeRing___closed__1);
l_instRingFreeRing___closed__2 = _init_l_instRingFreeRing___closed__2();
lean_mark_persistent(l_instRingFreeRing___closed__2);
l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1 = _init_l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1();
lean_mark_persistent(l_FreeMonoid_lift___at_FreeRing_lift___spec__1___rarg___closed__1);
l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1 = _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1();
lean_mark_persistent(l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__1);
l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2 = _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2();
lean_mark_persistent(l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__2);
l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3 = _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3();
lean_mark_persistent(l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__3);
l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4 = _init_l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4();
lean_mark_persistent(l_FreeMonoid_lift___at_FreeRing_map___spec__2___closed__4);
l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1 = _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1();
lean_mark_persistent(l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__1);
l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2 = _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2();
lean_mark_persistent(l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__2);
l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3 = _init_l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3();
lean_mark_persistent(l_FreeAbelianGroup_liftMonoid___at_FreeRing_map___spec__3___closed__3);
l_FreeRing_map___rarg___closed__1 = _init_l_FreeRing_map___rarg___closed__1();
lean_mark_persistent(l_FreeRing_map___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
