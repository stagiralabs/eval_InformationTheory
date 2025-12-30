// Lean compiler output
// Module: Mathlib.Topology.Algebra.Valued.ValuationTopology
// Imports: Init Mathlib.Topology.Algebra.Nonarchimedean.Bases Mathlib.Topology.Algebra.UniformFilterBasis Mathlib.RingTheory.Valuation.ValuationSubring
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
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_N___at_Valued_mk_x27___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_N___at_Valued_mk_x27___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_mk_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Valuation_ltAddSubgroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_topology___at_Valued_mk_x27___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Valued_mk_x27(lean_object*);
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_topology___at_Valued_mk_x27___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_N___at_Valued_mk_x27___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_topology___at_Valued_mk_x27___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Valuation_ltAddSubgroup___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg(x_1, lean_box(0), x_3, lean_box(0), x_6, lean_box(0));
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Valued_mk_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = l_IsTopologicalAddGroup_toUniformSpace___at_Valued_mk_x27___spec__4___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0));
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Valued_mk_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Valued_mk_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_N___at_Valued_mk_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddGroupFilterBasis_N___at_Valued_mk_x27___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroupFilterBasis_topology___at_Valued_mk_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddGroupFilterBasis_topology___at_Valued_mk_x27___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingSubgroupsBasis_topology___at_Valued_mk_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Nonarchimedean_Bases(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformFilterBasis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_ValuationSubring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Valued_ValuationTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Nonarchimedean_Bases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformFilterBasis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_ValuationSubring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
