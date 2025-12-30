// Lean compiler output
// Module: Mathlib.Data.Multiset.Sections
// Imports: Init Mathlib.Data.Multiset.Bind
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
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Sections(lean_object*);
static lean_object* l_Multiset_Sections___rarg___closed__2;
static lean_object* l_Multiset_Sections___rarg___closed__1;
lean_object* l_Multiset_cons___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Multiset_cons___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_map___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Multiset_Sections___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Multiset_bind___rarg(x_1, x_4);
return x_5;
}
}
static lean_object* _init_l_Multiset_Sections___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_Sections___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_Sections___rarg___lambda__2___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_Sections___rarg___closed__1;
x_3 = l_Multiset_Sections___rarg___closed__2;
x_4 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Sections(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_Sections___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_Sections___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_Sections___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Bind(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Multiset_Sections(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Bind(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_Sections___rarg___closed__1 = _init_l_Multiset_Sections___rarg___closed__1();
lean_mark_persistent(l_Multiset_Sections___rarg___closed__1);
l_Multiset_Sections___rarg___closed__2 = _init_l_Multiset_Sections___rarg___closed__2();
lean_mark_persistent(l_Multiset_Sections___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
