// Lean compiler output
// Module: Mathlib.Order.ConditionallyCompleteLattice.Basic
// Imports: Init Mathlib.Data.Set.Lattice Mathlib.Order.ConditionallyCompleteLattice.Defs
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
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_supSet___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_infSet___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLattice___rarg(lean_object*);
lean_object* l_OrderDual_instLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg(lean_object*);
LEAN_EXPORT uint8_t l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot(lean_object*);
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder(lean_object*);
LEAN_EXPORT uint8_t l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = lean_apply_2(x_4, x_2, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_2, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 2;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = 0;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_7);
x_8 = l_Lattice_toSemilatticeInf___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_9);
lean_ctor_set(x_16, 2, x_11);
lean_ctor_set(x_16, 3, x_12);
lean_ctor_set(x_16, 4, x_13);
lean_ctor_set(x_16, 5, x_14);
lean_ctor_set(x_16, 6, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CompleteLattice_toConditionallyCompleteLattice___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_2);
x_4 = lean_ctor_get(x_1, 5);
x_5 = lean_ctor_get(x_1, 6);
x_6 = lean_ctor_get(x_1, 7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_6);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CompleteLinearOrder_toConditionallyCompleteLinearOrderBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_OrderDual_instLattice___rarg(x_2);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_instConditionallyCompleteLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLe__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLt__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_OrderDual_instConditionallyCompleteLattice___rarg(x_2);
x_4 = l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg(x_1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_4);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_alloc_closure((void*)(l_OrderDual_instConditionallyCompleteLinearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_7, 0, x_4);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instConditionallyCompleteLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_instConditionallyCompleteLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_conditionallyCompleteLattice___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_instLattice___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_conditionallyCompleteLattice___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Pi_supSet___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_conditionallyCompleteLattice___rarg___lambda__3), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Pi_infSet___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_conditionallyCompleteLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_conditionallyCompleteLattice___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
