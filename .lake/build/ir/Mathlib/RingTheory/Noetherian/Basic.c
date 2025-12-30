// Lean compiler output
// Module: Mathlib.RingTheory.Noetherian.Basic
// Imports: Init Mathlib.Algebra.Order.PartialSups Mathlib.LinearAlgebra.Quotient.Basic Mathlib.RingTheory.Noetherian.Defs Mathlib.RingTheory.Finiteness.Cardinality Mathlib.RingTheory.Finiteness.Finsupp Mathlib.RingTheory.Ideal.Prod
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
lean_object* initialize_Mathlib_Algebra_Order_PartialSups(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Quotient_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Cardinality(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Noetherian_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_PartialSups(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Quotient_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Cardinality(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
