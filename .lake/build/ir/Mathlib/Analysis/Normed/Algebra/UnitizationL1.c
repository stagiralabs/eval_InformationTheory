// Lean compiler output
// Module: Mathlib.Analysis.Normed.Algebra.UnitizationL1
// Imports: Init Mathlib.Algebra.Algebra.Unitization Mathlib.Analysis.Normed.Lp.ProdLp
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
LEAN_EXPORT lean_object* l_WithLp_unitizationAlgEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnitizationRing(lean_object*, lean_object*);
lean_object* l_NonUnitalRing_toNonUnitalSemiring___rarg(lean_object*);
lean_object* l_Unitization_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnitizationRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_unitizationAlgEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Unitization_instRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
static lean_object* l_WithLp_unitizationAlgEquiv___closed__1;
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnitizationRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Unitization_instRing___rarg(x_7, x_8, x_3, lean_box(0), lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_WithLp_instUnitizationRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_instUnitizationRing___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 1);
x_12 = l_Field_toSemifield___rarg(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_NonUnitalRing_toNonUnitalSemiring___rarg(x_14);
x_16 = l_Unitization_instAlgebra___rarg(x_7, x_13, x_15, x_3, lean_box(0), lean_box(0), x_8, x_9, lean_box(0));
lean_dec(x_15);
lean_dec(x_13);
return x_16;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_WithLp_instAlgebraOfNatENNRealUnitizationOfIsScalarTower___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l_WithLp_unitizationAlgEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_unitizationAlgEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_WithLp_unitizationAlgEquiv___closed__1;
return x_13;
}
}
LEAN_EXPORT lean_object* l_WithLp_unitizationAlgEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_WithLp_unitizationAlgEquiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Unitization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Lp_ProdLp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Algebra_UnitizationL1(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Unitization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Lp_ProdLp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_WithLp_unitizationAlgEquiv___closed__1 = _init_l_WithLp_unitizationAlgEquiv___closed__1();
lean_mark_persistent(l_WithLp_unitizationAlgEquiv___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
