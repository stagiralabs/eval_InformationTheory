// Lean compiler output
// Module: Mathlib.Algebra.Ring.PUnit
// Imports: Init Mathlib.Algebra.Group.PUnit Mathlib.Algebra.Ring.Defs
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
LEAN_EXPORT lean_object* l_Nat_cast___at_PUnit_commRing___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_commRing;
extern lean_object* l_PUnit_addCommGroup;
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__1(lean_object*);
static lean_object* l_PUnit_commRing___closed__3;
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__2(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_PUnit_commRing___closed__4;
lean_object* l_CommSemiring_toCommMonoidWithZero___rarg(lean_object*);
static lean_object* l_PUnit_commRing___closed__1;
LEAN_EXPORT lean_object* l_Int_castDef___at_PUnit_commRing___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_cancelCommMonoidWithZero;
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__2___boxed(lean_object*, lean_object*);
extern lean_object* l_PUnit_commGroup;
static lean_object* l_PUnit_cancelCommMonoidWithZero___closed__1;
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__1___boxed(lean_object*);
static lean_object* l_Int_castDef___at_PUnit_commRing___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Nat_cast___at_PUnit_commRing___spec__2___boxed(lean_object*);
static lean_object* l_PUnit_commRing___closed__2;
LEAN_EXPORT lean_object* l_Int_castDef___at_PUnit_commRing___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_PUnit_commRing___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_Int_castDef___at_PUnit_commRing___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_PUnit_commRing___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_PUnit_commRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_commRing___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_commRing___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_commRing___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_commRing___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_castDef___at_PUnit_commRing___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_commRing___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_1 = l_PUnit_commGroup;
x_2 = l_PUnit_addCommGroup;
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_PUnit_commRing___closed__1;
x_13 = l_PUnit_commRing___closed__2;
lean_ctor_set(x_2, 3, x_13);
lean_ctor_set(x_2, 2, x_12);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_11);
x_14 = l_PUnit_commRing___closed__3;
x_15 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_6);
lean_ctor_set(x_15, 2, x_7);
lean_ctor_set(x_15, 3, x_13);
lean_ctor_set(x_15, 4, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_2);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_PUnit_commRing___closed__1;
x_23 = l_PUnit_commRing___closed__2;
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_PUnit_commRing___closed__3;
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set(x_26, 4, x_25);
return x_26;
}
}
}
static lean_object* _init_l_PUnit_commRing() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_commRing___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_PUnit_commRing___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_cast___at_PUnit_commRing___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_PUnit_commRing___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_castDef___at_PUnit_commRing___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_commRing___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_commRing___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_commRing___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_PUnit_cancelCommMonoidWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_commRing;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_CommSemiring_toCommMonoidWithZero___rarg(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_PUnit_cancelCommMonoidWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_cancelCommMonoidWithZero___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_PUnit(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_PUnit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_PUnit(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_castDef___at_PUnit_commRing___spec__1___closed__1 = _init_l_Int_castDef___at_PUnit_commRing___spec__1___closed__1();
lean_mark_persistent(l_Int_castDef___at_PUnit_commRing___spec__1___closed__1);
l_PUnit_commRing___closed__1 = _init_l_PUnit_commRing___closed__1();
lean_mark_persistent(l_PUnit_commRing___closed__1);
l_PUnit_commRing___closed__2 = _init_l_PUnit_commRing___closed__2();
lean_mark_persistent(l_PUnit_commRing___closed__2);
l_PUnit_commRing___closed__3 = _init_l_PUnit_commRing___closed__3();
lean_mark_persistent(l_PUnit_commRing___closed__3);
l_PUnit_commRing___closed__4 = _init_l_PUnit_commRing___closed__4();
lean_mark_persistent(l_PUnit_commRing___closed__4);
l_PUnit_commRing = _init_l_PUnit_commRing();
lean_mark_persistent(l_PUnit_commRing);
l_PUnit_cancelCommMonoidWithZero___closed__1 = _init_l_PUnit_cancelCommMonoidWithZero___closed__1();
lean_mark_persistent(l_PUnit_cancelCommMonoidWithZero___closed__1);
l_PUnit_cancelCommMonoidWithZero = _init_l_PUnit_cancelCommMonoidWithZero();
lean_mark_persistent(l_PUnit_cancelCommMonoidWithZero);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
