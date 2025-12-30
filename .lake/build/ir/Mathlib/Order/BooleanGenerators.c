// Lean compiler output
// Module: Mathlib.Order.BooleanGenerators
// Imports: Init Mathlib.Order.CompleteLattice Mathlib.Order.CompactlyGenerated.Basic
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
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top(lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompleteLattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompactlyGenerated_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_BooleanGenerators(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompleteLattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompactlyGenerated_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
