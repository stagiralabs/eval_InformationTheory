// Lean compiler output
// Module: Mathlib.RingTheory.Ideal.Basic
// Imports: Init Mathlib.Algebra.Field.IsField Mathlib.Data.Nat.Choose.Sum Mathlib.LinearAlgebra.Finsupp.LinearCombination Mathlib.RingTheory.Ideal.Maximal Mathlib.Tactic.FinCases
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
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_pi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_vecEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2(lean_object*);
static lean_object* l_Ideal_equivFinTwo___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ideal_pi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_pi___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_vecCons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_pi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_pi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ideal_pi___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_pi___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_pi___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Fin_cases(x_4, lean_box(0), x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Ideal_equivFinTwo___elambda__1___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_apply_2(x_2, x_3, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_unsigned_to_nat(1u);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_unsigned_to_nat(0u);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_equivFinTwo___elambda__2___rarg___boxed), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Ideal_equivFinTwo___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_vecEmpty___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_alloc_closure((void*)(l_Ideal_equivFinTwo___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Ideal_equivFinTwo___rarg___closed__1;
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Matrix_vecCons___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_6);
x_8 = lean_alloc_closure((void*)(l_Ideal_equivFinTwo___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_equivFinTwo___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_equivFinTwo___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ideal_equivFinTwo___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ideal_equivFinTwo___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ideal_equivFinTwo___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_IsField(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_LinearCombination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Maximal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Ideal_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_IsField(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Maximal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Ideal_equivFinTwo___rarg___closed__1 = _init_l_Ideal_equivFinTwo___rarg___closed__1();
lean_mark_persistent(l_Ideal_equivFinTwo___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
