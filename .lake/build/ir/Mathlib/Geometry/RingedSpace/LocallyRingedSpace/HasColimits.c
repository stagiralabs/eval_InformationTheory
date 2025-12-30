// Lean compiler output
// Module: Mathlib.Geometry.RingedSpace.LocallyRingedSpace.HasColimits
// Imports: Init Mathlib.Geometry.RingedSpace.LocallyRingedSpace Mathlib.Algebra.Category.Ring.Constructions Mathlib.Geometry.RingedSpace.OpenImmersion Mathlib.CategoryTheory.Limits.Constructions.LimitsOfProductsAndEqualizers
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
lean_object* initialize_Mathlib_Geometry_RingedSpace_LocallyRingedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_RingedSpace_OpenImmersion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_LimitsOfProductsAndEqualizers(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_RingedSpace_LocallyRingedSpace_HasColimits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_RingedSpace_LocallyRingedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_RingedSpace_OpenImmersion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_LimitsOfProductsAndEqualizers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
