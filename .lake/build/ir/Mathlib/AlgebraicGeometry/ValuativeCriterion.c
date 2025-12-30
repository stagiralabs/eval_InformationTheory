// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.ValuativeCriterion
// Imports: Init Mathlib.AlgebraicGeometry.Morphisms.Immersion Mathlib.AlgebraicGeometry.Morphisms.Proper Mathlib.RingTheory.RingHom.Injective Mathlib.RingTheory.Valuation.LocalSubring
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
LEAN_EXPORT lean_object* l_AlgebraicGeometry_ValuativeCriterion;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_ValuativeCriterion_Existence;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_ValuativeCriterion_Uniqueness;
static lean_object* _init_l_AlgebraicGeometry_ValuativeCriterion_Existence() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_AlgebraicGeometry_ValuativeCriterion_Uniqueness() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_AlgebraicGeometry_ValuativeCriterion() {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_Morphisms_Immersion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_Morphisms_Proper(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_RingHom_Injective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_LocalSubring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_ValuativeCriterion(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_Morphisms_Immersion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_Morphisms_Proper(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_RingHom_Injective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_LocalSubring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_ValuativeCriterion_Existence = _init_l_AlgebraicGeometry_ValuativeCriterion_Existence();
l_AlgebraicGeometry_ValuativeCriterion_Uniqueness = _init_l_AlgebraicGeometry_ValuativeCriterion_Uniqueness();
l_AlgebraicGeometry_ValuativeCriterion = _init_l_AlgebraicGeometry_ValuativeCriterion();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
