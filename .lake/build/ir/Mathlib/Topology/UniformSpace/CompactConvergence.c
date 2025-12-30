// Lean compiler output
// Module: Mathlib.Topology.UniformSpace.CompactConvergence
// Imports: Init Mathlib.Topology.CompactOpen Mathlib.Topology.LocallyFinite Mathlib.Topology.Maps.Proper.Basic Mathlib.Topology.UniformSpace.UniformConvergenceTopology Mathlib.Topology.UniformSpace.Compact
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
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg(lean_object*);
static lean_object* l_ContinuousMap_compactConvergenceUniformSpace___closed__1;
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_compactConvergenceUniformSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_toContinuousMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact___rarg(lean_object*, lean_object*);
static lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1;
lean_object* l_ContinuousMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_compactConvergenceUniformSpace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_toUniformOnFunIsCompact___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toUniformOnFunIsCompact___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_toUniformOnFunIsCompact(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_ContinuousMap_compactConvergenceUniformSpace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_compactConvergenceUniformSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_compactConvergenceUniformSpace___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_compactConvergenceUniformSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_compactConvergenceUniformSpace(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___lambda__1), 2, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Equiv_symm___rarg(x_4);
x_11 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_Equiv_symm___rarg(x_1);
x_9 = lean_alloc_closure((void*)(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___lambda__1), 2, 0);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_toContinuousMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_UniformEquiv_arrowCongr___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_1);
lean_closure_set(x_9, 5, x_5);
x_10 = lean_alloc_closure((void*)(l_UniformEquiv_arrowCongr___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_UniformEquiv_arrowCongr___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_UniformEquiv_arrowCongr___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_UniformEquiv_arrowCongr___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_UniformEquiv_arrowCongr___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_CompactOpen(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_LocallyFinite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Maps_Proper_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformConvergenceTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Compact(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_UniformSpace_CompactConvergence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_CompactOpen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_LocallyFinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Maps_Proper_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformConvergenceTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Compact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ContinuousMap_compactConvergenceUniformSpace___closed__1 = _init_l_ContinuousMap_compactConvergenceUniformSpace___closed__1();
lean_mark_persistent(l_ContinuousMap_compactConvergenceUniformSpace___closed__1);
l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1 = _init_l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1();
lean_mark_persistent(l_toContinuousMap___at_UniformEquiv_arrowCongr___spec__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
