// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.DisjointCoproduct
// Imports: Init Mathlib.CategoryTheory.Limits.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Shapes.Pullback.HasPullback
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
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_apply_9(x_5, x_4, x_1, x_6, x_7, x_9, x_10, x_8, lean_box(0), x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Limits_isInitialOfIsPullbackOfIsCoproduct(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_DisjointCoproduct(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
