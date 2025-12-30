// Lean compiler output
// Module: Mathlib.Algebra.Order.Star.Basic
// Imports: Init Mathlib.Algebra.Group.Submonoid.Operations Mathlib.Algebra.NoZeroSMulDivisors.Defs Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Group.Nat Mathlib.Algebra.Star.SelfAdjoint Mathlib.Algebra.Star.StarRingHom Mathlib.Tactic.ContinuousFunctionalCalculus
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
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StarOrderedRing_toOrderedAddCommMonoid___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StarOrderedRing_toOrderedAddCommMonoid___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StarOrderedRing_toOrderedAddCommGroup___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StarOrderedRing_toOrderedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StarOrderedRing_toOrderedAddCommGroup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_NoZeroSMulDivisors_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_SelfAdjoint(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_StarRingHom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ContinuousFunctionalCalculus(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Star_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_NoZeroSMulDivisors_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_SelfAdjoint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_StarRingHom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ContinuousFunctionalCalculus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
