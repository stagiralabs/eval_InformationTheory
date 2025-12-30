// Lean compiler output
// Module: Mathlib.Data.Matrix.ColumnRowPartitioned
// Imports: Init Mathlib.Data.Matrix.Block Mathlib.LinearAlgebra.Matrix.SemiringInverse
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
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toRows_u2081___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromCols(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toRows_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromColumns___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toCols_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toCols_u2081___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2081___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromRows___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toCols_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_elim___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toRows_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromColumns(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromRows(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toRows_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromCols___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toCols_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_fromRows___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Sum_elim___rarg(x_1, x_2, x_3);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromRows(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_fromRows___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromCols___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_1(x_2, x_3);
x_7 = l_Sum_elim___rarg(x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromCols(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_fromCols___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toCols_u2081___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toCols_u2081(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toCols_u2081___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toCols_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toCols_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toCols_u2082___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toRows_u2081___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toRows_u2081(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toRows_u2081___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toRows_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toRows_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toRows_u2082___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromColumns___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_fromCols___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_fromColumns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_fromColumns___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2081___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_toCols_u2081___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2081(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toColumns_u2081___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_toCols_u2082___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_toColumns_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_toColumns_u2082___rarg), 3, 0);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Block(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_SemiringInverse(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_ColumnRowPartitioned(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Block(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_SemiringInverse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
