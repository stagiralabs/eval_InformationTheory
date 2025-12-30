// Lean compiler output
// Module: Mathlib.AlgebraicTopology.SimplicialSet.Monoidal
// Imports: Init Mathlib.AlgebraicTopology.SimplicialSet.Basic Mathlib.CategoryTheory.ChosenFiniteProducts.FunctorCategory Mathlib.CategoryTheory.Monoidal.Types.Basic
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
static lean_object* l_SSet_unitHomEquiv___elambda__1___closed__1;
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv(lean_object*);
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SimplexCategory_const___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2___rarg(lean_object*);
static lean_object* _init_l_SSet_unitHomEquiv___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_SimplexCategory_const___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_SSet_unitHomEquiv___elambda__1___closed__1;
x_8 = lean_apply_4(x_5, x_6, x_3, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_box(0);
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SSet_unitHomEquiv___elambda__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_SSet_unitHomEquiv___elambda__1___boxed), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_SSet_unitHomEquiv___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SSet_unitHomEquiv___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SSet_unitHomEquiv___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SSet_unitHomEquiv___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ChosenFiniteProducts_FunctorCategory(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Monoidal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialSet_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ChosenFiniteProducts_FunctorCategory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SSet_unitHomEquiv___elambda__1___closed__1 = _init_l_SSet_unitHomEquiv___elambda__1___closed__1();
lean_mark_persistent(l_SSet_unitHomEquiv___elambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
