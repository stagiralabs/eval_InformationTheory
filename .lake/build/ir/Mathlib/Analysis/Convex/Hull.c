// Lean compiler output
// Module: Mathlib.Analysis.Convex.Hull
// Imports: Init Mathlib.Analysis.Convex.Basic Mathlib.Order.Closure
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
LEAN_EXPORT lean_object* l_ClosureOperator_ofPred___at_convexHull___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ClosureOperator_ofPred___at_convexHull___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ClosureOperator_mk_u2082___at_convexHull___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexHull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexHull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ClosureOperator_ofCompletePred___at_convexHull___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_convexHull___spec__2;
LEAN_EXPORT lean_object* l_ClosureOperator_mk_u2082___at_convexHull___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_iInf___at_convexHull___spec__2() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_ClosureOperator_mk_u2082___at_convexHull___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_ClosureOperator_ofPred___at_convexHull___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_ClosureOperator_ofCompletePred___at_convexHull___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_convexHull(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_ClosureOperator_mk_u2082___at_convexHull___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ClosureOperator_mk_u2082___at_convexHull___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ClosureOperator_ofPred___at_convexHull___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ClosureOperator_ofPred___at_convexHull___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_convexHull___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_convexHull(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Closure(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Convex_Hull(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Closure(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_iInf___at_convexHull___spec__2 = _init_l_iInf___at_convexHull___spec__2();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
