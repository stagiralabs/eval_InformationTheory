// Lean compiler output
// Module: Mathlib.RingTheory.HahnSeries.Multiplication
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Basic Mathlib.Algebra.Module.BigOperators Mathlib.Data.Finset.MulAntidiagonal Mathlib.Data.Finset.SMulAntidiagonal Mathlib.GroupTheory.GroupAction.Ring Mathlib.RingTheory.HahnSeries.Addition
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
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul___rarg(lean_object*);
lean_object* l_HahnSeries_instAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_rec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HahnSeries_instDistribMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_HahnModule_of___closed__1;
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_rec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass___rarg(lean_object*);
lean_object* l_HahnSeries_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_rec___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_HahnModule_of___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_HahnModule_of(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_HahnModule_of___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_HahnModule_of___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_HahnModule_of(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HahnModule_rec___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_HahnModule_of___closed__1;
x_4 = l_Equiv_symm___elambda__2___rarg(x_3, x_2);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_HahnModule_rec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_HahnModule_rec___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HahnModule_rec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_HahnModule_rec(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_HahnSeries_instAddMonoid___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HahnModule_instAddCommMonoid___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instAddCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_HahnModule_instAddCommMonoid___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HahnSeries_instSMul___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_HahnModule_instBaseSMul___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_HahnModule_instBaseSMul(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HahnSeries_instSMul___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_HahnModule_instBaseSMulZeroClass___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseSMulZeroClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_HahnModule_instBaseSMulZeroClass(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HahnSeries_instDistribMulAction___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_HahnModule_instBaseModule___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_HahnModule_instBaseModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_HahnModule_instBaseModule(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_MulAntidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_SMulAntidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_HahnSeries_Addition(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_HahnSeries_Multiplication(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_MulAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_SMulAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_HahnSeries_Addition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_HahnModule_of___closed__1 = _init_l_HahnModule_of___closed__1();
lean_mark_persistent(l_HahnModule_of___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
