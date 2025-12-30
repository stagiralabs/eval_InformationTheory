// Lean compiler output
// Module: Mathlib.Geometry.RingedSpace.Basic
// Imports: Init Mathlib.Algebra.Category.Ring.Colimits Mathlib.Algebra.Category.Ring.FilteredColimits Mathlib.Algebra.Category.Ring.Limits Mathlib.Algebra.Order.Ring.Nat Mathlib.Geometry.RingedSpace.SheafedSpace Mathlib.Topology.Sheaves.Stalks
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
LEAN_EXPORT lean_object* l_AlgebraicGeometry_RingedSpace_basicOpen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_RingedSpace_basicOpen___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_RingedSpace_instCoeSortType;
static lean_object* _init_l_AlgebraicGeometry_RingedSpace_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_RingedSpace_basicOpen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_RingedSpace_basicOpen___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicGeometry_RingedSpace_basicOpen(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Colimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_FilteredColimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_RingedSpace_SheafedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Stalks(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_RingedSpace_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Colimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_FilteredColimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_RingedSpace_SheafedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Stalks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_RingedSpace_instCoeSortType = _init_l_AlgebraicGeometry_RingedSpace_instCoeSortType();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
