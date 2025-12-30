// Lean compiler output
// Module: Mathlib.Topology.ContinuousMap.Polynomial
// Imports: Init Mathlib.Topology.Algebra.Polynomial Mathlib.Topology.ContinuousMap.Star Mathlib.Topology.UnitInterval Mathlib.Algebra.Star.Subalgebra
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
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Polynomial_eval___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapAlgHom(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapAlgHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_eval___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMap___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMap___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_toContinuousMap___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_eval___rarg(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapOn___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapOn___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapOn___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Polynomial_toContinuousMapOn___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMap___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapAlgHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapAlgHom___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapOn___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toContinuousMapOnAlgHom___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toContinuousMapOnAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Polynomial_toContinuousMapOnAlgHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Polynomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Star(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UnitInterval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_Subalgebra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_ContinuousMap_Polynomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Polynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Star(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UnitInterval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_Subalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
