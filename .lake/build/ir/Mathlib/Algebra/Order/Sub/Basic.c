// Lean compiler output
// Module: Mathlib.Algebra.Order.Sub.Basic
// Imports: Init Mathlib.Algebra.Order.Monoid.Unbundled.ExistsOfLE Mathlib.Algebra.Order.Monoid.Canonical.Defs Mathlib.Algebra.Order.Sub.Unbundled.Basic Mathlib.Algebra.Group.Equiv.Basic Mathlib.Algebra.Group.Even
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
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CanonicallyOrderedAddCommMonoid_toAddCancelCommMonoid___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Even(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Sub_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Even(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
