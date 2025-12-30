// Lean compiler output
// Module: Mathlib.Topology.UrysohnsLemma
// Imports: Init Mathlib.Algebra.Order.Group.Indicator Mathlib.Analysis.Normed.Affine.AddTorsor Mathlib.Analysis.NormedSpace.FunctionSeries Mathlib.Analysis.SpecificLimits.Basic Mathlib.LinearAlgebra.AffineSpace.Ordered Mathlib.Topology.ContinuousMap.Algebra Mathlib.Topology.GDelta.Basic
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
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_right___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_right___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_left___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_left(lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_left___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_right(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Urysohns_CU_left___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Urysohns_CU_left(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Urysohns_CU_left___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Urysohns_CU_left___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Urysohns_CU_left___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Urysohns_CU_right___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Urysohns_CU_right(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Urysohns_CU_right___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Urysohns_CU_right___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Urysohns_CU_right___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_3(x_5, x_9, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_4, x_2, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Topology_UrysohnsLemma_0__Urysohns_CU_approx_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Indicator(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Affine_AddTorsor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_FunctionSeries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecificLimits_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_Ordered(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_GDelta_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_UrysohnsLemma(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Indicator(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Affine_AddTorsor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_FunctionSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecificLimits_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_Ordered(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_GDelta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
