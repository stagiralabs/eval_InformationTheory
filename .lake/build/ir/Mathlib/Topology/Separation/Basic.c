// Lean compiler output
// Module: Mathlib.Topology.Separation.Basic
// Imports: Init Mathlib.Algebra.Group.Support Mathlib.Topology.Connected.TotallyDisconnected Mathlib.Topology.Inseparable Mathlib.Topology.Separation.SeparatedNhds Mathlib.Topology.Compactness.LocallyCompact
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
lean_object* l_Filter_coclosedCompact___rarg(lean_object*);
lean_object* l_specializationPreorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_specializationOrder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_specializationOrder(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_specializationOrder___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact(lean_object*);
LEAN_EXPORT lean_object* l_specializationOrder___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_specializationPreorder(lean_box(0), x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_specializationOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_specializationOrder___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_specializationOrder___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_specializationOrder___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_coclosedCompact___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bornology_relativelyCompact___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_relativelyCompact___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Bornology_relativelyCompact___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Connected_TotallyDisconnected(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Inseparable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Separation_SeparatedNhds(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Compactness_LocallyCompact(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Separation_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Connected_TotallyDisconnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Inseparable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Separation_SeparatedNhds(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Compactness_LocallyCompact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
