// Lean compiler output
// Module: Mathlib.Data.Finset.NatDivisors
// Imports: Init Mathlib.Algebra.Group.Pointwise.Finset.Basic Mathlib.NumberTheory.Divisors
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
LEAN_EXPORT lean_object* l_Nat_divisorsHom;
static lean_object* l_Nat_divisorsHom___closed__1;
lean_object* l_Nat_divisors___boxed(lean_object*);
static lean_object* _init_l_Nat_divisorsHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_divisors___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_divisorsHom() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_divisorsHom___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Divisors(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_NatDivisors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Divisors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_divisorsHom___closed__1 = _init_l_Nat_divisorsHom___closed__1();
lean_mark_persistent(l_Nat_divisorsHom___closed__1);
l_Nat_divisorsHom = _init_l_Nat_divisorsHom();
lean_mark_persistent(l_Nat_divisorsHom);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
