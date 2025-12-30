// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.EllipticCurve.DivisionPolynomial.Degree
// Imports: Init Mathlib.AlgebraicGeometry.EllipticCurve.DivisionPolynomial.Basic Mathlib.Tactic.ComputeDegree
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
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expDegree(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l_Nat_instDecidablePredEven(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expDegree___boxed(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1;
lean_object* lean_int_ediv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expDegree(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_pow(x_1, x_2);
x_4 = l_Nat_instDecidablePredEven(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_3, x_5);
lean_dec(x_3);
x_7 = lean_nat_div(x_6, x_2);
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(4u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_div(x_9, x_2);
lean_dec(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expDegree___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expDegree(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Nat_instDecidablePredEven(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_nat_to_int(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_nat_to_int(x_1);
x_5 = l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1;
x_6 = lean_int_ediv(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ComputeDegree(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ComputeDegree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1 = _init_l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1();
lean_mark_persistent(l___private_Mathlib_AlgebraicGeometry_EllipticCurve_DivisionPolynomial_Degree_0__WeierstrassCurve_expCoeff___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
