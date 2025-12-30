// Lean compiler output
// Module: Mathlib.LinearAlgebra.CliffordAlgebra.CategoryTheory
// Imports: Init Mathlib.LinearAlgebra.CliffordAlgebra.Basic Mathlib.LinearAlgebra.QuadraticForm.QuadraticModuleCat Mathlib.Algebra.Category.AlgebraCat.Basic
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
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_CliffordAlgebra_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CliffordAlgebra_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_CliffordAlgebra_instRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_CliffordAlgebra_instRing___rarg(x_1, lean_box(0), x_4, x_5, x_6);
x_8 = l_CliffordAlgebra_instAlgebra___rarg(x_1, lean_box(0), x_4, x_5, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_CliffordAlgebra_map___rarg(x_1, lean_box(0), lean_box(0), x_6, x_10, x_7, x_11, x_8, x_12, x_4);
lean_dec(x_12);
lean_dec(x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__2), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuadraticModuleCat_cliffordAlgebra___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticModuleCat_cliffordAlgebra___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_QuadraticForm_QuadraticModuleCat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_AlgebraCat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_CategoryTheory(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_QuadraticForm_QuadraticModuleCat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_AlgebraCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
