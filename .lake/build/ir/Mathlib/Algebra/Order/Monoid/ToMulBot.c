// Lean compiler output
// Module: Mathlib.Algebra.Order.Monoid.ToMulBot
// Imports: Init Mathlib.Algebra.Order.GroupWithZero.Canonical Mathlib.Algebra.Order.Monoid.Unbundled.TypeTags Mathlib.Algebra.Group.Equiv.Basic Mathlib.Algebra.Order.Monoid.Unbundled.WithTop
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
LEAN_EXPORT lean_object* l_WithZero_toMulBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithZero_toMulBot(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_WithZero_toMulBot___spec__1(lean_object*, lean_object*);
static lean_object* l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1;
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_toMulBot___rarg___boxed(lean_object*);
static lean_object* _init_l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_WithZero_toMulBot___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithZero_toMulBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_refl(lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithZero_toMulBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithZero_toMulBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulEquiv_refl___at_WithZero_toMulBot___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithZero_toMulBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithZero_toMulBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_TypeTags(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Monoid_ToMulBot(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1 = _init_l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1();
lean_mark_persistent(l_MulEquiv_refl___at_WithZero_toMulBot___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
