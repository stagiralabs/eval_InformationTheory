// Lean compiler output
// Module: Mathlib.Data.Finset.NAry
// Imports: Init Mathlib.Data.Finset.Lattice.Prod Mathlib.Data.Finite.Prod
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
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_image_u2082___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_image_u2082___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_image_u2082___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_image_u2082___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_image_u2082___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_product___rarg(x_3, x_4);
x_7 = l_Finset_image___at_Finset_image_u2082___spec__1___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_image_u2082___rarg), 4, 0);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_NAry(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
