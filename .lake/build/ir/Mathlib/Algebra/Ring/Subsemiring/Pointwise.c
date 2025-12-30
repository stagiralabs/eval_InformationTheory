// Lean compiler output
// Module: Mathlib.Algebra.Ring.Subsemiring.Pointwise
// Imports: Init Mathlib.Algebra.Group.Submonoid.Pointwise Mathlib.Algebra.Ring.Action.Basic Mathlib.Algebra.Ring.Subsemiring.Basic
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
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1(lean_object*);
lean_object* l_MulDistribMulAction_toMonoidHom___at_MulSemiringAction_toRingHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___at_MulSemiringAction_toRingHom___spec__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg(x_1, x_5, x_4);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subsemiring_pointwiseMulAction___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_map___at_Subsemiring_pointwiseMulAction___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemiring_pointwiseMulAction___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_pointwiseMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subsemiring_pointwiseMulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subsemiring_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Subsemiring_Pointwise(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subsemiring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
