// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Units.Lemmas
// Imports: Init Mathlib.Algebra.Group.Units.Hom Mathlib.Algebra.GroupWithZero.Action.Units Mathlib.Algebra.GroupWithZero.Commute Mathlib.Algebra.GroupWithZero.Hom
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
LEAN_EXPORT lean_object* l_invMonoidWithZeroHom___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invMonoidHom___at_invMonoidWithZeroHom___spec__1___rarg(lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invMonoidWithZeroHom(lean_object*);
LEAN_EXPORT lean_object* l_invMonoidHom___at_invMonoidWithZeroHom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invMonoidHom___at_invMonoidWithZeroHom___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_1);
x_3 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invMonoidHom___at_invMonoidWithZeroHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invMonoidHom___at_invMonoidWithZeroHom___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invMonoidWithZeroHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_invMonoidHom___at_invMonoidWithZeroHom___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invMonoidWithZeroHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invMonoidWithZeroHom___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Action_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Commute(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Hom(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Action_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Commute(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
