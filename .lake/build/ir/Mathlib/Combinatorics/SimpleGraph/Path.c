// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Path
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Connectivity.WalkDecomp Mathlib.Combinatorics.SimpleGraph.Walk Mathlib.Combinatorics.SimpleGraph.Subgraph
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
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp(lean_object*, lean_object*);
lean_object* l_SimpleGraph_Walk_support___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_nodupDecidable___rarg(lean_object*, lean_object*);
lean_object* l_SimpleGraph_Walk_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_reachableSetoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_reachableSetoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instCoeFunConnectedForallForallReachable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instCoeFunConnectedForallForallReachable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
lean_object* l_SimpleGraph_Walk_reverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_RelEmbedding_toRelHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SimpleGraph_Walk_dropUntil___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_SimpleGraph_Walk_support___rarg(x_1, x_3, x_4, x_5);
x_7 = l_List_nodupDecidable___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_SimpleGraph_Walk_instDecidableIsPathOfDecidableEq___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Path_nil___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_nil___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_Path_nil___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_3);
lean_inc(x_3);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Path_singleton___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_singleton___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_Path_singleton___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_Walk_reverse___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Path_reverse___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_reverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_Path_reverse___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_3);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_5, 3);
x_12 = lean_ctor_get(x_5, 2);
lean_dec(x_12);
x_13 = lean_ctor_get(x_5, 0);
lean_dec(x_13);
lean_inc(x_4);
lean_inc(x_10);
lean_inc(x_2);
x_14 = l_SimpleGraph_Walk_bypass___rarg(x_1, x_2, x_10, x_4, x_11);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_15, 0, x_2);
lean_inc(x_14);
lean_inc(x_10);
x_16 = l_SimpleGraph_Walk_support___rarg(x_1, x_10, x_4, x_14);
lean_inc(x_3);
x_17 = l_List_elem___rarg(x_15, x_3, x_16);
if (x_17 == 0)
{
lean_dec(x_2);
lean_ctor_set(x_5, 3, x_14);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_18; 
lean_free_object(x_5);
x_18 = l_SimpleGraph_Walk_dropUntil___rarg(x_1, x_2, x_10, x_4, x_14, x_3, lean_box(0));
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
lean_inc(x_4);
lean_inc(x_19);
lean_inc(x_2);
x_21 = l_SimpleGraph_Walk_bypass___rarg(x_1, x_2, x_19, x_4, x_20);
lean_inc(x_2);
x_22 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_22, 0, x_2);
lean_inc(x_21);
lean_inc(x_19);
x_23 = l_SimpleGraph_Walk_support___rarg(x_1, x_19, x_4, x_21);
lean_inc(x_3);
x_24 = l_List_elem___rarg(x_22, x_3, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_4);
lean_ctor_set(x_25, 3, x_21);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = l_SimpleGraph_Walk_dropUntil___rarg(x_1, x_2, x_19, x_4, x_21, x_3, lean_box(0));
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_bypass___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_bypass___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_Walk_bypass___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_4(x_4, x_1, x_5, lean_box(0), x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Combinatorics_SimpleGraph_Path_0__SimpleGraph_Walk_bypass_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_Walk_bypass___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_toPath___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_toPath___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_Walk_toPath___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SimpleGraph_Walk_map___rarg(x_1, x_2, x_3, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_Path_map___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SimpleGraph_Path_map___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_RelEmbedding_toRelHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = l_SimpleGraph_Walk_map___rarg(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_Path_mapEmbedding___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Path_mapEmbedding___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_Path_mapEmbedding___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_reachableSetoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_reachableSetoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_reachableSetoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instCoeFunConnectedForallForallReachable(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instCoeFunConnectedForallForallReachable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instCoeFunConnectedForallForallReachable(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_connectedComponentMk___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_connectedComponentMk___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_connectedComponentMk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_connectedComponentMk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_inhabited___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_ConnectedComponent_inhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_inhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_ConnectedComponent_inhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_lift___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_lift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_ConnectedComponent_lift(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_recOn___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_recOn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_ConnectedComponent_recOn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ConnectedComponent_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_RelEmbedding_toRelHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Equiv_symm___rarg(x_3);
x_8 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_RelEmbedding_toRelHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_Iso_connectedComponentEquiv___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_Iso_connectedComponentEquiv___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_Iso_connectedComponentEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Iso_connectedComponentEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_Iso_connectedComponentEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_ConnectedComponent_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Equiv_symm___rarg(x_1);
x_5 = l_Equiv_toEmbedding___elambda__1___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_toEmbedding___elambda__1___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ConnectedComponent_isoEquivSupp___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ConnectedComponent_isoEquivSupp___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Walk(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Subgraph(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Path(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Walk(builtin, lean_io_mk_world());
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
