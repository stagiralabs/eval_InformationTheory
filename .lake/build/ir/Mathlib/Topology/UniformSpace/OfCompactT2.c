// Lean compiler output
// Module: Mathlib.Topology.UniformSpace.OfCompactT2
// Imports: Init Mathlib.Topology.Separation.Regular Mathlib.Topology.UniformSpace.Defs
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
LEAN_EXPORT lean_object* l_uniformSpaceOfCompactT2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhdsSet___at_uniformSpaceOfCompactT2___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_uniformSpaceOfCompactT2(lean_object*);
LEAN_EXPORT lean_object* l_nhdsSet___at_uniformSpaceOfCompactT2___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nhdsSet___at_uniformSpaceOfCompactT2___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_uniformSpaceOfCompactT2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_uniformSpaceOfCompactT2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_uniformSpaceOfCompactT2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nhdsSet___at_uniformSpaceOfCompactT2___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_nhdsSet___at_uniformSpaceOfCompactT2___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Separation_Regular(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_UniformSpace_OfCompactT2(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Separation_Regular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
