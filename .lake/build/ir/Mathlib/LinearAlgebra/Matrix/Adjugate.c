// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Adjugate
// Imports: Init Mathlib.Algebra.Regular.Basic Mathlib.GroupTheory.MonoidLocalization.Basic Mathlib.LinearAlgebra.Matrix.MvPolynomial Mathlib.LinearAlgebra.Matrix.Polynomial Mathlib.RingTheory.Polynomial.Basic
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramerMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_cramer___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_adjugate___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_detRowAlternating___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_cramer___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramer___at_Matrix_adjugate___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_adjugate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramer___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramerMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_updateCol___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramer___at_Matrix_adjugate___spec__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_cramer___spec__2___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_adjugate___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_transpose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_adjugate___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_cramerMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Matrix_updateCol___rarg), 6, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_5);
x_8 = l_Matrix_detRowAlternating___rarg(x_1, x_2, lean_box(0), x_3);
x_9 = lean_apply_1(x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_cramerMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_cramerMap___rarg), 6, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_cramer___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_cramer___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_cramer___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_cramer___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_cramerMap___rarg), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_cramer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_cramer___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_cramer___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_cramer___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsLinearMap_mk_x27___at_Matrix_cramer___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_adjugate___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_cramer___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_cramer___at_Matrix_adjugate___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_cramerMap___rarg), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_cramer___at_Matrix_adjugate___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_cramer___at_Matrix_adjugate___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_Matrix_adjugate___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_Matrix_adjugate___spec__5___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_adjugate___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_adjugate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_3);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 1);
lean_closure_set(x_9, 0, x_4);
lean_inc(x_3);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_adjugate___spec__4___rarg___boxed), 5, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_8);
lean_closure_set(x_13, 2, x_5);
lean_closure_set(x_13, 3, x_12);
x_14 = l_Matrix_cramer___at_Matrix_adjugate___spec__1___rarg(x_1, x_2, x_3, x_9);
x_15 = lean_apply_2(x_14, x_13, x_6);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_adjugate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_adjugate___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_adjugate___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_adjugate___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsLinearMap_mk_x27___at_Matrix_adjugate___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_adjugate___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_Matrix_adjugate___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_Matrix_adjugate___spec__4___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_adjugate___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_Matrix_adjugate___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Regular_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_MvPolynomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Polynomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Adjugate(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Regular_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_MvPolynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Polynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_cramer___spec__2___closed__1 = _init_l_RingHom_id___at_Matrix_cramer___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_cramer___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
