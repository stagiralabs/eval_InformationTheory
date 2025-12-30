// Lean compiler output
// Module: Mathlib.Dynamics.FixedPoints.Basic
// Imports: Init Mathlib.Algebra.Group.End Mathlib.Data.Set.Function
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
LEAN_EXPORT lean_object* l_Function_fixedPoints_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_IsFixedPt_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_IsFixedPt_decidable(lean_object*);
LEAN_EXPORT lean_object* l_Function_fixedPoints_decidable(lean_object*);
LEAN_EXPORT lean_object* l_Function_IsFixedPt_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_IsFixedPt_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_IsFixedPt_decidable___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_fixedPoints_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_IsFixedPt_decidable___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_fixedPoints_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_fixedPoints_decidable___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Function(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Dynamics_FixedPoints_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Function(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
