// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Reindex
// Imports: Init Mathlib.LinearAlgebra.Matrix.Determinant.Basic
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
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Matrix_reindex___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_reindex___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_reindex___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_reindexLinearEquiv___elambda__1___rarg), 5, 0);
return x_6;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_Matrix_reindex___elambda__2___rarg), 5, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_reindexLinearEquiv___elambda__1___rarg), 5, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_reindexLinearEquiv___rarg___boxed), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_reindexLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc_n(x_1, 2);
x_2 = lean_alloc_closure((void*)(l_Matrix_reindex___elambda__2___rarg), 5, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Matrix_reindexLinearEquiv___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_Matrix_reindexAlgEquiv___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_reindexAlgEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Matrix_reindexAlgEquiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Reindex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_reindexLinearEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
