// Lean compiler output
// Module: Mathlib.Order.Grade
// Imports: Init Mathlib.Data.Int.SuccPred Mathlib.Order.Fin.Basic
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
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderDual_gradeOrder___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Int_bmod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_GradeOrder_natToInt___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat(lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_natToInt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_grade___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_natToInt(lean_object*);
LEAN_EXPORT lean_object* l_Preorder_toGradeBoundedOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_natToInt___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_finToNat___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Preorder_toGradeBoundedOrder(lean_object*, lean_object*);
static lean_object* l_Preorder_toGradeBoundedOrder___closed__1;
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_finToNat(lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_finToNat___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GradeBoundedOrder_toGradeMaxOrder___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_GradeBoundedOrder_toGradeMaxOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_toGradeMaxOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GradeBoundedOrder_toGradeMaxOrder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_grade___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_grade(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_grade___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_grade___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_grade(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Preorder_toGradeBoundedOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Preorder_toGradeBoundedOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Preorder_toGradeBoundedOrder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Preorder_toGradeBoundedOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Preorder_toGradeBoundedOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_OrderDual_gradeOrder___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderDual_gradeOrder___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_OrderDual_gradeOrder___rarg___closed__1;
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderDual_gradeOrder___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderDual_gradeOrder___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderDual_gradeOrder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderDual_gradeOrder___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderDual_gradeMinOrder___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMinOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderDual_gradeMinOrder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderDual_gradeOrder___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderDual_gradeMaxOrder___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_gradeMaxOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderDual_gradeMaxOrder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderDual_gradeOrder___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_instGradeBoundedOrderOrderDual___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instGradeBoundedOrderOrderDual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instGradeBoundedOrderOrderDual(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeOrder_liftLeft___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeOrder_liftLeft(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeMinOrder_liftLeft___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeMinOrder_liftLeft(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeMaxOrder_liftLeft___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeMaxOrder_liftLeft(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeBoundedOrder_liftLeft___rarg), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeBoundedOrder_liftLeft(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeOrder_liftRight___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_liftRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeOrder_liftRight(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeMinOrder_liftRight___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_liftRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeMinOrder_liftRight(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeMaxOrder_liftRight___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeMaxOrder_liftRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeMaxOrder_liftRight(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_grade___rarg), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GradeBoundedOrder_liftRight___rarg), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GradeBoundedOrder_liftRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GradeBoundedOrder_liftRight(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_grade___at_GradeOrder_finToNat___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_finToNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_grade___at_GradeOrder_finToNat___spec__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_OrderDual_gradeOrder___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_finToNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GradeOrder_finToNat___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_finToNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_grade___at_GradeOrder_finToNat___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_finToNat___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GradeOrder_finToNat___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_grade___at_GradeMinOrder_finToNat___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_grade___at_GradeMinOrder_finToNat___spec__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_OrderDual_gradeOrder___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GradeMinOrder_finToNat___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeMinOrder_finToNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_grade___at_GradeMinOrder_finToNat___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GradeMinOrder_finToNat___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GradeMinOrder_finToNat___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_grade___at_GradeOrder_natToInt___spec__1___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_GradeOrder_natToInt___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_cast___at_Int_bmod___spec__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_natToInt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_grade___at_GradeOrder_natToInt___spec__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_GradeOrder_natToInt___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_natToInt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GradeOrder_natToInt___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_grade___at_GradeOrder_natToInt___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_grade___at_GradeOrder_natToInt___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GradeOrder_natToInt___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_GradeOrder_natToInt___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Fin_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Grade(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Preorder_toGradeBoundedOrder___closed__1 = _init_l_Preorder_toGradeBoundedOrder___closed__1();
lean_mark_persistent(l_Preorder_toGradeBoundedOrder___closed__1);
l_OrderDual_gradeOrder___rarg___closed__1 = _init_l_OrderDual_gradeOrder___rarg___closed__1();
lean_mark_persistent(l_OrderDual_gradeOrder___rarg___closed__1);
l_GradeOrder_natToInt___rarg___closed__1 = _init_l_GradeOrder_natToInt___rarg___closed__1();
lean_mark_persistent(l_GradeOrder_natToInt___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
