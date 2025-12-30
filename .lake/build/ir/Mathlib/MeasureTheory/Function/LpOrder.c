// Lean compiler output
// Module: Mathlib.MeasureTheory.Function.LpOrder
// Imports: Init Mathlib.Analysis.Normed.Order.Lattice Mathlib.MeasureTheory.Function.LpSpace.Basic
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
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
lean_object* l_MeasureTheory_AEEqFun_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MeasureTheory_AEEqFun_instAddGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_MeasureTheory_Lp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(lean_object*);
lean_object* l_MeasureTheory_AEEqFun_pair___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubgroup_toAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(x_4);
lean_dec(x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_MeasureTheory_AEEqFun_instPartialOrder(lean_box(0), lean_box(0), x_1, x_2, x_9, x_11);
lean_dec(x_11);
x_13 = l_Subtype_partialOrder(lean_box(0), x_12, lean_box(0));
lean_dec(x_12);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_MeasureTheory_AEEqFun_instAddGroup___rarg(x_1, x_2, x_9, x_14, lean_box(0));
x_16 = l_MeasureTheory_Lp___rarg(x_1, x_5, x_3, x_2);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_1);
x_17 = l_AddSubgroup_toAddCommGroup___rarg(x_15, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_Lp_instOrderedAddCommGroup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_8);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_12, x_12, x_6, x_7);
lean_dec(x_12);
x_15 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg(x_1, x_2, x_3, x_13, lean_box(0), x_14);
lean_dec(x_2);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_Lp_instLattice___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg(x_2, x_3, x_4, x_8, lean_box(0), x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_MeasureTheory_AEEqFun_instLattice___rarg(x_1, x_2, x_9, x_10, lean_box(0));
lean_inc(x_11);
x_12 = l_Lattice_toSemilatticeInf___rarg(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Subtype_partialOrder(lean_box(0), x_13, lean_box(0));
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_11);
x_16 = lean_alloc_closure((void*)(l_MeasureTheory_Lp_instLattice___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_16, 0, x_10);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_4);
lean_closure_set(x_16, 3, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Lp_instLattice___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_Lp_instLattice___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_Lp_instLattice___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_Lp_instLattice___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_Lp_instLattice___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Lp_instLattice___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_Lp_instLattice___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_LpSpace_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Function_LpOrder(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_LpSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
