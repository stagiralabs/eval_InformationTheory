// Lean compiler output
// Module: Mathlib.CategoryTheory.Galois.GaloisObjects
// Imports: Init Mathlib.CategoryTheory.Galois.Basic Mathlib.CategoryTheory.Limits.FintypeCat Mathlib.CategoryTheory.Limits.Preserves.Limits Mathlib.CategoryTheory.Limits.Shapes.SingleObj Mathlib.GroupTheory.GroupAction.Basic Mathlib.Algebra.Equiv.TransferInstance
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
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_2);
x_7 = lean_apply_4(x_5, x_2, x_2, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_PreGaloisCategory_autMulFiber___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_autMulFiber___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_PreGaloisCategory_autMulFiber(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Galois_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_FintypeCat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_SingleObj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Equiv_TransferInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Galois_GaloisObjects(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Galois_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_FintypeCat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_SingleObj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Equiv_TransferInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
