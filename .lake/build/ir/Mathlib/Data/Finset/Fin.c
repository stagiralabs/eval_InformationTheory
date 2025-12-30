// Lean compiler output
// Module: Mathlib.Data.Finset.Fin
// Imports: Init Mathlib.Data.Finset.Card
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
LEAN_EXPORT lean_object* l_Finset_attachFin___lambda__1(lean_object*, lean_object*);
static lean_object* l_Finset_attachFin___closed__1;
LEAN_EXPORT lean_object* l_Finset_attachFin___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_attachFin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_attachFin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_attachFin___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Finset_attachFin___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_attachFin___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_attachFin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_attachFin___closed__1;
x_5 = l_Multiset_pmap___rarg(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_attachFin___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_attachFin___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_attachFin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_attachFin(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Fin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_attachFin___closed__1 = _init_l_Finset_attachFin___closed__1();
lean_mark_persistent(l_Finset_attachFin___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
