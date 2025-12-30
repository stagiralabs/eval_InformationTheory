// Lean compiler output
// Module: Mathlib.Data.Finset.Attach
// Imports: Init Mathlib.Data.Finset.Defs Mathlib.Data.Multiset.Nodup
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
static lean_object* l_Finset_attach___rarg___closed__1;
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_attach(lean_object*);
LEAN_EXPORT lean_object* l_Finset_attach___rarg(lean_object*);
static lean_object* _init_l_Finset_attach___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_attach___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_attach___rarg___closed__1;
x_3 = l_Multiset_pmap___rarg(x_2, x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_attach(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_attach___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Nodup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Attach(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Nodup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_attach___rarg___closed__1 = _init_l_Finset_attach___rarg___closed__1();
lean_mark_persistent(l_Finset_attach___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
