// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.GromovHausdorffRealized
// Imports: Init Mathlib.Topology.MetricSpace.Gluing Mathlib.Topology.MetricSpace.HausdorffDistance Mathlib.Topology.ContinuousMap.Bounded.Basic
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
static lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GromovHausdorff_candidatesBOfCandidates___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_GromovHausdorff_candidatesBOfCandidates___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_candidatesBOfCandidates___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GromovHausdorff_candidatesBOfCandidates(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg(x_1, lean_box(0), lean_box(0), x_4, lean_box(0), lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_GromovHausdorff_optimalGHInjl___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iInf___at_GromovHausdorff_optimalGHInjl___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjl___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_GromovHausdorff_optimalGHInjl___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_nhds___at_GromovHausdorff_optimalGHInjl___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_inseparableSetoid___at_GromovHausdorff_optimalGHInjl___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_GromovHausdorff_optimalGHInjl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg(x_1, lean_box(0), lean_box(0), x_4, lean_box(0), lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_GromovHausdorff_optimalGHInjr___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iInf___at_GromovHausdorff_optimalGHInjr___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_GromovHausdorff_optimalGHInjr___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_GromovHausdorff_optimalGHInjr___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjr___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_nhds___at_GromovHausdorff_optimalGHInjr___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_inseparableSetoid___at_GromovHausdorff_optimalGHInjr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_inseparableSetoid___at_GromovHausdorff_optimalGHInjr___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GromovHausdorff_optimalGHInjr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_GromovHausdorff_optimalGHInjr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Gluing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_HausdorffDistance(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Bounded_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_GromovHausdorffRealized(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Gluing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_HausdorffDistance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Bounded_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___closed__1 = _init_l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___closed__1();
lean_mark_persistent(l_definition____x40_Mathlib_Topology_Defs_Filter___hyg_19____at_GromovHausdorff_optimalGHInjl___spec__3___rarg___lambda__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
