// Lean compiler output
// Module: Mathlib.GroupTheory.SpecificGroups.ZGroup
// Imports: Init Mathlib.Algebra.Squarefree.Basic Mathlib.FieldTheory.Finite.Basic Mathlib.GroupTheory.Nilpotent Mathlib.GroupTheory.SchurZassenhaus Mathlib.GroupTheory.SemidirectProduct
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
lean_object* initialize_Mathlib_Algebra_Squarefree_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Finite_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Nilpotent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_SchurZassenhaus(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_SemidirectProduct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_ZGroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Squarefree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Nilpotent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_SchurZassenhaus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_SemidirectProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
