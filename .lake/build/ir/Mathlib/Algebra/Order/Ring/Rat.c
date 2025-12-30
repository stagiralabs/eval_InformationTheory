// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Rat
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Order.Ring.Unbundled.Rat
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
lean_object* l_instDecidableEqRat___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instOrderedRing___closed__1;
LEAN_EXPORT lean_object* l_Rat_instOrderedAddCommMonoid;
lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(lean_object*);
lean_object* l_Rat_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instOrderedRing;
static lean_object* l_Rat_instLinearOrderedCommRing___closed__4;
LEAN_EXPORT lean_object* l_Rat_instOrderedSemiring;
extern lean_object* l_Rat_linearOrder;
lean_object* l_Rat_instDecidableLt___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instLinearOrderedAddCommGroup___closed__1;
lean_object* l_StrictOrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instLinearOrderedAddCommGroup;
lean_object* l_StrictOrderedCommRing_toOrderedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instLinearOrderedRing;
static lean_object* l_Rat_instOrderedAddCommMonoid___closed__1;
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
static lean_object* l_Rat_instLinearOrderedCommRing___closed__2;
LEAN_EXPORT lean_object* l_Rat_instOrderedAddCommGroup;
static lean_object* l_Rat_instOrderedCancelAddCommMonoid___closed__1;
static lean_object* l_Rat_instLinearOrderedSemiring___closed__2;
lean_object* l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid___rarg(lean_object*);
static lean_object* l_Rat_instOrderedAddCommGroup___closed__1;
LEAN_EXPORT lean_object* l_Rat_instLinearOrderedSemiring;
LEAN_EXPORT lean_object* l_Rat_instOrderedCancelAddCommMonoid;
lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
static lean_object* l_Rat_instLinearOrderedSemiring___closed__1;
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
static lean_object* l_Rat_instLinearOrderedCommRing___closed__3;
LEAN_EXPORT lean_object* l_Rat_instLinearOrderedCommRing;
extern lean_object* l_Rat_commRing;
static lean_object* l_Rat_instLinearOrderedCommRing___closed__1;
static lean_object* l_Rat_instOrderedSemiring___closed__1;
static lean_object* _init_l_Rat_instLinearOrderedCommRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instDecidableLe___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedCommRing___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqRat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedCommRing___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instDecidableLt___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedCommRing___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Rat_linearOrder;
x_2 = l_Rat_commRing;
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 6);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 5);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_dec(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_4);
x_9 = l_Rat_instLinearOrderedCommRing___closed__1;
x_10 = l_Rat_instLinearOrderedCommRing___closed__2;
x_11 = l_Rat_instLinearOrderedCommRing___closed__3;
lean_ctor_set(x_1, 6, x_11);
lean_ctor_set(x_1, 5, x_10);
lean_ctor_set(x_1, 4, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_ctor_get(x_1, 2);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_12);
x_17 = l_Rat_instLinearOrderedCommRing___closed__1;
x_18 = l_Rat_instLinearOrderedCommRing___closed__2;
x_19 = l_Rat_instLinearOrderedCommRing___closed__3;
x_20 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_13);
lean_ctor_set(x_20, 2, x_14);
lean_ctor_set(x_20, 3, x_15);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_19);
return x_20;
}
}
}
static lean_object* _init_l_Rat_instLinearOrderedCommRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instLinearOrderedCommRing___closed__4;
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instLinearOrderedCommRing;
return x_1;
}
}
static lean_object* _init_l_Rat_instOrderedRing___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instLinearOrderedCommRing;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StrictOrderedCommRing_toOrderedCommRing___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instOrderedRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instOrderedRing___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedCommRing;
x_2 = l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instLinearOrderedSemiring___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedSemiring___closed__1;
x_2 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instLinearOrderedSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instLinearOrderedSemiring___closed__2;
return x_1;
}
}
static lean_object* _init_l_Rat_instOrderedSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instLinearOrderedSemiring___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instOrderedSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instOrderedSemiring___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedRing;
x_2 = l_LinearOrderedRing_toLinearOrderedAddCommGroup___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instLinearOrderedAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instLinearOrderedAddCommGroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instOrderedAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instLinearOrderedRing;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StrictOrderedRing_toOrderedAddCommGroup___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instOrderedAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instOrderedAddCommGroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instOrderedCancelAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instLinearOrderedSemiring;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instOrderedCancelAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instOrderedCancelAddCommMonoid___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instOrderedAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instOrderedSemiring;
x_2 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instOrderedAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instOrderedAddCommMonoid___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Unbundled_Rat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Unbundled_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_instLinearOrderedCommRing___closed__1 = _init_l_Rat_instLinearOrderedCommRing___closed__1();
lean_mark_persistent(l_Rat_instLinearOrderedCommRing___closed__1);
l_Rat_instLinearOrderedCommRing___closed__2 = _init_l_Rat_instLinearOrderedCommRing___closed__2();
lean_mark_persistent(l_Rat_instLinearOrderedCommRing___closed__2);
l_Rat_instLinearOrderedCommRing___closed__3 = _init_l_Rat_instLinearOrderedCommRing___closed__3();
lean_mark_persistent(l_Rat_instLinearOrderedCommRing___closed__3);
l_Rat_instLinearOrderedCommRing___closed__4 = _init_l_Rat_instLinearOrderedCommRing___closed__4();
lean_mark_persistent(l_Rat_instLinearOrderedCommRing___closed__4);
l_Rat_instLinearOrderedCommRing = _init_l_Rat_instLinearOrderedCommRing();
lean_mark_persistent(l_Rat_instLinearOrderedCommRing);
l_Rat_instLinearOrderedRing = _init_l_Rat_instLinearOrderedRing();
lean_mark_persistent(l_Rat_instLinearOrderedRing);
l_Rat_instOrderedRing___closed__1 = _init_l_Rat_instOrderedRing___closed__1();
lean_mark_persistent(l_Rat_instOrderedRing___closed__1);
l_Rat_instOrderedRing = _init_l_Rat_instOrderedRing();
lean_mark_persistent(l_Rat_instOrderedRing);
l_Rat_instLinearOrderedSemiring___closed__1 = _init_l_Rat_instLinearOrderedSemiring___closed__1();
lean_mark_persistent(l_Rat_instLinearOrderedSemiring___closed__1);
l_Rat_instLinearOrderedSemiring___closed__2 = _init_l_Rat_instLinearOrderedSemiring___closed__2();
lean_mark_persistent(l_Rat_instLinearOrderedSemiring___closed__2);
l_Rat_instLinearOrderedSemiring = _init_l_Rat_instLinearOrderedSemiring();
lean_mark_persistent(l_Rat_instLinearOrderedSemiring);
l_Rat_instOrderedSemiring___closed__1 = _init_l_Rat_instOrderedSemiring___closed__1();
lean_mark_persistent(l_Rat_instOrderedSemiring___closed__1);
l_Rat_instOrderedSemiring = _init_l_Rat_instOrderedSemiring();
lean_mark_persistent(l_Rat_instOrderedSemiring);
l_Rat_instLinearOrderedAddCommGroup___closed__1 = _init_l_Rat_instLinearOrderedAddCommGroup___closed__1();
lean_mark_persistent(l_Rat_instLinearOrderedAddCommGroup___closed__1);
l_Rat_instLinearOrderedAddCommGroup = _init_l_Rat_instLinearOrderedAddCommGroup();
lean_mark_persistent(l_Rat_instLinearOrderedAddCommGroup);
l_Rat_instOrderedAddCommGroup___closed__1 = _init_l_Rat_instOrderedAddCommGroup___closed__1();
lean_mark_persistent(l_Rat_instOrderedAddCommGroup___closed__1);
l_Rat_instOrderedAddCommGroup = _init_l_Rat_instOrderedAddCommGroup();
lean_mark_persistent(l_Rat_instOrderedAddCommGroup);
l_Rat_instOrderedCancelAddCommMonoid___closed__1 = _init_l_Rat_instOrderedCancelAddCommMonoid___closed__1();
lean_mark_persistent(l_Rat_instOrderedCancelAddCommMonoid___closed__1);
l_Rat_instOrderedCancelAddCommMonoid = _init_l_Rat_instOrderedCancelAddCommMonoid();
lean_mark_persistent(l_Rat_instOrderedCancelAddCommMonoid);
l_Rat_instOrderedAddCommMonoid___closed__1 = _init_l_Rat_instOrderedAddCommMonoid___closed__1();
lean_mark_persistent(l_Rat_instOrderedAddCommMonoid___closed__1);
l_Rat_instOrderedAddCommMonoid = _init_l_Rat_instOrderedAddCommMonoid();
lean_mark_persistent(l_Rat_instOrderedAddCommMonoid);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
