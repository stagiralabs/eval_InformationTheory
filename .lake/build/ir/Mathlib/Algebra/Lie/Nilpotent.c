// Lean compiler output
// Module: Mathlib.Algebra.Lie.Nilpotent
// Imports: Init Mathlib.Algebra.Lie.Solvable Mathlib.Algebra.Lie.Quotient Mathlib.Algebra.Lie.Normalizer Mathlib.Algebra.Order.Archimedean.Basic Mathlib.LinearAlgebra.Eigenspace.Basic Mathlib.RingTheory.Artinian.Module Mathlib.RingTheory.Nilpotent.Lemmas
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
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal(lean_object*, lean_object*);
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieIdeal_lcs___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LieSubmodule_lieSpan___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_ucs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieIdeal_lcs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LieSubmodule_normalizer___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_ucs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_ucs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieIdeal_lcs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LieSubmodule_lieSpan___rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_LieSubmodule_lcs___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = l_Nat_iterate___rarg(x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_lcs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LieSubmodule_lcs___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LieSubmodule_lcs___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_lcs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieSubmodule_lcs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_LieSubmodule_lcs___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LieModule_lowerCentralSeries___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieModule_lowerCentralSeries___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieModule_lowerCentralSeries(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_ucs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_LieSubmodule_normalizer___rarg___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, lean_box(0));
x_8 = l_Nat_iterate___rarg(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_ucs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LieSubmodule_ucs___rarg), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieSubmodule_ucs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieSubmodule_ucs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LieModule_maxNilpotentSubmodule___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieModule_maxNilpotentSubmodule___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModule_maxNilpotentSubmodule(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieIdeal_lcs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_LieSubmodule_lcs___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Nat_iterate___rarg(x_5, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieIdeal_lcs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieIdeal_lcs___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieIdeal_lcs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieIdeal_lcs(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieAlgebra_maxNilpotentIdeal___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieModule_maxNilpotentSubmodule___at_LieAlgebra_maxNilpotentIdeal___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_maxNilpotentIdeal___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieAlgebra_maxNilpotentIdeal___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Solvable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Quotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Normalizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Archimedean_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Eigenspace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Artinian_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Nilpotent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Solvable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Quotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Normalizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Archimedean_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Eigenspace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Artinian_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
