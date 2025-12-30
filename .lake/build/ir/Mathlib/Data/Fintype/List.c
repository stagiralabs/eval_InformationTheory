// Lean compiler output
// Module: Mathlib.Data.Fintype.List
// Imports: Init Mathlib.Data.Finset.Powerset Mathlib.Data.Fintype.Defs Mathlib.Data.List.Permutation
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
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_fintypeNodupList(lean_object*);
static lean_object* l_fintypeNodupList___rarg___closed__1;
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_fintypeNodupList___rarg___closed__2;
LEAN_EXPORT lean_object* l_Multiset_lists___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_lists(lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_permutations___rarg(lean_object*);
LEAN_EXPORT lean_object* l_fintypeNodupList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_lists___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_permutations___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_lists(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_lists___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_fintypeNodupList___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_permutations___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_fintypeNodupList___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_fintypeNodupList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Finset_powerset___rarg(x_1);
x_3 = l_fintypeNodupList___rarg___closed__1;
x_4 = l_Multiset_bind___rarg(x_2, x_3);
x_5 = l_fintypeNodupList___rarg___closed__2;
x_6 = l_Multiset_pmap___rarg(x_5, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_fintypeNodupList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fintypeNodupList___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Permutation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_List(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Permutation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_fintypeNodupList___rarg___closed__1 = _init_l_fintypeNodupList___rarg___closed__1();
lean_mark_persistent(l_fintypeNodupList___rarg___closed__1);
l_fintypeNodupList___rarg___closed__2 = _init_l_fintypeNodupList___rarg___closed__2();
lean_mark_persistent(l_fintypeNodupList___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
