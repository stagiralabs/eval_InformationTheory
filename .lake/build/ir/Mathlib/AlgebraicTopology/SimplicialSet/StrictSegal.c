// Lean compiler output
// Module: Mathlib.AlgebraicTopology.SimplicialSet.StrictSegal
// Imports: Init Mathlib.AlgebraicTopology.SimplicialSet.Nerve Mathlib.AlgebraicTopology.SimplicialSet.Path Mathlib.CategoryTheory.Functor.KanExtension.Adjunction Mathlib.CategoryTheory.Functor.KanExtension.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialObject_diagonal___at_SSet_StrictSegal_spineToDiagonal___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_SimplexCategory_diag(lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineToDiagonal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1___boxed(lean_object*);
lean_object* l_SSet_spine(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SSet_StrictSegal_spineEquiv___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SSet_spine(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_SSet_StrictSegal_spineEquiv___elambda__2), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_SSet_StrictSegal_spineEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineEquiv___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SSet_StrictSegal_spineEquiv___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialObject_diagonal___at_SSet_StrictSegal_spineToDiagonal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_SimplexCategory_diag(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_apply_4(x_4, x_2, x_6, x_5, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SSet_StrictSegal_spineToDiagonal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
x_6 = l_CategoryTheory_SimplicialObject_diagonal___at_SSet_StrictSegal_spineToDiagonal___spec__1(x_1, x_3, x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Nerve(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Path(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_KanExtension_Adjunction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_KanExtension_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_StrictSegal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialSet_Nerve(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialSet_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_KanExtension_Adjunction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_KanExtension_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
