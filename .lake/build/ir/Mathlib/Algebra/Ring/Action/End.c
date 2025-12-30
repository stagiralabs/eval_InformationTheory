// Lean compiler output
// Module: Mathlib.Algebra.Ring.Action.End
// Imports: Init Mathlib.Algebra.Ring.Action.Group Mathlib.Algebra.Ring.Aut
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
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingAut(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingAut___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction___boxed(lean_object*, lean_object*);
lean_object* l_MulSemiringAction_toRingEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingAut_applyMulSemiringAction___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingAut_applyMulSemiringAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingAut_applyMulSemiringAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingAut___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulSemiringAction_toRingEquiv___rarg___boxed), 5, 4);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_2);
lean_closure_set(x_4, 3, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulSemiringAction_toRingAut(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulSemiringAction_toRingAut___rarg), 3, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Group(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Aut(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Action_End(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Aut(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
