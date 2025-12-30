// Lean compiler output
// Module: Mathlib.CategoryTheory.Monoidal.Types.Coyoneda
// Imports: Init Mathlib.CategoryTheory.Monoidal.Types.Basic Mathlib.CategoryTheory.Monoidal.CoherenceLemmas
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
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_CategoryTheory_typesChosenFiniteProducts;
extern lean_object* l_CategoryTheory_types;
lean_object* l_CategoryTheory_ChosenFiniteProducts_instMonoidalCategory___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_8);
lean_inc_n(x_3, 2);
x_9 = lean_apply_2(x_8, x_3, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_apply_2(x_8, x_4, x_5);
x_11 = lean_ctor_get(x_2, 6);
lean_inc(x_11);
lean_inc(x_3);
x_12 = lean_apply_1(x_11, x_3);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_2, 3);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
lean_inc_n(x_3, 2);
x_17 = lean_apply_6(x_14, x_3, x_4, x_3, x_5, x_15, x_16);
x_18 = lean_apply_5(x_7, x_3, x_9, x_10, x_13, x_17);
return x_18;
}
}
static lean_object* _init_l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CategoryTheory_types;
x_2 = l_CategoryTheory_typesChosenFiniteProducts;
x_3 = l_CategoryTheory_ChosenFiniteProducts_instMonoidalCategory___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 4);
lean_inc(x_3);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__2), 6, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_CoherenceLemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Coyoneda(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_CoherenceLemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___closed__1 = _init_l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_instLaxMonoidalObjOppositeFunctorTypeCoyonedaOpTensorUnit___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
