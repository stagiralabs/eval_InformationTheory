// Lean compiler output
// Module: Mathlib.Geometry.Manifold.BumpFunction
// Imports: Init Mathlib.Analysis.Calculus.BumpFunction.FiniteDimension Mathlib.Geometry.Manifold.ContMDiff.Atlas Mathlib.Geometry.Manifold.ContMDiff.NormedSpace Mathlib.Topology.MetricSpace.ProperSpace.Lemmas
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
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn(lean_object*);
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PartialEquiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_1(x_7, x_9);
x_11 = l_PartialEquiv_trans___rarg(x_10, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
lean_ctor_set(x_10, 0, x_11);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SmoothBumpFunction_updateRIn___rarg___boxed), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_PartialHomeomorph_extend___at_SmoothBumpFunction_updateRIn___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_extChartAt___at_SmoothBumpFunction_updateRIn___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SmoothBumpFunction_updateRIn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_SmoothBumpFunction_updateRIn___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_BumpFunction_FiniteDimension(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_ContMDiff_Atlas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_ContMDiff_NormedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_ProperSpace_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_BumpFunction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_BumpFunction_FiniteDimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_ContMDiff_Atlas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_ContMDiff_NormedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_ProperSpace_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
