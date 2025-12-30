// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.Pullback.Square
// Imports: Init Mathlib.CategoryTheory.MorphismProperty.Limits Mathlib.CategoryTheory.Square Mathlib.CategoryTheory.Limits.Shapes.Pullback.CommSq
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
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pushoutCocone___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pushoutCocone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pullbackCone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pullbackCone___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Limits_PullbackCone_mk___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Limits_PushoutCocone_mk___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pullbackCone___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 6);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 7);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 4);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_CategoryTheory_Limits_PullbackCone_mk___rarg(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pullbackCone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Square_pullbackCone___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pushoutCocone___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 4);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 5);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 6);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 7);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_CategoryTheory_Limits_PushoutCocone_mk___rarg(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Square_pushoutCocone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Square_pushoutCocone___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_MorphismProperty_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Square(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_CommSq(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_Square(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_MorphismProperty_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Square(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_CommSq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
