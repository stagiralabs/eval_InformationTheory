// Lean compiler output
// Module: Mathlib.LinearAlgebra.Basis.Basic
// Imports: Init Mathlib.Algebra.BigOperators.Finprod Mathlib.Algebra.BigOperators.Finsupp Mathlib.Data.Fintype.BigOperators Mathlib.LinearAlgebra.Basis.Defs Mathlib.LinearAlgebra.Finsupp.SumProd Mathlib.LinearAlgebra.LinearIndependent.Basic Mathlib.LinearAlgebra.Pi
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
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Submodule_inductionOnRankAux___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_2(x_1, x_2, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Submodule_inductionOnRankAux___rarg___lambda__3___boxed), 6, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_apply_2(x_1, x_4, x_6);
return x_7;
}
}
static lean_object* _init_l_Submodule_inductionOnRankAux___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Submodule_inductionOnRankAux___rarg___lambda__1___boxed), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
x_10 = l_Submodule_inductionOnRankAux___rarg___closed__1;
lean_inc(x_5);
x_11 = lean_apply_2(x_5, x_9, x_10);
x_12 = lean_alloc_closure((void*)(l_Submodule_inductionOnRankAux___rarg___lambda__2___boxed), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_Submodule_inductionOnRankAux___rarg___lambda__4___boxed), 5, 1);
lean_closure_set(x_13, 0, x_5);
x_14 = l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(x_12, x_13, x_6);
lean_dec(x_12);
x_15 = lean_apply_2(x_14, x_7, lean_box(0));
return x_15;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Submodule_inductionOnRankAux___rarg___boxed), 8, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_inductionOnRankAux___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_inductionOnRankAux___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_inductionOnRankAux___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_inductionOnRankAux___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Submodule_inductionOnRankAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_inductionOnRankAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_inductionOnRankAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finprod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_SumProd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_LinearIndependent_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Basis_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finprod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_SumProd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_LinearIndependent_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Submodule_inductionOnRankAux___rarg___closed__1 = _init_l_Submodule_inductionOnRankAux___rarg___closed__1();
lean_mark_persistent(l_Submodule_inductionOnRankAux___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
