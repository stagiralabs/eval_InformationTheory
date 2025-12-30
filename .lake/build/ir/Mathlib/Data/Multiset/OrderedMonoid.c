// Lean compiler output
// Module: Mathlib.Data.Multiset.OrderedMonoid
// Imports: Init Mathlib.Algebra.Order.Group.Multiset Mathlib.Algebra.Order.Monoid.Canonical.Defs
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
static lean_object* l_Multiset_instOrderedCancelAddCommMonoid___closed__3;
lean_object* l_Multiset_instAddCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instOrderedCancelAddCommMonoid(lean_object*);
static lean_object* l_Multiset_instOrderedCancelAddCommMonoid___closed__1;
static lean_object* l_Multiset_instOrderedCancelAddCommMonoid___closed__2;
lean_object* l_Multiset_instPartialOrder(lean_object*);
static lean_object* _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_instAddCancelCommMonoid(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_instPartialOrder(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Multiset_instOrderedCancelAddCommMonoid___closed__1;
x_2 = l_Multiset_instOrderedCancelAddCommMonoid___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_instOrderedCancelAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_instOrderedCancelAddCommMonoid___closed__3;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Multiset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Multiset_OrderedMonoid(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_instOrderedCancelAddCommMonoid___closed__1 = _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__1();
lean_mark_persistent(l_Multiset_instOrderedCancelAddCommMonoid___closed__1);
l_Multiset_instOrderedCancelAddCommMonoid___closed__2 = _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__2();
lean_mark_persistent(l_Multiset_instOrderedCancelAddCommMonoid___closed__2);
l_Multiset_instOrderedCancelAddCommMonoid___closed__3 = _init_l_Multiset_instOrderedCancelAddCommMonoid___closed__3();
lean_mark_persistent(l_Multiset_instOrderedCancelAddCommMonoid___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
