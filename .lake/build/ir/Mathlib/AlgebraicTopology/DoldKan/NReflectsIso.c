// Lean compiler output
// Module: Mathlib.AlgebraicTopology.DoldKan.NReflectsIso
// Imports: Init Mathlib.AlgebraicTopology.DoldKan.FunctorN Mathlib.AlgebraicTopology.DoldKan.Decomposition Mathlib.CategoryTheory.Idempotents.HomologicalComplex Mathlib.CategoryTheory.Idempotents.KaroubiKaroubi
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
lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_FunctorN(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_Decomposition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Idempotents_HomologicalComplex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Idempotents_KaroubiKaroubi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_NReflectsIso(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_DoldKan_FunctorN(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_DoldKan_Decomposition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Idempotents_HomologicalComplex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Idempotents_KaroubiKaroubi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
