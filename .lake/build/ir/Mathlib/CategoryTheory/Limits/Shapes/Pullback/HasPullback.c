// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.Pullback.HasPullback
// Imports: Init Mathlib.CategoryTheory.Limits.Shapes.Pullback.PullbackCone
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
static lean_object* l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_walkingSpanOpEquiv;
static lean_object* l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_walkingCospanOpEquiv;
lean_object* l_CategoryTheory_Limits_widePullbackShapeOpEquiv(lean_object*);
lean_object* l_CategoryTheory_Limits_widePushoutShapeOpEquiv(lean_object*);
static lean_object* _init_l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Limits_widePushoutShapeOpEquiv(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Limits_walkingSpanOpEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1;
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Limits_widePullbackShapeOpEquiv(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Limits_walkingCospanOpEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_PullbackCone(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_HasPullback(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_PullbackCone(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1 = _init_l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1();
lean_mark_persistent(l_CategoryTheory_Limits_walkingSpanOpEquiv___closed__1);
l_CategoryTheory_Limits_walkingSpanOpEquiv = _init_l_CategoryTheory_Limits_walkingSpanOpEquiv();
lean_mark_persistent(l_CategoryTheory_Limits_walkingSpanOpEquiv);
l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1 = _init_l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1();
lean_mark_persistent(l_CategoryTheory_Limits_walkingCospanOpEquiv___closed__1);
l_CategoryTheory_Limits_walkingCospanOpEquiv = _init_l_CategoryTheory_Limits_walkingCospanOpEquiv();
lean_mark_persistent(l_CategoryTheory_Limits_walkingCospanOpEquiv);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
