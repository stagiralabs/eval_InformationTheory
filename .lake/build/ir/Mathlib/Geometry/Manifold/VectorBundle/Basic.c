// Lean compiler output
// Module: Mathlib.Geometry.Manifold.VectorBundle.Basic
// Imports: Init Mathlib.Geometry.Manifold.ContMDiff.Atlas Mathlib.Geometry.Manifold.VectorBundle.FiberwiseLinear Mathlib.Topology.VectorBundle.Constructions
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
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_chartedSpaceSelf___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_prodChartedSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ChartedSpace_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_FiberBundle_chartedSpace_x27___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_FiberBundle_chartedSpace_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_chartedSpaceSelf___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_1);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_prodChartedSpace___rarg___boxed), 7, 6);
lean_closure_set(x_10, 0, x_7);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, x_1);
lean_closure_set(x_10, 5, x_9);
x_11 = lean_alloc_closure((void*)(l_FiberBundle_chartedSpace_x27___rarg), 2, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = lean_alloc_closure((void*)(l_ChartedSpace_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg(x_1, x_2, x_3, lean_box(0), x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FiberBundle_chartedSpace___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ChartedSpace_comp___at_FiberBundle_chartedSpace___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_FiberBundle_chartedSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_FiberBundle_chartedSpace___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_ContMDiff_Atlas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_VectorBundle_FiberwiseLinear(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_VectorBundle_Constructions(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_VectorBundle_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_ContMDiff_Atlas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_VectorBundle_FiberwiseLinear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_VectorBundle_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
