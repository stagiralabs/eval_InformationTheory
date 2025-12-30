// Lean compiler output
// Module: Mathlib.Order.WithBot
// Imports: Init Mathlib.Logic.Nontrivial.Basic Mathlib.Order.TypeTags Mathlib.Data.Option.NAry Mathlib.Tactic.Contrapose Mathlib.Tactic.Lift Mathlib.Data.Option.Basic Mathlib.Order.Lattice Mathlib.Order.BoundedOrder.Basic
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
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop_x27(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_partialOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_distribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_boundedOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_lattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_partialOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbot___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_ofDual(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableEq(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_map_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableEq(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_map_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_toDual(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_map_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_lt___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_instTop(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_boundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_preorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_preorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrder(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_distribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_distribLattice(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WithTop_linearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_boundedOrder(lean_object*, lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_lt(lean_object*, lean_object*);
static lean_object* l_WithBot_unbotD___rarg___closed__1;
LEAN_EXPORT lean_object* l_WithBot_unbot(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untopD___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_partialOrder(lean_object*);
lean_object* l_Option_map_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instBot(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_lattice(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_le___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_lattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_partialOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbot_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbotD___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untopD___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_ofDual(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_decidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_toDual(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_partialOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2___rarg(lean_object*);
static lean_object* l_WithTop_toDual___closed__1;
static lean_object* l_WithBot_preorder___closed__1;
lean_object* l_WithBot_recBotCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untopD(lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_linearOrder(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_distribLattice(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_le___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_map(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg(lean_object*);
LEAN_EXPORT uint8_t l_WithBot_linearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbot_x27(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_lattice(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_partialOrder(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_untop___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbotD___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_map_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbotD(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_lattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_unbot_x27___rarg___boxed(lean_object*, lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2(lean_object*);
static lean_object* _init_l_WithBot_unbotD___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbotD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_WithBot_unbotD___rarg___closed__1;
x_4 = l_WithBot_recBotCoe___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbotD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_unbotD___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbotD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_unbotD___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_WithBot_unbotD___rarg___closed__1;
x_4 = l_WithBot_recBotCoe___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_unbot_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_unbot_x27___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_apply_1(x_1, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_map___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_map_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Option_map_u2082___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_map_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_WithBot_map_u2082___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_unbot___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_unbot___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_unbot___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_instTop___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withBotSubtypeNe___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithBot_unbot___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withBotSubtypeNe___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withBotSubtypeNe___elambda__2___rarg___boxed), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Equiv_withBotSubtypeNe___elambda__1___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_withBotSubtypeNe___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_withBotSubtypeNe___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_le(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_le___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_le(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_orderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_orderTop___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_orderTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_instBoundedOrder___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_instBoundedOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_instBoundedOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_lt(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_WithBot_preorder___closed__1() {
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
LEAN_EXPORT lean_object* l_WithBot_preorder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_preorder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_preorder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_preorder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_partialOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithBot_preorder(lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_partialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_partialOrder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_partialOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithBot_partialOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_14, x_11, x_13);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_17, x_11, x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithBot_preorder(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_WithBot_semilatticeSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_semilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_semilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithBot_preorder(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_WithBot_semilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_WithBot_map_u2082___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithBot_semilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_semilatticeInf___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_lattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithBot_semilatticeSup___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_WithBot_map_u2082___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithBot_lattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_lattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_distribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithBot_lattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_distribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_distribLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_decidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_apply_2(x_1, x_8, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_decidableLE___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_decidableLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 1;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_2(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_decidableLT___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_decidableLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_decidableLT(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithBot_decidableLE___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithBot_decidableLT___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_WithBot_linearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_WithBot_decidableLT___rarg(x_4, x_2, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__2___rarg(x_1, x_2, x_3);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = l_LinearOrder_toLattice___rarg(x_1);
x_3 = l_WithBot_lattice___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrder___spec__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_WithBot_linearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_WithBot_linearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = l_Lattice_toSemilatticeInf___rarg(x_3);
x_10 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_11, 0, x_7);
x_12 = lean_alloc_closure((void*)(l_WithBot_linearOrder___rarg___lambda__3___boxed), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
lean_ctor_set(x_13, 4, x_5);
lean_ctor_set(x_13, 5, x_4);
lean_ctor_set(x_13, 6, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_linearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrder___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_WithBot_linearOrder___rarg___lambda__3(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_WithTop_toDual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithTop_toDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_toDual___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_ofDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_toDual___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_toDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_toDual___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_ofDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_toDual___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_untopD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_WithBot_unbotD___rarg___closed__1;
x_4 = l_WithTop_recTopCoe___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_untopD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_untopD___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_untopD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_untopD___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_WithBot_unbotD___rarg___closed__1;
x_4 = l_WithTop_recTopCoe___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_untop_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_untop_x27___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_apply_1(x_1, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_map___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_map_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Option_map_u2082___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_map_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_WithTop_map_u2082___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_untop___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_untop___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_untop___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_instBot___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withTopSubtypeNe___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_untop___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withTopSubtypeNe___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_withTopSubtypeNe___elambda__2___rarg___boxed), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Equiv_withTopSubtypeNe___elambda__1___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_withTopSubtypeNe___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_withTopSubtypeNe___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_le(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_le___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_le(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_orderTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_orderBot___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_orderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_boundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_boundedOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_boundedOrder___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_boundedOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_boundedOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_lt(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_preorder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_preorder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_preorder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_preorder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_partialOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_preorder(lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_partialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_partialOrder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_partialOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_partialOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_14, x_11, x_13);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_17, x_11, x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithTop_preorder(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_WithTop_semilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_semilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_semilatticeInf___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithTop_preorder(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_WithTop_semilatticeSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_WithTop_map_u2082___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithTop_semilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_semilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_lattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_13);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_lattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithTop_semilatticeSup___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_WithTop_lattice___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_lattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_lattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_distribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithTop_lattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_distribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_distribLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_decidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 1;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_2(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_decidableLE___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_decidableLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = 0;
x_5 = lean_box(x_4);
return x_5;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 1;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_apply_2(x_1, x_8, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_decidableLT___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_decidableLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_decidableLT(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithTop_decidableLE___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithTop_decidableLT___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_WithTop_linearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_WithTop_decidableLT___rarg(x_4, x_2, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__2___rarg(x_1, x_2, x_3);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = l_LinearOrder_toLattice___rarg(x_1);
x_3 = l_WithTop_lattice___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_linearOrder___spec__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_WithTop_linearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_WithTop_linearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = l_Lattice_toSemilatticeInf___rarg(x_3);
x_10 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_11, 0, x_7);
x_12 = lean_alloc_closure((void*)(l_WithTop_linearOrder___rarg___lambda__3___boxed), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
lean_ctor_set(x_13, 4, x_5);
lean_ctor_set(x_13, 5, x_4);
lean_ctor_set(x_13, 6, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_WithTop_linearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_linearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_linearOrder___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_WithTop_linearOrder___rarg___lambda__3(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Nontrivial_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_TypeTags(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Option_NAry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Contrapose(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Lift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Option_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BoundedOrder_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_WithBot(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Nontrivial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Option_NAry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Contrapose(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Lift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Option_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BoundedOrder_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_WithBot_unbotD___rarg___closed__1 = _init_l_WithBot_unbotD___rarg___closed__1();
lean_mark_persistent(l_WithBot_unbotD___rarg___closed__1);
l_WithBot_preorder___closed__1 = _init_l_WithBot_preorder___closed__1();
lean_mark_persistent(l_WithBot_preorder___closed__1);
l_WithTop_toDual___closed__1 = _init_l_WithTop_toDual___closed__1();
lean_mark_persistent(l_WithTop_toDual___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
