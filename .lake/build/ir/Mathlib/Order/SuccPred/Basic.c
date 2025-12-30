// Lean compiler output
// Module: Mathlib.Order.SuccPred.Basic
// Imports: Init Mathlib.Order.ConditionallyCompleteLattice.Basic Mathlib.Order.Cover Mathlib.Order.Iterate
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
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Order_succ(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Order_succ___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Order_succ___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instPredOrder___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Order_pred___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instPredOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instPredOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Order_pred(lean_object*, lean_object*);
static lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1;
LEAN_EXPORT lean_object* l_PredOrder_ofCore___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instPredOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instPredOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instPredOrder___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Order_pred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instPredOrderOrderDualOfSuccOrder___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instPredOrderOrderDualOfSuccOrder___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instPredOrderOrderDualOfSuccOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instPredOrderOrderDualOfSuccOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instSuccOrderOrderDualOfPredOrder___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSuccOrderOrderDualOfPredOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instSuccOrderOrderDualOfPredOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SuccOrder_ofSuccLeIff___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SuccOrder_ofSuccLeIff___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofSuccLeIff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SuccOrder_ofSuccLeIff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PredOrder_ofLePredIff___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PredOrder_ofLePredIff___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofLePredIff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PredOrder_ofLePredIff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SuccOrder_ofCore___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SuccOrder_ofCore___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SuccOrder_ofCore(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PredOrder_ofCore___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PredOrder_ofCore___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PredOrder_ofCore(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_succ___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_succ(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Order_succ___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_succ___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Order_succ(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_pred___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_pred(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Order_pred___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Order_pred___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Order_pred(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_2, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_apply_1(x_1, x_6);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; 
lean_free_object(x_3);
lean_dec(x_6);
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
x_12 = lean_apply_1(x_2, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_apply_1(x_1, x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_instSuccOrder___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instSuccOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_instSuccOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instPredOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_apply_1(x_2, x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_instPredOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_instPredOrder___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instPredOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_instPredOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_apply_1(x_2, x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_instSuccOrder___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instSuccOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_instSuccOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instPredOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_2, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_apply_1(x_1, x_6);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; 
lean_free_object(x_3);
lean_dec(x_6);
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
x_12 = lean_apply_1(x_2, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_apply_1(x_1, x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_instPredOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_instPredOrder___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instPredOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_instPredOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_4 = l_Equiv_symm___rarg(x_2);
x_5 = l_Equiv_toEmbedding___elambda__1___rarg(x_4, x_3);
x_6 = lean_apply_1(x_1, x_5);
x_7 = l_Equiv_toEmbedding___elambda__1___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SuccOrder_ofOrderIso___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofOrderIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SuccOrder_ofOrderIso(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_4 = l_Equiv_symm___rarg(x_2);
x_5 = l_Equiv_toEmbedding___elambda__1___rarg(x_4, x_3);
x_6 = lean_apply_1(x_1, x_5);
x_7 = l_Equiv_toEmbedding___elambda__1___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_PredOrder_ofOrderIso___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofOrderIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PredOrder_ofOrderIso(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Cover(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Iterate(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SuccPred_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Cover(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1 = _init_l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1();
lean_mark_persistent(l_instPredOrderOrderDualOfSuccOrder___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
