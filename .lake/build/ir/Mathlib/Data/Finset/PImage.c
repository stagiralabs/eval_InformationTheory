// Lean compiler output
// Module: Mathlib.Data.Finset.PImage
// Imports: Init Mathlib.Data.Finset.Option Mathlib.Data.PFun Mathlib.Data.Part
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
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_toFinset(lean_object*);
lean_object* l_Option_toFinset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Part_toFinset___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_pimage___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Part_toOption___rarg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_pimage___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_pimage___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_pimage___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_toFinset___rarg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Finset_pimage(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_toFinset___rarg(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Part_toOption___rarg(x_1, x_2);
x_4 = l_Option_toFinset___rarg(x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_toFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_toFinset___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Part_toFinset___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Part_toFinset___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_pimage___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_bind___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_pimage___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Finset_pimage___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_pimage___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Part_toFinset___rarg(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_pimage___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Finset_pimage___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_biUnion___at_Finset_pimage___spec__1___rarg(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_pimage(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_pimage___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Option(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PFun(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Part(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_PImage(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Option(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Part(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
