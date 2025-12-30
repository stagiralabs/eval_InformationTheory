// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Operations
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Finite Mathlib.Combinatorics.SimpleGraph.Maps Mathlib.Combinatorics.SimpleGraph.Subgraph
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
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjEdge(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_edge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_edge___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjEdge___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_replaceVertex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instFintypeElemSym2EdgeSetEdge(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelAdjEdge___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instFintypeElemSym2EdgeSetEdge___rarg(lean_object*, lean_object*, lean_object*);
extern uint8_t l_instDecidableFalse;
lean_object* l_SimpleGraph_instFintypeElemSym2EdgeSetFromEdgeSetOfDecidableEq___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_replaceVertex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableIte___rarg(uint8_t, uint8_t, uint8_t);
lean_object* l_Set_fintypeSingleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_replaceVertex(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_replaceVertex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_replaceVertex(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_5);
x_7 = lean_apply_2(x_3, x_5, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
lean_inc(x_6);
x_9 = lean_apply_2(x_3, x_6, x_2);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
lean_inc(x_4);
lean_inc(x_6);
lean_inc(x_1);
x_11 = lean_apply_2(x_4, x_1, x_6);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
x_13 = l_instDecidableFalse;
x_14 = l_instDecidableIte___rarg(x_10, x_13, x_12);
lean_inc(x_4);
lean_inc(x_5);
x_15 = lean_apply_2(x_4, x_5, x_1);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = lean_apply_2(x_4, x_5, x_6);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
x_19 = l_instDecidableIte___rarg(x_10, x_16, x_18);
x_20 = l_instDecidableIte___rarg(x_8, x_14, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_SimpleGraph_instDecidableRelAdjReplaceVertex___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjReplaceVertex___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableRelAdjReplaceVertex(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_edge(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_edge___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_edge(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelAdjEdge___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_17; uint8_t x_18; 
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_4);
x_17 = lean_apply_2(x_3, x_4, x_1);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_box(0);
x_6 = x_19;
goto block_16;
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_5);
x_20 = lean_apply_2(x_3, x_5, x_2);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
x_6 = x_22;
goto block_16;
}
else
{
lean_object* x_23; uint8_t x_24; uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_apply_2(x_3, x_4, x_5);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_25 = l_instDecidableNot___rarg(x_24);
return x_25;
}
}
block_16:
{
lean_object* x_7; uint8_t x_8; 
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_4);
x_7 = lean_apply_2(x_3, x_4, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
lean_inc(x_3);
lean_inc(x_5);
x_10 = lean_apply_2(x_3, x_5, x_1);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_13 = lean_apply_2(x_3, x_4, x_5);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
x_15 = l_instDecidableNot___rarg(x_14);
return x_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjEdge(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableRelAdjEdge___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjEdge___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_SimpleGraph_instDecidableRelAdjEdge___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instFintypeElemSym2EdgeSetEdge___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
x_5 = l_Set_fintypeSingleton___rarg(x_4);
x_6 = l_SimpleGraph_instFintypeElemSym2EdgeSetFromEdgeSetOfDecidableEq___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instFintypeElemSym2EdgeSetEdge(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_instFintypeElemSym2EdgeSetEdge___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Maps(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Subgraph(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Operations(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Maps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Subgraph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
