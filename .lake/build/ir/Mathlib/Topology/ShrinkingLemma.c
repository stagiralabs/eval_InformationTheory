// Lean compiler output
// Module: Mathlib.Topology.ShrinkingLemma
// Imports: Init Mathlib.Topology.Separation.Regular
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
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet(lean_object*, lean_object*);
static lean_object* l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1;
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ShrinkingLemma_PartialRefinement_instCoeFunForallSet___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ShrinkingLemma_PartialRefinement_instPartialOrder(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ShrinkingLemma_PartialRefinement_chainSup___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ShrinkingLemma_PartialRefinement_chainSup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ShrinkingLemma_PartialRefinement_chainSup___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Separation_Regular(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_ShrinkingLemma(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Separation_Regular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1 = _init_l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1();
lean_mark_persistent(l_ShrinkingLemma_PartialRefinement_instPartialOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
