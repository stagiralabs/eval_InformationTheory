// Lean compiler output
// Module: Mathlib.Topology.Connected.PathConnected
// Imports: Init Mathlib.Topology.Path
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_pathSetoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pathSetoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZerothHomotopy_inhabited;
LEAN_EXPORT lean_object* l_pathSetoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_pathSetoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_pathSetoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_ZerothHomotopy_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Path(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Connected_PathConnected(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ZerothHomotopy_inhabited = _init_l_ZerothHomotopy_inhabited();
lean_mark_persistent(l_ZerothHomotopy_inhabited);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
