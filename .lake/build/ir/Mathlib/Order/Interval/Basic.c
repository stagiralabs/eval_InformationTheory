// Lean compiler output
// Module: Mathlib.Order.Interval.Basic
// Imports: Init Mathlib.Order.Interval.Set.Basic Mathlib.Data.Set.Lattice Mathlib.Data.SetLike.Basic
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
LEAN_EXPORT lean_object* l_Interval_boundedOrder(lean_object*, lean_object*);
lean_object* l_WithBot_instBoundedOrder___rarg(lean_object*);
lean_object* l_WithBot_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_lattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instPreorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_lattice(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instUniqueOfIsEmpty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instPreorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_setLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_boundedOrder___rarg(lean_object*);
lean_object* l_Equiv_optionCongr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_coeHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instCoeNonemptyInterval___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_dual___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_pure___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_coeHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___rarg___boxed(lean_object*);
lean_object* l_WithBot_semilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instMax(lean_object*);
LEAN_EXPORT lean_object* l_Interval_lattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_swap___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Interval_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_boundedOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_partialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Interval_instPreorder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_instPreorder(lean_object*);
LEAN_EXPORT lean_object* l_Interval_dual(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instCoeSet(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_dual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_boundedOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Interval_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instPartialOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_pure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_setLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_recBotCoe___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Interval_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instOrderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_semilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_Interval_recBotCoe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_semilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProdHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instMembership___boxed(lean_object*, lean_object*);
static lean_object* l_Interval_instCoeNonemptyInterval___closed__1;
LEAN_EXPORT lean_object* l_NonemptyInterval_instPartialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instUniqueOfIsEmpty___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_NonemptyInterval_toDualProdHom___closed__1;
LEAN_EXPORT lean_object* l_Interval_pure___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_setLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map___rarg(lean_object*, lean_object*);
lean_object* l_WithBot_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_coeHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_pure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop(lean_object*, lean_object*);
lean_object* l_WithBot_recBotCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instMembership(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProdHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_recBotCoe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instCoeSet___boxed(lean_object*, lean_object*);
static lean_object* l_NonemptyInterval_instPreorder___closed__1;
lean_object* l_WithBot_some___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Interval_partialOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Interval_instPreorder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Interval_setLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_recBotCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_le___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instOrderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_instCoeNonemptyInterval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Interval_partialOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_coeHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_toDualProd___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonemptyInterval_toDualProd___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_toDualProd(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_le(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_le___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_le(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_NonemptyInterval_toDualProdHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NonemptyInterval_toDualProd___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProdHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_toDualProdHom___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_toDualProdHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_toDualProdHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Prod_swap___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_dual___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Prod_swap___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_dual___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_NonemptyInterval_dual___elambda__2___rarg___boxed), 1, 0);
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_dual___elambda__1___rarg___boxed), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonemptyInterval_dual___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonemptyInterval_dual___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_dual___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonemptyInterval_dual___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_dual___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_dual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonemptyInterval_dual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_NonemptyInterval_instPreorder___closed__1() {
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
LEAN_EXPORT lean_object* l_NonemptyInterval_instPreorder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instPreorder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instPreorder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instPreorder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instCoeSet(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instCoeSet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instCoeSet(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instMembership(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instMembership___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instMembership(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_pure___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_pure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_pure___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_pure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_pure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_instInhabited___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_Prod_map___rarg(x_1, x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_NonemptyInterval_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NonemptyInterval_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_6, x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_apply_2(x_1, x_9, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_NonemptyInterval_map_u2082___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_map_u2082___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_NonemptyInterval_map_u2082(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_instOrderTop___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonemptyInterval_instOrderTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instOrderTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instOrderTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instPartialOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instPreorder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_instPartialOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_coeHom(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_coeHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_coeHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_setLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_setLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NonemptyInterval_setLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_2(x_10, x_8, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonemptyInterval_instMax___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_2(x_10, x_8, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_NonemptyInterval_instPreorder___closed__1;
x_4 = lean_alloc_closure((void*)(l_NonemptyInterval_instSemilatticeSup___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonemptyInterval_instSemilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonemptyInterval_instSemilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_instLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instOrderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instOrderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_instOrderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Interval_instCoeNonemptyInterval___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Interval_instCoeNonemptyInterval(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_instCoeNonemptyInterval___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instCoeNonemptyInterval___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_instCoeNonemptyInterval(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_recBotCoe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WithBot_recBotCoe___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_recBotCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Interval_recBotCoe___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_recBotCoe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Interval_recBotCoe___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_recBotCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Interval_recBotCoe(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_instUniqueOfIsEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_instUniqueOfIsEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Interval_instUniqueOfIsEmpty(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_dual___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NonemptyInterval_dual___rarg(x_1);
x_3 = l_Equiv_optionCongr___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_dual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Interval_dual___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_dual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Interval_dual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_instPreorder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NonemptyInterval_instPreorder(lean_box(0), x_1);
x_3 = l_WithBot_preorder(lean_box(0), x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_instPreorder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Interval_instPreorder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_instPreorder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Interval_instPreorder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_pure___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_pure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Interval_pure___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_pure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_pure(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_NonemptyInterval_map___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_WithBot_map___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Interval_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Interval_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Interval_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Interval_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Interval_boundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NonemptyInterval_instOrderTop___rarg(x_1);
x_3 = l_WithBot_instBoundedOrder___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_boundedOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Interval_boundedOrder___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_boundedOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Interval_boundedOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_boundedOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_boundedOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_partialOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NonemptyInterval_instPartialOrder(lean_box(0), x_1);
x_3 = l_WithBot_preorder(lean_box(0), x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_partialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Interval_partialOrder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_partialOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Interval_partialOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_coeHom(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Interval_coeHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_coeHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_setLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_setLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Interval_setLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_semilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NonemptyInterval_instSemilatticeSup___rarg(x_1);
x_3 = l_WithBot_semilatticeSup___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Interval_semilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Interval_semilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Interval_lattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_apply_2(x_1, x_10, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_16);
lean_inc(x_15);
x_17 = lean_apply_2(x_1, x_15, x_16);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_free_object(x_4);
lean_dec(x_2);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_2(x_21, x_10, x_15);
x_23 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_16, x_11);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_4, 0, x_24);
return x_4;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_4, 0);
lean_inc(x_25);
lean_dec(x_4);
x_26 = lean_ctor_get(x_7, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_inc(x_1);
lean_inc(x_27);
lean_inc(x_26);
x_28 = lean_apply_2(x_1, x_26, x_27);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_25, 0);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_7, 1);
lean_inc(x_32);
lean_dec(x_7);
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_apply_2(x_1, x_31, x_32);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_35 = lean_box(0);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_apply_2(x_37, x_26, x_31);
x_39 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_32, x_27);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Interval_lattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = l_Interval_semilatticeSup___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Interval_lattice___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Interval_lattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Interval_lattice___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_NonemptyInterval_toDualProdHom___closed__1 = _init_l_NonemptyInterval_toDualProdHom___closed__1();
lean_mark_persistent(l_NonemptyInterval_toDualProdHom___closed__1);
l_NonemptyInterval_instPreorder___closed__1 = _init_l_NonemptyInterval_instPreorder___closed__1();
lean_mark_persistent(l_NonemptyInterval_instPreorder___closed__1);
l_Interval_instCoeNonemptyInterval___closed__1 = _init_l_Interval_instCoeNonemptyInterval___closed__1();
lean_mark_persistent(l_Interval_instCoeNonemptyInterval___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
