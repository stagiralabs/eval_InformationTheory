// Lean compiler output
// Module: Mathlib.Algebra.Order.Monoid.Canonical.Defs
// Imports: Init Mathlib.Algebra.Group.Units.Basic Mathlib.Algebra.Order.Monoid.Defs Mathlib.Algebra.Order.Monoid.Unbundled.ExistsOfLE Mathlib.Algebra.NeZero Mathlib.Order.BoundedOrder.Basic
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
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot(lean_object*);
lean_object* l_AddUnits_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Units_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyOrderedMul_toOrderBot___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedMul_toOrderBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CanonicallyOrderedMul_toOrderBot___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyOrderedAdd_toOrderBot___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAdd_toOrderBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CanonicallyOrderedAdd_toOrderBot___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_instInhabited___rarg(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CanonicallyOrderedCommMonoid_toUniqueUnits___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddUnits_instInhabited___rarg(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CanonicallyOrderedAddCommMonoid_toUniqueAddUnits___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 6);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
lean_ctor_set(x_1, 6, x_9);
lean_ctor_set(x_1, 5, x_8);
lean_ctor_set(x_1, 4, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_4);
lean_ctor_set(x_18, 3, x_5);
lean_ctor_set(x_18, 4, x_7);
lean_ctor_set(x_18, 5, x_8);
lean_ctor_set(x_18, 6, x_9);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedAddCommMonoid_toLinearOrderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 6);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
lean_ctor_set(x_1, 6, x_9);
lean_ctor_set(x_1, 5, x_8);
lean_ctor_set(x_1, 4, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_4);
lean_ctor_set(x_18, 3, x_5);
lean_ctor_set(x_18, 4, x_7);
lean_ctor_set(x_18, 5, x_8);
lean_ctor_set(x_18, 6, x_9);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyLinearOrderedCommMonoid_toLinearOrderedCommMonoid___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_NeZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BoundedOrder_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_NeZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BoundedOrder_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
