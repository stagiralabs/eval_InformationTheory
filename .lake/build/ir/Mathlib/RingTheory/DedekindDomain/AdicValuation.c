// Lean compiler output
// Module: Mathlib.RingTheory.DedekindDomain.AdicValuation
// Imports: Init Mathlib.RingTheory.DedekindDomain.Ideal Mathlib.RingTheory.Valuation.ExtendToLocalization Mathlib.RingTheory.Valuation.ValuationSubring Mathlib.Topology.Algebra.Valued.ValuedField Mathlib.Topology.Algebra.Valued.WithVal Mathlib.Algebra.Order.Group.TypeTags
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
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Ideal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_ExtendToLocalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_ValuationSubring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Valued_ValuedField(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Valued_WithVal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_TypeTags(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_DedekindDomain_AdicValuation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_ExtendToLocalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_ValuationSubring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Valued_ValuedField(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Valued_WithVal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
