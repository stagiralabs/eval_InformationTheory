// Lean compiler output
// Module: Mathlib.GroupTheory.ArchimedeanDensely
// Imports: Init Mathlib.Algebra.Group.Equiv.TypeTags Mathlib.Algebra.Group.Subgroup.Pointwise Mathlib.Algebra.Module.NatInt Mathlib.Algebra.Order.Group.TypeTags Mathlib.Algebra.Order.Hom.Monoid Mathlib.Data.Int.Interval Mathlib.GroupTheory.Archimedean
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
lean_object* initialize_Mathlib_Algebra_Group_Equiv_TypeTags(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_NatInt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_TypeTags(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Hom_Monoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Archimedean(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_ArchimedeanDensely(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_NatInt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Hom_Monoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
