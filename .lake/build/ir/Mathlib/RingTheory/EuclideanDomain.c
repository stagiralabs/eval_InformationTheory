// Lean compiler output
// Module: Mathlib.RingTheory.EuclideanDomain
// Imports: Init Mathlib.Algebra.GCDMonoid.Basic Mathlib.Algebra.EuclideanDomain.Basic Mathlib.RingTheory.Ideal.Basic Mathlib.RingTheory.PrincipalIdealDomain
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
lean_object* l_EuclideanDomain_gcd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid(lean_object*);
lean_object* l_EuclideanDomain_lcm___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EuclideanDomain_lcm___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EuclideanDomain_gcdMonoid___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EuclideanDomain_gcd___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EuclideanDomain_gcdMonoid___elambda__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EuclideanDomain_gcdMonoid___elambda__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_EuclideanDomain_gcdMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EuclideanDomain_gcdMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EuclideanDomain_gcdMonoid___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_EuclideanDomain_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PrincipalIdealDomain(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_EuclideanDomain(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_EuclideanDomain_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PrincipalIdealDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
