// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Trace
// Imports: Init Mathlib.Data.Matrix.Basis Mathlib.Data.Matrix.Block Mathlib.Data.Matrix.RowCol Mathlib.Data.Matrix.Notation
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
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_trace___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_traceAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_trace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_trace___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_traceLinearMap___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Matrix_diag___rarg(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_trace___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_traceLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_traceAddMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_trace___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_trace___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_trace___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_trace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Matrix_diag___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Finset_sum___at_Matrix_trace___spec__1___rarg(x_2, x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_trace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_trace___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_traceAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_trace___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_traceAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_traceAddMonoidHom___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_traceLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_trace___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_traceLinearMap___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_traceLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_traceLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_traceLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_traceLinearMap___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Basis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Block(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_RowCol(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Notation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Basis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Block(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_RowCol(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_traceLinearMap___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
