// Lean compiler output
// Module: Mathlib.RingTheory.Trace.Basic
// Imports: Init Mathlib.FieldTheory.Galois.Basic Mathlib.FieldTheory.Minpoly.MinpolyDiv Mathlib.FieldTheory.IsAlgClosed.AlgebraicClosure Mathlib.LinearAlgebra.Determinant Mathlib.LinearAlgebra.Matrix.Charpoly.Minpoly Mathlib.LinearAlgebra.Vandermonde Mathlib.RingTheory.Trace.Defs
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
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_reindex___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
static lean_object* l_Algebra_embeddingsMatrixReindex___rarg___closed__1;
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Algebra_embeddingsMatrix___rarg), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Algebra_embeddingsMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
static lean_object* _init_l_Algebra_embeddingsMatrixReindex___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Equiv_symm___rarg(x_2);
x_6 = lean_alloc_closure((void*)(l_Algebra_embeddingsMatrix___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_Algebra_embeddingsMatrixReindex___rarg___closed__1;
x_8 = l_Matrix_reindex___elambda__2___rarg(x_7, x_5, x_6, x_3, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Algebra_embeddingsMatrixReindex___rarg), 4, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Algebra_embeddingsMatrixReindex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Algebra_embeddingsMatrixReindex(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Galois_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Minpoly_MinpolyDiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IsAlgClosed_AlgebraicClosure(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Determinant(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Minpoly(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Vandermonde(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Trace_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Trace_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Galois_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Minpoly_MinpolyDiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IsAlgClosed_AlgebraicClosure(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Determinant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Minpoly(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Vandermonde(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Trace_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Algebra_embeddingsMatrixReindex___rarg___closed__1 = _init_l_Algebra_embeddingsMatrixReindex___rarg___closed__1();
lean_mark_persistent(l_Algebra_embeddingsMatrixReindex___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
