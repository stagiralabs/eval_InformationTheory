// Lean compiler output
// Module: Mathlib.Analysis.Calculus.Implicit
// Imports: Init Mathlib.Analysis.Calculus.InverseFunctionTheorem.FDeriv Mathlib.Analysis.Calculus.FDeriv.Add Mathlib.Analysis.Calculus.FDeriv.Prod Mathlib.Analysis.Normed.Module.Complemented
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
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_ImplicitFunctionData_prodFun___rarg), 2, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_ImplicitFunctionData_prodFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_ImplicitFunctionData_prodFun(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_15;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_InverseFunctionTheorem_FDeriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Add(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_Complemented(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_Implicit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_InverseFunctionTheorem_FDeriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Add(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_Complemented(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
