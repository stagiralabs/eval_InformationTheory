// Lean compiler output
// Module: Mathlib.Data.Fintype.Powerset
// Imports: Init Mathlib.Data.Finset.Powerset Mathlib.Data.Fintype.EquivFin
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
static lean_object* l_Set_fintype___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_fintype(lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintype(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_fintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_fintype___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_powerset___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_fintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_fintype___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Set_fintype___rarg___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_fintype___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Finset_powerset___rarg(x_1);
x_3 = l_Set_fintype___rarg___closed__1;
x_4 = l_Multiset_map___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_fintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintype___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_EquivFin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Powerset(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_EquivFin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_fintype___rarg___closed__1 = _init_l_Set_fintype___rarg___closed__1();
lean_mark_persistent(l_Set_fintype___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
