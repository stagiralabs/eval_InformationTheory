// Lean compiler output
// Module: Mathlib.Data.Set.Finite.Range
// Imports: Init Mathlib.Data.Fintype.EquivFin Mathlib.Data.ULift
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
static lean_object* l_Set_fintypeRange___rarg___closed__2;
static lean_object* l_Set_fintypeRange___rarg___closed__1;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Set_fintypeRange___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Set_fintypeRange___spec__1(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Set_fintypeRange___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Set_fintypeRange___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_image___at_Set_fintypeRange___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Set_fintypeRange___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Set_fintypeRange___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Set_fintypeRange___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Set_fintypeRange___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Finset_image___at_Set_fintypeRange___spec__1___rarg(x_1, x_5, x_3);
x_7 = l_Set_fintypeRange___rarg___closed__2;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeRange(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeRange___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeRange___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_fintypeRange___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_EquivFin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ULift(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Finite_Range(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_EquivFin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_fintypeRange___rarg___closed__1 = _init_l_Set_fintypeRange___rarg___closed__1();
lean_mark_persistent(l_Set_fintypeRange___rarg___closed__1);
l_Set_fintypeRange___rarg___closed__2 = _init_l_Set_fintypeRange___rarg___closed__2();
lean_mark_persistent(l_Set_fintypeRange___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
