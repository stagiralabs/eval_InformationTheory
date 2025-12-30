// Lean compiler output
// Module: Mathlib.NumberTheory.LegendreSymbol.AddCharacter
// Imports: Init Mathlib.NumberTheory.Cyclotomic.PrimitiveRoots Mathlib.FieldTheory.Finite.Trace Mathlib.Algebra.Group.AddChar Mathlib.Data.ZMod.Units Mathlib.Analysis.Complex.Polynomial.Basic
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
LEAN_EXPORT lean_object* l_AddChar_zmodChar(lean_object*);
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddChar_zmodChar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_ZMod_val(x_1, x_4);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_2(x_6, x_5, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddChar_zmodChar___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddChar_zmodChar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_AddChar_zmodChar___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddChar_zmodChar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddChar_zmodChar___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddChar_zmodChar___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddChar_zmodChar___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Cyclotomic_PrimitiveRoots(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Finite_Trace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_AddChar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_Polynomial_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_AddCharacter(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Cyclotomic_PrimitiveRoots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Finite_Trace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_AddChar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
