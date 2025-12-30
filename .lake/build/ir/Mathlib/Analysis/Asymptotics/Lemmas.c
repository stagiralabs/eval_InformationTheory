// Lean compiler output
// Module: Mathlib.Analysis.Asymptotics.Lemmas
// Imports: Init Mathlib.Analysis.Asymptotics.Defs Mathlib.Analysis.Normed.Group.Bounded Mathlib.Analysis.Normed.Group.InfiniteSum Mathlib.Analysis.Normed.MulAction Mathlib.Topology.Algebra.Order.LiminfLimsup Mathlib.Topology.PartialHomeomorph
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
lean_object* initialize_Mathlib_Analysis_Asymptotics_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Bounded(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_InfiniteSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_MulAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_PartialHomeomorph(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Asymptotics_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Asymptotics_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Bounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_InfiniteSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_MulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_PartialHomeomorph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
