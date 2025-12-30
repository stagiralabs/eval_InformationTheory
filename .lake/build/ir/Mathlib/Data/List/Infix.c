// Lean compiler output
// Module: Mathlib.Data.List.Infix
// Imports: Init Mathlib.Data.List.TakeDrop Mathlib.Data.List.Induction
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
LEAN_EXPORT uint8_t l_List_decidableInfix___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableInfix___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isPrefixOf___at_List_instDecidableIsPrefixOfDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableInfix(lean_object*);
LEAN_EXPORT uint8_t l_List_decidableInfix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = 1;
return x_4;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_List_isPrefixOf___at_List_instDecidableIsPrefixOfDecidableEq___spec__1___rarg(x_1, x_2, x_3);
if (x_8 == 0)
{
x_3 = x_7;
goto _start;
}
else
{
uint8_t x_10; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_10 = 1;
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_12);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_List_isPrefixOf___at_List_instDecidableIsPrefixOfDecidableEq___spec__1___rarg(x_1, x_2, x_13);
if (x_14 == 0)
{
x_3 = x_12;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_16 = 1;
return x_16;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableInfix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_decidableInfix___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_decidableInfix___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_decidableInfix___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_TakeDrop(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Induction(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Infix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_TakeDrop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Induction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
