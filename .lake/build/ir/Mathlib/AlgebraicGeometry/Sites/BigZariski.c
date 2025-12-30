// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.Sites.BigZariski
// Imports: Init Mathlib.AlgebraicGeometry.Sites.MorphismProperty Mathlib.CategoryTheory.Sites.Canonical
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
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_zariskiTopology;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_zariskiPretopology;
static lean_object* l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1;
static lean_object* l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1;
static lean_object* _init_l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_Scheme_zariskiPretopology() {
_start:
{
lean_object* x_1; 
x_1 = l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1;
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_Scheme_zariskiTopology() {
_start:
{
lean_object* x_1; 
x_1 = l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_Sites_MorphismProperty(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Canonical(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_Sites_BigZariski(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_Sites_MorphismProperty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1 = _init_l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_zariskiPretopology___closed__1);
l_AlgebraicGeometry_Scheme_zariskiPretopology = _init_l_AlgebraicGeometry_Scheme_zariskiPretopology();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_zariskiPretopology);
l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1 = _init_l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_zariskiTopology___closed__1);
l_AlgebraicGeometry_Scheme_zariskiTopology = _init_l_AlgebraicGeometry_Scheme_zariskiTopology();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_zariskiTopology);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
