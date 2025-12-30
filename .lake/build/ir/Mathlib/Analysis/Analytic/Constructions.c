// Lean compiler output
// Module: Mathlib.Analysis.Analytic.Constructions
// Imports: Init Mathlib.Analysis.Analytic.Composition Mathlib.Analysis.Analytic.Linear Mathlib.Analysis.NormedSpace.OperatorNorm.Mul Mathlib.Analysis.Normed.Ring.Units Mathlib.Analysis.Analytic.OfScalars
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
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric(lean_object*, lean_object*);
lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_4, 0);
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed), 5, 4);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_6);
lean_closure_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg(x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_formalMultilinearSeries__geometric___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ContinuousMultilinearMap_mkPiAlgebraFin___at_formalMultilinearSeries__geometric___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_formalMultilinearSeries__geometric___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_formalMultilinearSeries__geometric___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_Composition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_Linear(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_Mul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Ring_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_OfScalars(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Analytic_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_Composition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_Linear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Ring_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_OfScalars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
