// Lean compiler output
// Module: Mathlib.Topology.ContinuousMap.Ordered
// Imports: Init Mathlib.Topology.Order.Lattice Mathlib.Topology.Order.ProjIcc Mathlib.Topology.ContinuousMap.Defs
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
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_inf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_inf___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_partialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ContinuousMap_partialOrder___closed__1;
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_sup(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_sup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___rarg(lean_object*, lean_object*);
lean_object* l_Set_IccExtend___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_partialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_inf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_sup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_ContinuousMap_partialOrder___closed__1() {
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
LEAN_EXPORT lean_object* l_ContinuousMap_partialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ContinuousMap_partialOrder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_partialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ContinuousMap_partialOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_sup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_ContinuousMap_sup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_sup___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_sup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_sup(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ContinuousMap_partialOrder___closed__1;
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_semilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_semilatticeSup___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeSup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_semilatticeSup(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_inf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_ContinuousMap_inf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_inf___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_inf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_inf(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ContinuousMap_partialOrder___closed__1;
x_4 = lean_alloc_closure((void*)(l_ContinuousMap_semilatticeInf___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_semilatticeInf___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_semilatticeInf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_semilatticeInf(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_ContinuousMap_partialOrder___closed__1;
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_semilatticeSup___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_ContinuousMap_instLatticeOfTopologicalLattice___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_instLatticeOfTopologicalLattice___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_instLatticeOfTopologicalLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_instLatticeOfTopologicalLattice(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Set_IccExtend___rarg(x_1, x_2, x_3, lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_IccExtend___elambda__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContinuousMap_IccExtend___elambda__1___rarg), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_IccExtend___rarg), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_IccExtend___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_IccExtend(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_ProjIcc(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_ContinuousMap_Ordered(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_ProjIcc(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ContinuousMap_partialOrder___closed__1 = _init_l_ContinuousMap_partialOrder___closed__1();
lean_mark_persistent(l_ContinuousMap_partialOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
