// Lean compiler output
// Module: Mathlib.FieldTheory.IntermediateField.Algebraic
// Imports: Init Mathlib.FieldTheory.IntermediateField.Basic Mathlib.FieldTheory.Minpoly.Basic Mathlib.FieldTheory.Tower Mathlib.LinearAlgebra.FreeModule.StrongRankCondition Mathlib.RingTheory.Algebraic.Integral
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
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_subalgebraEquivIntermediateField___closed__2;
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___rarg(lean_object*, lean_object*);
static lean_object* l_subalgebraEquivIntermediateField___closed__1;
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Subalgebra_IsAlgebraic_toIntermediateField___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subalgebra_IsAlgebraic_toIntermediateField___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subalgebra_IsAlgebraic_toIntermediateField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subalgebra_IsAlgebraic_toIntermediateField(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Algebra_IsAlgebraic_toIntermediateField___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Algebra_IsAlgebraic_toIntermediateField___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Algebra_IsAlgebraic_toIntermediateField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Algebra_IsAlgebraic_toIntermediateField(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_subalgebraEquivIntermediateField___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_subalgebraEquivIntermediateField___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_subalgebraEquivIntermediateField___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_subalgebraEquivIntermediateField___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_subalgebraEquivIntermediateField___closed__2;
return x_7;
}
}
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_subalgebraEquivIntermediateField___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_subalgebraEquivIntermediateField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_subalgebraEquivIntermediateField(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Minpoly_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Algebraic_Integral(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Algebraic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IntermediateField_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Minpoly_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Algebraic_Integral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_subalgebraEquivIntermediateField___closed__1 = _init_l_subalgebraEquivIntermediateField___closed__1();
lean_mark_persistent(l_subalgebraEquivIntermediateField___closed__1);
l_subalgebraEquivIntermediateField___closed__2 = _init_l_subalgebraEquivIntermediateField___closed__2();
lean_mark_persistent(l_subalgebraEquivIntermediateField___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
