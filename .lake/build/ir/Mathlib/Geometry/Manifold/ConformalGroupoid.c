// Lean compiler output
// Module: Mathlib.Geometry.Manifold.ConformalGroupoid
// Imports: Init Mathlib.Analysis.Calculus.Conformal.NormedSpace Mathlib.Geometry.Manifold.ChartedSpace
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
LEAN_EXPORT lean_object* l_conformalPregroupoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conformalGroupoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conformalPregroupoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conformalGroupoid(lean_object*);
LEAN_EXPORT lean_object* l_conformalGroupoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conformalPregroupoid(lean_object*);
LEAN_EXPORT lean_object* l_conformalPregroupoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conformalPregroupoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conformalPregroupoid___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_conformalPregroupoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_conformalPregroupoid___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conformalGroupoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_conformalGroupoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conformalGroupoid___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_conformalGroupoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_conformalGroupoid___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Conformal_NormedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_ChartedSpace(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_ConformalGroupoid(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Conformal_NormedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_ChartedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
