// Lean compiler output
// Module: Mathlib.CategoryTheory.IsomorphismClasses
// Imports: Init Mathlib.CategoryTheory.Category.Cat Mathlib.CategoryTheory.Groupoid Mathlib.CategoryTheory.Types
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
LEAN_EXPORT lean_object* l_CategoryTheory_isIsomorphicSetoid___boxed(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_isomorphismClasses___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_isIsomorphicSetoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_isomorphismClasses;
LEAN_EXPORT lean_object* l_CategoryTheory_isomorphismClasses___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_isomorphismClasses___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_isomorphismClasses___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_isIsomorphicSetoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_isIsomorphicSetoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_isIsomorphicSetoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_isomorphismClasses___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_CategoryTheory_isomorphismClasses___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_isomorphismClasses___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_isomorphismClasses___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_isomorphismClasses___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_CategoryTheory_isomorphismClasses() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_isomorphismClasses___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_isomorphismClasses___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_isomorphismClasses___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Category_Cat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Groupoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_IsomorphismClasses(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Category_Cat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Groupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_isomorphismClasses___closed__1 = _init_l_CategoryTheory_isomorphismClasses___closed__1();
lean_mark_persistent(l_CategoryTheory_isomorphismClasses___closed__1);
l_CategoryTheory_isomorphismClasses___closed__2 = _init_l_CategoryTheory_isomorphismClasses___closed__2();
lean_mark_persistent(l_CategoryTheory_isomorphismClasses___closed__2);
l_CategoryTheory_isomorphismClasses = _init_l_CategoryTheory_isomorphismClasses();
lean_mark_persistent(l_CategoryTheory_isomorphismClasses);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
