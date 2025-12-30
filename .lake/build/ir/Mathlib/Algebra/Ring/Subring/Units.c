// Lean compiler output
// Module: Mathlib.Algebra.Ring.Subring.Units
// Imports: Init Mathlib.Algebra.Group.Subgroup.Defs Mathlib.Algebra.Group.Submonoid.Operations Mathlib.Algebra.Order.GroupWithZero.Submonoid Mathlib.Algebra.Order.Ring.Defs
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
LEAN_EXPORT lean_object* l_Units_posSubgroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_posSubgroup___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Units_posSubgroup(lean_object*);
LEAN_EXPORT lean_object* l_Units_posSubgroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_posSubgroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Units_posSubgroup___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_posSubgroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Units_posSubgroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Submonoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Subring_Units(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Submonoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
