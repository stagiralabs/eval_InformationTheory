// Lean compiler output
// Module: Mathlib.Topology.Compactness.Compact
// Imports: Init Mathlib.Order.Filter.Tendsto Mathlib.Topology.Bases Mathlib.Data.Set.Accumulate Mathlib.Topology.Bornology.Basic Mathlib.Topology.LocallyFinite Mathlib.Topology.Ultrafilter Mathlib.Topology.Defs.Ultrafilter
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
LEAN_EXPORT lean_object* l_Bornology_inCompact___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_inCompact(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_inCompact___rarg(lean_object*);
lean_object* l_Filter_cocompact___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_inCompact___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_cocompact___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_inCompact(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bornology_inCompact___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_inCompact___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Bornology_inCompact___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Tendsto(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bases(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Accumulate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bornology_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_LocallyFinite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Ultrafilter(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Defs_Ultrafilter(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Compactness_Compact(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Tendsto(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Accumulate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bornology_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_LocallyFinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Ultrafilter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Defs_Ultrafilter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
