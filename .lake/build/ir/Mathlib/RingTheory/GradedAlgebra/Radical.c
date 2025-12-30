// Lean compiler output
// Module: Mathlib.RingTheory.GradedAlgebra.Radical
// Imports: Init Mathlib.RingTheory.GradedAlgebra.Homogeneous.Ideal
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
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___elambda__1(lean_object*);
lean_object* l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_1);
x_5 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_4);
x_6 = l_instDecidableEq__mathlib___rarg(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_HomogeneousIdeal_radical___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_HomogeneousIdeal_radical___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_radical___at_HomogeneousIdeal_radical___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_HomogeneousIdeal_radical___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_HomogeneousIdeal_radical___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_GradedAlgebra_Homogeneous_Ideal(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_GradedAlgebra_Radical(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_GradedAlgebra_Homogeneous_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
