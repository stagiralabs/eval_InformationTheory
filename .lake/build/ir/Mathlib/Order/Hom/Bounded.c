// Lean compiler output
// Module: Mathlib.Order.Hom.Bounded
// Imports: Init Mathlib.Order.Hom.Basic Mathlib.Order.BoundedOrder.Lattice
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
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCTopHomOfTopHomClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMax___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLattice___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instOrderTop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instInhabited___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMax___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCBoundedOrderHomOfBoundedOrderHomClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_comp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OrderHom_id___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCTopHomOfTopHomClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_id___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCBoundedOrderHomOfBoundedOrderHomClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCBotHomOfBotHomClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instPreorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_id(lean_object*, lean_object*);
lean_object* l_OrderHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_BoundedOrderHom_id___closed__1;
LEAN_EXPORT lean_object* l_BotHom_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OrderHom_dual___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLattice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_OrderHom_dual___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_comp___rarg(lean_object*, lean_object*);
static lean_object* l_TopHom_instPreorder___closed__1;
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instLattice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instOrderBot(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_comp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_comp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMax___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_id(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_comp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCBotHomOfBotHomClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_comp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHom_instInhabited___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instPreorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_id(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instMax___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHomClass_toTopHom___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_TopHomClass_toTopHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHomClass_toTopHom___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHomClass_toTopHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHomClass_toTopHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCTopHomOfTopHomClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_TopHomClass_toTopHom___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_instCoeTCTopHomOfTopHomClass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCoeTCTopHomOfTopHomClass___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHomClass_toBotHom___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_BotHomClass_toBotHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHomClass_toBotHom___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHomClass_toBotHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHomClass_toBotHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCBotHomOfBotHomClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BotHomClass_toBotHom___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_instCoeTCBotHomOfBotHomClass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCoeTCBotHomOfBotHomClass___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_1(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BoundedOrderHomClass_toBoundedOrderHom___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHomClass_toBoundedOrderHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_BoundedOrderHomClass_toBoundedOrderHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instCoeTCBoundedOrderHomOfBoundedOrderHomClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BoundedOrderHomClass_toBoundedOrderHom___rarg___boxed), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_instCoeTCBoundedOrderHomOfBoundedOrderHomClass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCoeTCBoundedOrderHomOfBoundedOrderHomClass___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_TopHom_instFunLike___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_TopHom_instFunLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopHom_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_TopHom_copy___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_copy(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopHom_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instInhabited___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instInhabited___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instInhabited(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TopHom_id___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopHom_id(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TopHom_id___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_id___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TopHom_id___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopHom_id___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_id(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_comp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_comp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TopHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_TopHom_comp___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_comp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_TopHom_comp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instLE(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_TopHom_instPreorder___closed__1() {
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
LEAN_EXPORT lean_object* l_TopHom_instPreorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPreorder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instPreorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPreorder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPreorder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPartialOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopHom_instOrderTop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_TopHom_instOrderTop___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instOrderTop___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instOrderTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_TopHom_instOrderTop(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_1(x_4, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instMin___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instMin___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instMin(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_TopHom_instPreorder___closed__1;
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeInf___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeInf___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instSemilatticeInf___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeInf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instSemilatticeInf(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_1(x_4, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMax(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instMax___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instMax___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopHom_instMax___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instMax(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_TopHom_instPreorder___closed__1;
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instSemilatticeSup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instSemilatticeSup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instSemilatticeSup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_TopHom_instPreorder___closed__1;
x_5 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_TopHom_instLattice___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instLattice___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instLattice___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instLattice(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_TopHom_instPreorder___closed__1;
x_5 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_TopHom_instLattice___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopHom_instDistribLattice___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopHom_instDistribLattice___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_instDistribLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopHom_instDistribLattice(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BotHom_instFunLike___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BotHom_instFunLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BotHom_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_BotHom_copy___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_copy(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BotHom_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instInhabited___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instInhabited___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instInhabited(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_BotHom_id___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BotHom_id(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BotHom_id___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_id___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BotHom_id___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BotHom_id___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_id(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_comp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_comp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BotHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BotHom_comp___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_comp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_BotHom_comp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_instLE(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instPreorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPreorder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instPreorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_instPreorder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopHom_instPreorder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_instPartialOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BotHom_instOrderBot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BotHom_instOrderBot___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instOrderBot___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instOrderBot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BotHom_instOrderBot(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_1(x_4, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instMin___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_instMin___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instMin(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_TopHom_instPreorder___closed__1;
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeInf___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instSemilatticeInf___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instSemilatticeInf___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeInf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instSemilatticeInf(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_1(x_4, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMax(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instMax___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BotHom_instMax___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BotHom_instMax___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instMax(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_TopHom_instPreorder___closed__1;
x_4 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instSemilatticeSup___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instSemilatticeSup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instSemilatticeSup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instSemilatticeSup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_TopHom_instPreorder___closed__1;
x_5 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_TopHom_instLattice___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instLattice___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instLattice___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instLattice(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_TopHom_instPreorder___closed__1;
x_5 = lean_alloc_closure((void*)(l_TopHom_instSemilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_TopHom_instLattice___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_BotHom_instDistribLattice___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BotHom_instDistribLattice___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_instDistribLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BotHom_instDistribLattice(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BoundedOrderHom_toTopHom___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_BoundedOrderHom_toTopHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoundedOrderHom_toTopHom___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BoundedOrderHom_toTopHom___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toTopHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BoundedOrderHom_toTopHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BoundedOrderHom_toBotHom___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_BoundedOrderHom_toBotHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoundedOrderHom_toBotHom___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BoundedOrderHom_toBotHom___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_toBotHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BoundedOrderHom_toBotHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BoundedOrderHom_instFunLike___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_BoundedOrderHom_instFunLike(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_BoundedOrderHom_copy___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoundedOrderHom_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_BoundedOrderHom_copy(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
static lean_object* _init_l_BoundedOrderHom_id___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_id___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_id(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BoundedOrderHom_id___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_id___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BoundedOrderHom_id(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BoundedOrderHom_id___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BoundedOrderHom_instInhabited(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_BoundedOrderHom_comp___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_comp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_BoundedOrderHom_comp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_TopHom_dual___elambda__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_TopHom_dual___elambda__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_TopHom_dual___elambda__2___rarg), 2, 0);
x_6 = lean_alloc_closure((void*)(l_TopHom_dual___elambda__1___rarg), 2, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_TopHom_dual___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_TopHom_dual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_TopHom_dual___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopHom_dual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_TopHom_dual___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BotHom_dual___elambda__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BotHom_dual___elambda__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_BotHom_dual___elambda__2___rarg), 2, 0);
x_6 = lean_alloc_closure((void*)(l_BotHom_dual___elambda__1___rarg), 2, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BotHom_dual___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_BotHom_dual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_BotHom_dual___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BotHom_dual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BotHom_dual___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_OrderHom_dual___rarg(x_1, x_3);
x_7 = l_Equiv_symm___elambda__2___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoundedOrderHom_dual___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_dual___elambda__2___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_BoundedOrderHom_dual___elambda__2___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_BoundedOrderHom_dual___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = lean_alloc_closure((void*)(l_BoundedOrderHom_dual___elambda__2___rarg), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoundedOrderHom_dual___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_BoundedOrderHom_dual___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoundedOrderHom_dual___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_BoundedOrderHom_dual___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BoundedOrder_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Hom_Bounded(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BoundedOrder_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_TopHom_instPreorder___closed__1 = _init_l_TopHom_instPreorder___closed__1();
lean_mark_persistent(l_TopHom_instPreorder___closed__1);
l_BoundedOrderHom_id___closed__1 = _init_l_BoundedOrderHom_id___closed__1();
lean_mark_persistent(l_BoundedOrderHom_id___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
