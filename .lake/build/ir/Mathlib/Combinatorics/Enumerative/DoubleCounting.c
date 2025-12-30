// Lean compiler output
// Module: Mathlib.Combinatorics.Enumerative.DoubleCounting
// Imports: Init Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.Algebra.Order.Ring.Nat
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
lean_object* l_Multiset_filter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_bipartiteBelow___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_bipartiteBelow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_bipartiteBelow___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_bipartiteAbove___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_bipartiteAbove___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_bipartiteAbove___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Enumerative_DoubleCounting(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
