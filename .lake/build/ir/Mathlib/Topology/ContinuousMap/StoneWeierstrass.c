// Lean compiler output
// Module: Mathlib.Topology.ContinuousMap.StoneWeierstrass
// Imports: Init Mathlib.Analysis.RCLike.Basic Mathlib.Topology.Algebra.StarSubalgebra Mathlib.Topology.ContinuousMap.ContinuousMapZero Mathlib.Topology.ContinuousMap.Weierstrass Mathlib.Topology.ContinuousMap.Lattice
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
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_attachBound___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_attachBound___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_attachBound___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ContinuousMap_attachBound___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_attachBound___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ContinuousMap_attachBound___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_RCLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_StarSubalgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_ContinuousMapZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Weierstrass(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_ContinuousMap_StoneWeierstrass(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_RCLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_StarSubalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_ContinuousMapZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Weierstrass(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
