// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.Equidecomp
// Imports: Init Mathlib.Algebra.Group.Action.Basic Mathlib.Algebra.Group.Pointwise.Finset.Basic Mathlib.Logic.Equiv.PartialEquiv
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
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_restr(lean_object*, lean_object*, lean_object*);
static lean_object* l_Equidecomp_refl___closed__1;
LEAN_EXPORT lean_object* l_Equidecomp_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_refl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall(lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_restr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_restr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PartialEquiv_IsImage_restr___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equidecomp_instCoeFunForall___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_instCoeFunForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equidecomp_instCoeFunForall(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_restr___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PartialEquiv_IsImage_restr___rarg(x_1, lean_box(0), lean_box(0), lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_restr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equidecomp_restr___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_restr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equidecomp_restr(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Equidecomp_refl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_PartialEquiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_refl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equidecomp_refl___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equidecomp_refl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equidecomp_refl(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_PartialEquiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_Equidecomp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_PartialEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equidecomp_refl___closed__1 = _init_l_Equidecomp_refl___closed__1();
lean_mark_persistent(l_Equidecomp_refl___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
