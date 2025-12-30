// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Prod
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Ring.Prod Mathlib.Algebra.Order.Monoid.Prod
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
lean_object* l_Prod_instSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedRingProd___rarg(lean_object*, lean_object*);
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instOrderedCommSemiringProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedCommRingProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedSemiringProd(lean_object*, lean_object*);
lean_object* l_Prod_instOrderedAddCommMonoid___rarg(lean_object*, lean_object*);
lean_object* l_Prod_instRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedCommRingProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedCommSemiringProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedRingProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderedSemiringProd___rarg(lean_object*, lean_object*);
lean_object* l_OrderedRing_toOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instOrderedSemiringProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instSemiring___rarg(x_3, x_4);
x_6 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_1);
x_7 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_2);
x_8 = l_Prod_instOrderedAddCommMonoid___rarg(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_instOrderedSemiringProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instOrderedSemiringProd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOrderedCommSemiringProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instOrderedSemiringProd___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOrderedCommSemiringProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instOrderedCommSemiringProd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOrderedRingProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_instRing___rarg(x_3, x_4);
x_6 = l_OrderedRing_toOrderedSemiring___rarg(x_1);
x_7 = l_OrderedRing_toOrderedSemiring___rarg(x_2);
x_8 = l_instOrderedSemiringProd___rarg(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_instOrderedRingProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instOrderedRingProd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOrderedCommRingProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instOrderedRingProd___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOrderedCommRingProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instOrderedCommRingProd___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
