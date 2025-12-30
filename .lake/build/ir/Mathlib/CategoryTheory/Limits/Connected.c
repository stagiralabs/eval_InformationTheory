// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Connected
// Imports: Init Mathlib.CategoryTheory.Limits.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Shapes.Equalizers Mathlib.CategoryTheory.Limits.Shapes.WidePullbacks Mathlib.CategoryTheory.IsConnected Mathlib.CategoryTheory.Limits.Preserves.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCocone___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_id___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCocone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCone___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_const___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCone(lean_object*);
LEAN_EXPORT uint8_t l_CategoryTheory_parallelPairInhabited;
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
x_5 = l_CategoryTheory_Functor_const___rarg(x_1, lean_box(0), x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_constCone___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCocone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
x_5 = l_CategoryTheory_Functor_const___rarg(x_1, lean_box(0), x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_constCocone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_constCocone___rarg), 4, 0);
return x_2;
}
}
static uint8_t _init_l_CategoryTheory_parallelPairInhabited() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Equalizers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_WidePullbacks(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_IsConnected(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Connected(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Equalizers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_WidePullbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_IsConnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_parallelPairInhabited = _init_l_CategoryTheory_parallelPairInhabited();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
