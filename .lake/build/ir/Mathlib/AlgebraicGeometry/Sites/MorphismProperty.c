// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.Sites.MorphismProperty
// Imports: Init Mathlib.AlgebraicGeometry.Pullbacks Mathlib.CategoryTheory.Sites.MorphismProperty
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
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_grothendieckTopology(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_surjectiveFamiliesPretopology(lean_object*);
static lean_object* l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_pretopology(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_Scheme_pretopology___closed__1;
static lean_object* _init_l_AlgebraicGeometry_Scheme_pretopology___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_pretopology(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgebraicGeometry_Scheme_pretopology___closed__1;
return x_6;
}
}
static lean_object* _init_l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_grothendieckTopology(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Scheme_surjectiveFamiliesPretopology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_Scheme_pretopology___closed__1;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_Pullbacks(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_MorphismProperty(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_Sites_MorphismProperty(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_Pullbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_MorphismProperty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_Scheme_pretopology___closed__1 = _init_l_AlgebraicGeometry_Scheme_pretopology___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_pretopology___closed__1);
l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1 = _init_l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_Scheme_grothendieckTopology___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
