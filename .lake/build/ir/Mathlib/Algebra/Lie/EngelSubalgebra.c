// Lean compiler output
// Module: Mathlib.Algebra.Lie.EngelSubalgebra
// Imports: Init Mathlib.Algebra.Lie.Engel Mathlib.Algebra.Lie.Normalizer Mathlib.Algebra.Lie.OfAssociative Mathlib.Algebra.Lie.Subalgebra Mathlib.Data.Finset.NatAntidiagonal
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieSubalgebra_engel(lean_object*, lean_object*);
lean_object* l_LieModule_toEnd___at_LieAlgebra_ad___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Module_End_genEigenspace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubalgebra_engel___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieSubalgebra_engel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_LieModule_toEnd___at_LieAlgebra_ad___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_4);
lean_inc(x_1);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = l_Module_End_genEigenspace___rarg(x_1, x_5, x_3, x_6, x_10);
x_13 = lean_apply_1(x_12, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieSubalgebra_engel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieSubalgebra_engel___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Engel(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Normalizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_OfAssociative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Subalgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_NatAntidiagonal(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_EngelSubalgebra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Engel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Normalizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_OfAssociative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Subalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_NatAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
