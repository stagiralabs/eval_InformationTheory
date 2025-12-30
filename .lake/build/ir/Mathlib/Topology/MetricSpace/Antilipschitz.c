// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.Antilipschitz
// Imports: Init Mathlib.Topology.UniformSpace.CompleteSeparated Mathlib.Topology.EMetricSpace.Lipschitz Mathlib.Topology.MetricSpace.Basic Mathlib.Topology.MetricSpace.Bounded
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
LEAN_EXPORT lean_object* l_AntilipschitzWith_k(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AntilipschitzWith_k(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AntilipschitzWith_k___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AntilipschitzWith_k___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AntilipschitzWith_k___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AntilipschitzWith_k(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_CompleteSeparated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_EMetricSpace_Lipschitz(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Bounded(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_Antilipschitz(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_CompleteSeparated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_EMetricSpace_Lipschitz(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Bounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
