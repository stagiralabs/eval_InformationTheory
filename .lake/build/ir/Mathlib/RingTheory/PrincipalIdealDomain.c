// Lean compiler output
// Module: Mathlib.RingTheory.PrincipalIdealDomain
// Imports: Init Mathlib.Algebra.EuclideanDomain.Basic Mathlib.Algebra.EuclideanDomain.Field Mathlib.Algebra.GCDMonoid.Basic Mathlib.RingTheory.Ideal.Maps Mathlib.RingTheory.Ideal.Nonunits Mathlib.RingTheory.Noetherian.UniqueFactorizationDomain
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_EuclideanDomain_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_EuclideanDomain_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Maps(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Nonunits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_UniqueFactorizationDomain(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_PrincipalIdealDomain(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_EuclideanDomain_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_EuclideanDomain_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Maps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Nonunits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_UniqueFactorizationDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
