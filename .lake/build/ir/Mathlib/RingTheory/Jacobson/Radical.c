// Lean compiler output
// Module: Mathlib.RingTheory.Jacobson.Radical
// Imports: Init Mathlib.LinearAlgebra.Quotient.Basic Mathlib.RingTheory.Finiteness.Basic Mathlib.RingTheory.Ideal.Maps Mathlib.RingTheory.Ideal.Quotient.Defs
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
LEAN_EXPORT lean_object* l_Module_jacobson___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_jacobson___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ring_jacobson___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ring_jacobson(lean_object*);
LEAN_EXPORT lean_object* l_Module_jacobson___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Module_jacobson___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Module_jacobson___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Module_jacobson(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Module_jacobson___at_Ring_jacobson___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ring_jacobson___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Module_jacobson___at_Ring_jacobson___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ring_jacobson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ring_jacobson___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_jacobson___at_Ring_jacobson___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Module_jacobson___at_Ring_jacobson___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ring_jacobson___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ring_jacobson___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Quotient_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Maps(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Quotient_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Jacobson_Radical(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Quotient_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Maps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Quotient_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
