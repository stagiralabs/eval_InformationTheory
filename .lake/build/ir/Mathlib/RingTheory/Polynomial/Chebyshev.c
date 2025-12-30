// Lean compiler output
// Module: Mathlib.RingTheory.Polynomial.Chebyshev
// Imports: Init Mathlib.Algebra.Polynomial.AlgebraMap Mathlib.Algebra.Polynomial.Derivative Mathlib.Algebra.Ring.NegOnePow Mathlib.Tactic.LinearCombination
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
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* _init_l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1;
x_7 = lean_int_dec_lt(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_5);
x_8 = lean_nat_abs(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_8, x_11);
lean_dec(x_8);
x_13 = lean_nat_dec_eq(x_12, x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_nat_sub(x_12, x_11);
lean_dec(x_12);
x_15 = lean_apply_1(x_4, x_14);
return x_15;
}
else
{
lean_dec(x_12);
lean_dec(x_4);
lean_inc(x_3);
return x_3;
}
}
else
{
lean_dec(x_8);
lean_dec(x_4);
lean_inc(x_2);
return x_2;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
x_16 = lean_nat_abs(x_1);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = lean_apply_1(x_5, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_AlgebraMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Derivative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_NegOnePow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Polynomial_Chebyshev(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_AlgebraMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Derivative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_NegOnePow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1 = _init_l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_RingTheory_Polynomial_Chebyshev_0__Polynomial_Chebyshev_T_match__1_splitter___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
