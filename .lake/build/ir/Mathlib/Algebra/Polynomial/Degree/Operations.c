// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Degree.Operations
// Imports: Init Mathlib.Algebra.Polynomial.Coeff Mathlib.Algebra.Polynomial.Degree.Definitions
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
static lean_object* l_Polynomial_degreeMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeffHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Polynomial_leadingCoeff___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_instWellFoundedRelation___boxed(lean_object*, lean_object*);
static lean_object* l_Polynomial_leadingCoeffHom___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeffHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_instWellFoundedRelation(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degreeMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Polynomial_degree___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_instWellFoundedRelation(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_instWellFoundedRelation___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_instWellFoundedRelation(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial_degreeMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Polynomial_degree___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_degreeMonoidHom___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degreeMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_degreeMonoidHom(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Polynomial_leadingCoeffHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Polynomial_leadingCoeff___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeffHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_leadingCoeffHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeffHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_leadingCoeffHom(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Coeff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Degree_Definitions(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Degree_Operations(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Coeff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Degree_Definitions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Polynomial_degreeMonoidHom___closed__1 = _init_l_Polynomial_degreeMonoidHom___closed__1();
lean_mark_persistent(l_Polynomial_degreeMonoidHom___closed__1);
l_Polynomial_leadingCoeffHom___closed__1 = _init_l_Polynomial_leadingCoeffHom___closed__1();
lean_mark_persistent(l_Polynomial_leadingCoeffHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
