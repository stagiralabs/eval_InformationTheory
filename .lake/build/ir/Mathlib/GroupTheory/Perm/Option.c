// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Option
// Imports: Init Mathlib.Data.Fintype.Option Mathlib.GroupTheory.Perm.Sign
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
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption(lean_object*);
lean_object* l_Equiv_optionCongr___rarg(lean_object*);
lean_object* l_Equiv_swap___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___rarg(lean_object*);
lean_object* l_Option_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__1(lean_object*);
lean_object* l_Equiv_removeNone___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Option_instDecidableEq___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Equiv_swap___elambda__1___rarg), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_box(0);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Equiv_swap___at_Equiv_Perm_decomposeOption___elambda__1___spec__1___rarg(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Equiv_optionCongr___rarg(x_6);
x_8 = l_Equiv_trans___rarg(x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_decomposeOption___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_apply_1(x_3, x_2);
x_5 = l_Equiv_removeNone___rarg(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_decomposeOption___elambda__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_decomposeOption___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_decomposeOption___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_decomposeOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_decomposeOption___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Option(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Sign(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Option(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Option(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Sign(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
