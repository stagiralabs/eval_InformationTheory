// Lean compiler output
// Module: Mathlib.Analysis.Normed.Group.Uniform
// Imports: Init Mathlib.Analysis.Normed.Group.Continuity Mathlib.Topology.Algebra.UniformGroup.Basic Mathlib.Topology.MetricSpace.Algebra Mathlib.Topology.MetricSpace.IsometricSMul
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
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_SeparationQuotient_instCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instMulNorm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedCommGroup(lean_object*);
lean_object* l_SeparationQuotient_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instMulNorm(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedAddCommGroup___rarg(lean_object*);
lean_object* l_SeparationQuotient_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SeparationQuotient_instMetricSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SeparationQuotient_instMulNorm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_SeparationQuotient_lift___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instMulNorm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SeparationQuotient_instMulNorm___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SeparationQuotient_instNorm___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_SeparationQuotient_instNorm___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SeparationQuotient_instNorm___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNorm___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SeparationQuotient_instNorm___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = l_SeparationQuotient_instCommGroup___rarg(x_3, lean_box(0));
x_5 = l_SeparationQuotient_instMulNorm___rarg(x_1);
x_6 = l_SeparationQuotient_instMetricSpace___rarg(x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SeparationQuotient_instNormedCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = l_SeparationQuotient_instAddCommGroup___rarg(x_4, x_5, lean_box(0));
lean_dec(x_4);
x_7 = l_SeparationQuotient_instNorm___rarg(x_1);
x_8 = l_SeparationQuotient_instMetricSpace___rarg(x_2);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SeparationQuotient_instNormedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SeparationQuotient_instNormedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Continuity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_IsometricSMul(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Group_Uniform(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Continuity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_IsometricSMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
