// Lean compiler output
// Module: Mathlib.Algebra.Order.PUnit
// Imports: Init Mathlib.Algebra.Group.PUnit Mathlib.Algebra.Order.AddGroupWithTop
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
LEAN_EXPORT lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
extern lean_object* l_PUnit_addCommGroup;
static lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___closed__4;
LEAN_EXPORT lean_object* l_PUnit_linearOrderedCancelAddCommMonoid;
LEAN_EXPORT lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___closed__1;
static lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___closed__3;
static lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___closed__2;
static lean_object* l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1;
LEAN_EXPORT uint8_t l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2(lean_object*, lean_object*);
extern lean_object* l_PUnit_instLinearOrder;
static lean_object* l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2;
LEAN_EXPORT uint8_t l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1(lean_object*, lean_object*);
lean_object* l_instDecidableEqPUnit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instLinearOrderedAddCommMonoidWithTop;
LEAN_EXPORT uint8_t l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
LEAN_EXPORT uint8_t l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
static lean_object* _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqPUnit___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_1 = l_PUnit_instLinearOrder;
x_2 = l_PUnit_addCommGroup;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 6);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 5);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_dec(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_5);
x_10 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__1;
x_11 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__2;
x_12 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__3;
lean_ctor_set(x_1, 6, x_12);
lean_ctor_set(x_1, 5, x_11);
lean_ctor_set(x_1, 4, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_1, 2);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_13);
x_18 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__1;
x_19 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__2;
x_20 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__3;
x_21 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_15);
lean_ctor_set(x_21, 3, x_16);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
lean_ctor_set(x_21, 6, x_20);
return x_21;
}
}
}
static lean_object* _init_l_PUnit_linearOrderedCancelAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_linearOrderedCancelAddCommMonoid___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PUnit_linearOrderedCancelAddCommMonoid___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PUnit_linearOrderedCancelAddCommMonoid___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_linearOrderedCancelAddCommMonoid;
x_2 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_PUnit(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_AddGroupWithTop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_PUnit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_PUnit(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_AddGroupWithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PUnit_linearOrderedCancelAddCommMonoid___closed__1 = _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__1();
lean_mark_persistent(l_PUnit_linearOrderedCancelAddCommMonoid___closed__1);
l_PUnit_linearOrderedCancelAddCommMonoid___closed__2 = _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__2();
lean_mark_persistent(l_PUnit_linearOrderedCancelAddCommMonoid___closed__2);
l_PUnit_linearOrderedCancelAddCommMonoid___closed__3 = _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__3();
lean_mark_persistent(l_PUnit_linearOrderedCancelAddCommMonoid___closed__3);
l_PUnit_linearOrderedCancelAddCommMonoid___closed__4 = _init_l_PUnit_linearOrderedCancelAddCommMonoid___closed__4();
lean_mark_persistent(l_PUnit_linearOrderedCancelAddCommMonoid___closed__4);
l_PUnit_linearOrderedCancelAddCommMonoid = _init_l_PUnit_linearOrderedCancelAddCommMonoid();
lean_mark_persistent(l_PUnit_linearOrderedCancelAddCommMonoid);
l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1 = _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1();
lean_mark_persistent(l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__1);
l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2 = _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2();
lean_mark_persistent(l_PUnit_instLinearOrderedAddCommMonoidWithTop___closed__2);
l_PUnit_instLinearOrderedAddCommMonoidWithTop = _init_l_PUnit_instLinearOrderedAddCommMonoidWithTop();
lean_mark_persistent(l_PUnit_instLinearOrderedAddCommMonoidWithTop);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
