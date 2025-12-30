// Lean compiler output
// Module: Mathlib.CategoryTheory.Monoidal.Types.Basic
// Imports: Init Mathlib.CategoryTheory.Monoidal.Functor Mathlib.CategoryTheory.ChosenFiniteProducts Mathlib.CategoryTheory.Limits.Shapes.Types
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
extern lean_object* l_CategoryTheory_Limits_Types_terminalLimitCone;
static lean_object* l_CategoryTheory_typesChosenFiniteProducts___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_typesChosenFiniteProducts;
static lean_object* l_CategoryTheory_typesChosenFiniteProducts___closed__2;
lean_object* l_CategoryTheory_Limits_Types_binaryProductLimitCone(lean_object*, lean_object*);
static lean_object* _init_l_CategoryTheory_typesChosenFiniteProducts___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Types_binaryProductLimitCone), 2, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_typesChosenFiniteProducts___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CategoryTheory_typesChosenFiniteProducts___closed__1;
x_2 = l_CategoryTheory_Limits_Types_terminalLimitCone;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_typesChosenFiniteProducts() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_typesChosenFiniteProducts___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ChosenFiniteProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ChosenFiniteProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_typesChosenFiniteProducts___closed__1 = _init_l_CategoryTheory_typesChosenFiniteProducts___closed__1();
lean_mark_persistent(l_CategoryTheory_typesChosenFiniteProducts___closed__1);
l_CategoryTheory_typesChosenFiniteProducts___closed__2 = _init_l_CategoryTheory_typesChosenFiniteProducts___closed__2();
lean_mark_persistent(l_CategoryTheory_typesChosenFiniteProducts___closed__2);
l_CategoryTheory_typesChosenFiniteProducts = _init_l_CategoryTheory_typesChosenFiniteProducts();
lean_mark_persistent(l_CategoryTheory_typesChosenFiniteProducts);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
