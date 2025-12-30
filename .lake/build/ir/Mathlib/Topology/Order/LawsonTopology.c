// Lean compiler output
// Module: Mathlib.Topology.Order.LawsonTopology
// Imports: Init Mathlib.Topology.Order.LowerUpperTopology Mathlib.Topology.Order.ScottTopology
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
LEAN_EXPORT lean_object* l_Topology_WithLawson_ofLawson(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_toLawson(lean_object*);
LEAN_EXPORT lean_object* l_Topology_lawson___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_homeomorph___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_rec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Topology_lawson___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder___rarg___boxed(lean_object*);
lean_object* l_TopologicalSpace_instCompleteLattice(lean_object*);
static lean_object* l_Topology_WithLawson_toLawson___closed__1;
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace___rarg___boxed(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Topology_lawson___rarg___closed__2;
static lean_object* l_Topology_lawson___rarg___closed__1;
LEAN_EXPORT lean_object* l_Topology_WithLawson_rec___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_homeomorph(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder(lean_object*);
lean_object* l_Topology_scott(lean_object*, lean_object*, lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Topology_lawson(lean_object*);
lean_object* l_Equiv_refl(lean_object*);
static lean_object* _init_l_Topology_lawson___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_TopologicalSpace_instCompleteLattice(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Topology_lawson___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Topology_lawson___rarg___closed__1;
x_2 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_lawson___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Topology_lawson___rarg___closed__2;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_box(0);
x_5 = l_Topology_scott(lean_box(0), lean_box(0), x_1);
x_6 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Topology_lawson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Topology_lawson___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_lawson___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_lawson___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Topology_WithLawson_toLawson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_toLawson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_WithLawson_toLawson___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_ofLawson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_WithLawson_toLawson___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_rec___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_rec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Topology_WithLawson_rec___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Topology_WithLawson_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_WithLawson_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Topology_WithLawson_instPreorder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instPreorder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_WithLawson_instPreorder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_lawson___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Topology_WithLawson_instTopologicalSpace___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_instTopologicalSpace___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Topology_WithLawson_instTopologicalSpace___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_homeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Topology_WithLawson_toLawson___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Topology_WithLawson_homeomorph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Topology_WithLawson_homeomorph(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_LowerUpperTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_ScottTopology(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Order_LawsonTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_LowerUpperTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_ScottTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Topology_lawson___rarg___closed__1 = _init_l_Topology_lawson___rarg___closed__1();
lean_mark_persistent(l_Topology_lawson___rarg___closed__1);
l_Topology_lawson___rarg___closed__2 = _init_l_Topology_lawson___rarg___closed__2();
lean_mark_persistent(l_Topology_lawson___rarg___closed__2);
l_Topology_WithLawson_toLawson___closed__1 = _init_l_Topology_WithLawson_toLawson___closed__1();
lean_mark_persistent(l_Topology_WithLawson_toLawson___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
