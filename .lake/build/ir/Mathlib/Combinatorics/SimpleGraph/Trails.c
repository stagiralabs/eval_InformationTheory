// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Trails
// Imports: Init Mathlib.Algebra.Ring.Parity Mathlib.Combinatorics.SimpleGraph.Path
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
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SimpleGraph_Walk_edges___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_Walk_edges___rarg(x_1, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_Walk_IsTrail_edgesFinset___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_SimpleGraph_Walk_edges___rarg(x_1, x_3, x_4, x_5);
x_8 = l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1;
x_9 = l_Multiset_pmap___rarg(x_8, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Path(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Trails(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1 = _init_l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1();
lean_mark_persistent(l_SimpleGraph_Walk_IsEulerian_fintypeEdgeSet___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
