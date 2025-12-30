// Lean compiler output
// Module: Mathlib.Data.QPF.Multivariate.Constructions.Fix
// Imports: Init Mathlib.Data.PFunctor.Multivariate.W Mathlib.Data.QPF.Multivariate.Basic
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
lean_object* l_TypeVec_splitFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_fixToW(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MvPFunctor_wMk_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_TypeVec_id___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_wSetoid(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MvQPF_Fix_drec___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_MvQPF_Fix_mvfunctor(lean_object*, lean_object*, lean_object*);
lean_object* l_MvPFunctor_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MvPFunctor_wMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MvPFunctor_wMk_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_TypeVec_appendFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix___lambda__1(lean_object*, lean_object*);
static lean_object* l_MvQPF_mvqpfFix___closed__1;
lean_object* l_MvPFunctor_wRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_wSetoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_dest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_wrepr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_recF___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_TypeVec_splitFun___rarg), 4, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_apply_2(x_7, lean_box(0), x_9);
x_11 = lean_apply_1(x_2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MvQPF_recF(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_MvQPF_recF___lambda__1___boxed), 6, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_6);
x_10 = l_MvPFunctor_wRec(x_1, x_8, lean_box(0), lean_box(0), x_9, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvQPF_recF___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MvQPF_recF___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_MvQPF_recF___lambda__1___boxed), 6, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
x_9 = l_MvPFunctor_wRec(x_2, x_7, lean_box(0), lean_box(0), x_8, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvQPF_recF___at_MvQPF_wrepr___spec__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_wrepr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MvPFunctor_wMk_x27___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, lean_box(0));
x_8 = lean_ctor_get(x_3, 3);
lean_inc(x_8);
x_9 = lean_apply_1(x_8, lean_box(0));
x_10 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_10, 0, x_7);
lean_closure_set(x_10, 1, x_9);
x_11 = l_MvQPF_recF___at_MvQPF_wrepr___spec__1___rarg(x_3, x_1, lean_box(0), lean_box(0), x_10, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MvQPF_recF___at_MvQPF_wrepr___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_recF___at_MvQPF_wrepr___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_wSetoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_wSetoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvQPF_wSetoid(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = l_MvPFunctor_wMap(x_1, x_8, lean_box(0), lean_box(0), x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MvQPF_Fix_map(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_mvfunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Fix_map___boxed), 7, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MvQPF_recF(x_1, lean_box(0), x_3, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvQPF_fixToW(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MvQPF_wrepr(x_1, lean_box(0), x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_TypeVec_id___boxed), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_MvQPF_fixToW), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, lean_box(0));
x_11 = lean_alloc_closure((void*)(l_TypeVec_appendFun___rarg), 4, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_3, 3);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_apply_2(x_12, lean_box(0), x_5);
x_14 = l_MvPFunctor_map(x_8, x_6, lean_box(0), lean_box(0), x_11, x_13);
lean_dec(x_8);
x_15 = l_MvPFunctor_wMk_x27(x_1, x_6, lean_box(0), x_14);
lean_dec(x_6);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_dest(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_TypeVec_id___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_MvQPF_Fix_mk), 5, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, lean_box(0));
x_9 = lean_alloc_closure((void*)(l_TypeVec_appendFun___rarg), 4, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_apply_3(x_6, lean_box(0), lean_box(0), x_9);
x_11 = l_MvQPF_recF(x_1, lean_box(0), x_3, lean_box(0), lean_box(0), x_10, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_MvQPF_mvqpfFix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvQPF_mvqpfFix___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_MvQPF_Fix_map___boxed), 7, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_closure((void*)(l_MvQPF_fixToW), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_3);
x_7 = l_MvQPF_mvqpfFix___closed__1;
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set(x_8, 3, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvQPF_mvqpfFix___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_mvqpfFix___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MvQPF_recF(x_2, lean_box(0), x_1, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_MvQPF_Fix_drec___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvQPF_Fix_drec___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_TypeVec_id___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = l_MvQPF_Fix_drec___lambda__2___closed__1;
x_8 = lean_alloc_closure((void*)(l_TypeVec_appendFun___rarg), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
lean_inc(x_4);
x_9 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_4);
x_10 = l_MvQPF_Fix_mk(x_2, lean_box(0), x_1, lean_box(0), x_9);
x_11 = lean_apply_1(x_3, x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_MvQPF_Fix_drec___lambda__2), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_6);
x_9 = l_MvQPF_recF(x_1, lean_box(0), x_3, lean_box(0), lean_box(0), x_8, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_Fix_rec___at_MvQPF_Fix_drec___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Fix_drec___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Fix_drec___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PFunctor_Multivariate_W(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_QPF_Multivariate_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_QPF_Multivariate_Constructions_Fix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PFunctor_Multivariate_W(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_QPF_Multivariate_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MvQPF_mvqpfFix___closed__1 = _init_l_MvQPF_mvqpfFix___closed__1();
lean_mark_persistent(l_MvQPF_mvqpfFix___closed__1);
l_MvQPF_Fix_drec___lambda__2___closed__1 = _init_l_MvQPF_Fix_drec___lambda__2___closed__1();
lean_mark_persistent(l_MvQPF_Fix_drec___lambda__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
