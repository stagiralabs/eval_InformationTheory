// Lean compiler output
// Module: Mathlib.Topology.EMetricSpace.Basic
// Imports: Init Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.Order.Interval.Finset.Nat Mathlib.Topology.EMetricSpace.Defs Mathlib.Topology.UniformSpace.UniformConvergence Mathlib.Topology.UniformSpace.UniformEmbedding
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
lean_object* l_SeparationQuotient_instUniformSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_emetricSpaceMax___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace(lean_object*);
lean_object* l_SeparationQuotient_lift_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_pseudoEMetricSpaceMax___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEMetricSpaceSeparationQuotient___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instEDistSeparationQuotient___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instEMetricSpaceSeparationQuotient(lean_object*);
LEAN_EXPORT lean_object* l_Prod_emetricSpaceMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEDistSeparationQuotient(lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EMetricSpace_ofT0PseudoEMetricSpace___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_ofT0PseudoEMetricSpace___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_EMetricSpace_ofT0PseudoEMetricSpace___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_emetricSpaceMax___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_pseudoEMetricSpaceMax___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Prod_emetricSpaceMax(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_emetricSpaceMax___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instEDistSeparationQuotient___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_SeparationQuotient_lift_u2082___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
lean_closure_set(x_5, 3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_instEDistSeparationQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instEDistSeparationQuotient___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instEMetricSpaceSeparationQuotient___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_instEDistSeparationQuotient___rarg(x_1);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_SeparationQuotient_instUniformSpace(lean_box(0), x_3);
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instEMetricSpaceSeparationQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instEMetricSpaceSeparationQuotient___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_EMetricSpace_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformConvergence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformEmbedding(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_EMetricSpace_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_EMetricSpace_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformEmbedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
