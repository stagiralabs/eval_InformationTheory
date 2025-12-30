// Lean compiler output
// Module: Mathlib.Topology.Category.CompHausLike.SigmaComparison
// Imports: Init Mathlib.Topology.Category.CompHausLike.Limits
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
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_box(0);
lean_inc(x_10);
x_13 = lean_apply_1(x_5, x_10);
x_14 = lean_alloc_closure((void*)(l_CompHausLike_sigmaComparison___rarg___lambda__1), 2, 1);
lean_closure_set(x_14, 0, x_10);
x_15 = lean_apply_4(x_11, x_12, x_13, x_14, x_9);
return x_15;
}
}
LEAN_EXPORT lean_object* l_CompHausLike_sigmaComparison(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CompHausLike_sigmaComparison___rarg), 10, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHausLike_Limits(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_CompHausLike_SigmaComparison(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHausLike_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
