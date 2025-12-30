// Lean compiler output
// Module: Mathlib.FieldTheory.Minpoly.IsIntegrallyClosed
// Imports: Init Mathlib.RingTheory.AdjoinRoot Mathlib.FieldTheory.Minpoly.Field Mathlib.RingTheory.Polynomial.GaussLemma
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
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minpoly_instSMulSubtypeMemSubringSubalgebraIntegralClosure(lean_object*, lean_object*);
lean_object* l_Subalgebra_algebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure(lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
lean_object* l_Subring_toCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minpoly_instSMulSubtypeMemSubringSubalgebraIntegralClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_ofSubring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
lean_inc(x_5);
x_6 = l_Subring_toCommRing___rarg(x_5, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_10 = l_Field_toDivisionRing___rarg(x_2);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_3);
x_12 = l_Algebra_ofSubring___rarg(x_5, x_11, x_3, x_4);
lean_dec(x_11);
x_13 = l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg(x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = l_Subalgebra_algebra___rarg(x_7, x_9, x_12, x_13);
lean_dec(x_9);
return x_14;
}
}
LEAN_EXPORT lean_object* l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_integralClosure___at_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_minpoly_instSMulSubtypeMemSubringSubalgebraIntegralClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_minpoly_instAlgebraSubtypeMemSubringSubalgebraIntegralClosure___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_minpoly_instSMulSubtypeMemSubringSubalgebraIntegralClosure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_minpoly_instSMulSubtypeMemSubringSubalgebraIntegralClosure___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_AdjoinRoot(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Minpoly_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_GaussLemma(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Minpoly_IsIntegrallyClosed(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_AdjoinRoot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Minpoly_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_GaussLemma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
