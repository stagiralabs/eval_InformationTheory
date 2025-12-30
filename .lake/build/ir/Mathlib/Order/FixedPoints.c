// Lean compiler output
// Module: Mathlib.Order.FixedPoints
// Imports: Init Mathlib.Dynamics.FixedPoints.Basic Mathlib.Order.Hom.Order Mathlib.Order.OmegaCompletePartialOrder
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
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_gfp(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prevFixed(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_nextFixed___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom(lean_object*);
lean_object* l_CompleteLattice_instOmegaCompletePartialOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_gfp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_nextFixed___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_completeLattice___rarg(lean_object*, lean_object*);
lean_object* l_OrderDual_instCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_OrderHom_dual___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg(lean_object*, lean_object*);
lean_object* l_OrderDual_instSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_completeLattice(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prevFixed___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_nextFixed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prevFixed___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_lfp___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_lfp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_lfp___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_lfp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_lfp___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_lfp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_lfp___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_gfp___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_gfp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_gfp___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_gfp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_gfp___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_gfp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_gfp___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prevFixed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prevFixed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_OrderHom_prevFixed___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_3);
x_7 = l_OrderHom_gfp___elambda__1___rarg(x_1, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prevFixed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_prevFixed___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_nextFixed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_2(x_6, x_3, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_nextFixed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_OrderHom_nextFixed___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, x_3);
x_8 = l_OrderHom_lfp___elambda__1___rarg(x_1, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderHom_nextFixed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_nextFixed___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_3, x_4);
x_9 = l_OrderHom_nextFixed___rarg(x_1, x_2, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_CompleteLattice_instOmegaCompletePartialOrder___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Subtype_partialOrder(lean_box(0), x_4, lean_box(0));
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_5, x_3, x_4);
x_7 = l_OrderHom_prevFixed___rarg(x_1, x_2, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_3 = l_OrderDual_instCompleteLattice___rarg(x_1);
lean_inc(x_2);
x_4 = l_OrderHom_dual___elambda__2___rarg(x_2);
x_5 = l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg(x_3, x_4);
x_6 = l_OrderDual_instSemilatticeInf___rarg(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, lean_box(0));
x_6 = l_OrderHom_nextFixed___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_CompleteLattice_instOmegaCompletePartialOrder___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Subtype_partialOrder(lean_box(0), x_4, lean_box(0));
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, lean_box(0));
x_6 = l_OrderHom_prevFixed___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_CompleteLattice_instOmegaCompletePartialOrder___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Subtype_partialOrder(lean_box(0), x_4, lean_box(0));
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixedPoints_completeLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg(x_1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_fixedPoints_instCompleteSemilatticeInfElemFixedPointsCoeOrderHom___rarg(x_1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_fixedPoints_instCompleteSemilatticeSupElemFixedPointsCoeOrderHom___rarg(x_1, x_2);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_3, 1);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_ctor_set(x_3, 1, x_8);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
lean_inc(x_1);
x_13 = l_OrderHom_gfp___elambda__1___rarg(x_1, x_2);
x_14 = l_OrderHom_lfp___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_12);
lean_ctor_set(x_15, 3, x_13);
lean_ctor_set(x_15, 4, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeSupElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_2);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_fixedPoints_instSemilatticeInfElemFixedPointsCoeOrderHom___rarg___lambda__1), 4, 2);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_dec(x_5);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_dec(x_4);
lean_inc(x_1);
x_23 = l_OrderHom_gfp___elambda__1___rarg(x_1, x_2);
x_24 = l_OrderHom_lfp___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
lean_ctor_set(x_25, 4, x_24);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_fixedPoints_completeLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fixedPoints_completeLattice___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Dynamics_FixedPoints_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_OmegaCompletePartialOrder(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_FixedPoints(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Dynamics_FixedPoints_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_OmegaCompletePartialOrder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
