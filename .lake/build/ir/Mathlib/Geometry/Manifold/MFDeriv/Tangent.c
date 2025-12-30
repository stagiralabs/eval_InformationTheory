// Lean compiler output
// Module: Mathlib.Geometry.Manifold.MFDeriv.Tangent
// Imports: Init Mathlib.Geometry.Manifold.MFDeriv.Atlas Mathlib.Geometry.Manifold.MFDeriv.UniqueDifferential Mathlib.Geometry.Manifold.VectorBundle.Tangent Mathlib.Geometry.Manifold.Diffeomorph
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
lean_object* l_Bundle_TotalSpace_toProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tangentBundleModelSpaceDiffeomorph(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tangentBundleModelSpaceDiffeomorph___closed__1;
LEAN_EXPORT lean_object* l_tangentBundleModelSpaceDiffeomorph___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_tangentBundleModelSpaceDiffeomorph___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Bundle_TotalSpace_toProd(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_tangentBundleModelSpaceDiffeomorph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_tangentBundleModelSpaceDiffeomorph___closed__1;
return x_10;
}
}
LEAN_EXPORT lean_object* l_tangentBundleModelSpaceDiffeomorph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_tangentBundleModelSpaceDiffeomorph(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_MFDeriv_Atlas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_MFDeriv_UniqueDifferential(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_VectorBundle_Tangent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_Diffeomorph(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_MFDeriv_Tangent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_MFDeriv_Atlas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_MFDeriv_UniqueDifferential(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_VectorBundle_Tangent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_Diffeomorph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_tangentBundleModelSpaceDiffeomorph___closed__1 = _init_l_tangentBundleModelSpaceDiffeomorph___closed__1();
lean_mark_persistent(l_tangentBundleModelSpaceDiffeomorph___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
