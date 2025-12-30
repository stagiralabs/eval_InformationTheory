// Lean compiler output
// Module: Mathlib.MeasureTheory.Measure.Haar.OfBasis
// Imports: Init Mathlib.MeasureTheory.Measure.Haar.Basic Mathlib.Analysis.InnerProductSpace.PiL2
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
LEAN_EXPORT lean_object* l_Basis_parallelepiped___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_parallelepiped___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_EuclideanSpace_measurableEquiv___closed__1;
LEAN_EXPORT lean_object* l_Basis_parallelepiped(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Basis_parallelepiped___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EuclideanSpace_measurableEquiv(lean_object*);
LEAN_EXPORT lean_object* l_EuclideanSpace_instMeasurableSpaceReal(lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Basis_parallelepiped___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Basis_parallelepiped(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Basis_parallelepiped___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Basis_parallelepiped___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Basis_parallelepiped___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Basis_parallelepiped___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Basis_parallelepiped(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_EuclideanSpace_instMeasurableSpaceReal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_EuclideanSpace_measurableEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_EuclideanSpace_measurableEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_EuclideanSpace_measurableEquiv___closed__1;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_PiL2(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_OfBasis(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Haar_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_PiL2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_EuclideanSpace_measurableEquiv___closed__1 = _init_l_EuclideanSpace_measurableEquiv___closed__1();
lean_mark_persistent(l_EuclideanSpace_measurableEquiv___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
