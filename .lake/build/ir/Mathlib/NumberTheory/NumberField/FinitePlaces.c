// Lean compiler output
// Module: Mathlib.NumberTheory.NumberField.FinitePlaces
// Imports: Init Mathlib.Analysis.Normed.Ring.Ultra Mathlib.Data.Int.WithZero Mathlib.NumberTheory.NumberField.Embeddings Mathlib.RingTheory.DedekindDomain.AdicValuation Mathlib.RingTheory.DedekindDomain.Factorization Mathlib.RingTheory.Ideal.Norm.AbsNorm Mathlib.Topology.Algebra.Valued.NormedValued
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
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NumberField_FinitePlace_instFunLikeReal___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NumberField_FinitePlace_instFunLikeReal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NumberField_FinitePlace_instFunLikeReal(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Ring_Ultra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_WithZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_NumberField_Embeddings(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_AdicValuation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Factorization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Norm_AbsNorm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Valued_NormedValued(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_NumberField_FinitePlaces(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Ring_Ultra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_WithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_NumberField_Embeddings(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_AdicValuation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Factorization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Norm_AbsNorm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Valued_NormedValued(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
