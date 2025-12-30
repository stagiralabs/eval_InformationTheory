// Lean compiler output
// Module: Mathlib.Algebra.Homology.HomotopyCategory.ShortExact
// Imports: Init Mathlib.Algebra.Homology.HomotopyCategory.HomologicalFunctor Mathlib.Algebra.Homology.HomotopyCategory.ShiftSequence Mathlib.Algebra.Homology.HomologySequenceLemmas Mathlib.Algebra.Homology.Refinements
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
lean_object* initialize_Mathlib_Algebra_Homology_HomotopyCategory_HomologicalFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_HomotopyCategory_ShiftSequence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_HomologySequenceLemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_Refinements(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_HomotopyCategory_ShortExact(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_HomotopyCategory_HomologicalFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_HomotopyCategory_ShiftSequence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_HomologySequenceLemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_Refinements(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
