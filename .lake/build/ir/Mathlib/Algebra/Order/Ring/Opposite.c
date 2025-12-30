// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Opposite
// Imports: Init Mathlib.Algebra.Order.Group.Opposite Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Ring.Opposite
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
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedRing(lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedRing___rarg(lean_object*);
lean_object* l_MulOpposite_instOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_AddOpposite_instOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedSemiring___rarg(lean_object*);
lean_object* l_MulOpposite_instOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_AddOpposite_instSemiring___rarg(lean_object*);
lean_object* l_AddOpposite_instOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_AddOpposite_instRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedRingMulOpposite(lean_object*);
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedRingMulOpposite___rarg(lean_object*);
lean_object* l_OrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_MulOpposite_instRing___rarg(lean_object*);
lean_object* l_MulOpposite_instSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_MulOpposite_instSemiring___rarg(x_2);
x_4 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_1);
x_5 = l_MulOpposite_instOrderedAddCommMonoid___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulOpposite_instOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_MulOpposite_instRing___rarg(x_2);
x_4 = l_OrderedRing_toOrderedAddCommGroup___rarg(x_1);
x_5 = l_MulOpposite_instOrderedAddCommGroup___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_MulOpposite_instOrderedRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulOpposite_instOrderedRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_AddOpposite_instSemiring___rarg(x_2);
x_4 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_1);
x_5 = l_AddOpposite_instOrderedAddCommMonoid___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddOpposite_instOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedRingMulOpposite___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_AddOpposite_instRing___rarg(x_2);
x_4 = l_OrderedRing_toOrderedAddCommGroup___rarg(x_1);
x_5 = l_AddOpposite_instOrderedAddCommGroup___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_AddOpposite_instOrderedRingMulOpposite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddOpposite_instOrderedRingMulOpposite___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Opposite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Opposite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
