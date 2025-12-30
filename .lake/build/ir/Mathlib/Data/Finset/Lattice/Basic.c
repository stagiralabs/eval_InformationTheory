// Lean compiler output
// Module: Mathlib.Data.Finset.Lattice.Basic
// Imports: Init Mathlib.Data.Finset.Defs Mathlib.Data.Multiset.FinsetOps
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
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instUnion(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instUnion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg(lean_object*);
lean_object* l_Finset_partialOrder(lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instInter(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instInter___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_instLattice___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_instLattice(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDistribLattice(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instUnion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_instUnion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instUnion___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instInter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_instInter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instInter___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Finset_instLattice___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_partialOrder(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Finset_instLattice___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Finset_instLattice___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_Finset_instLattice___rarg___lambda__2), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_instLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instDistribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_instLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instDistribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instDistribLattice___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_FinsetOps(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Lattice_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_FinsetOps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_instLattice___rarg___closed__1 = _init_l_Finset_instLattice___rarg___closed__1();
lean_mark_persistent(l_Finset_instLattice___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
