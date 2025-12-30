// Lean compiler output
// Module: Mathlib.Data.Tree.Traversable
// Imports: Init Mathlib.Data.Tree.Basic Mathlib.Control.Applicative Mathlib.Control.Traversable.Basic
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
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tree_map___rarg(lean_object*, lean_object*);
static lean_object* l_Tree_instTraversable___closed__5;
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Tree_instTraversable___closed__4;
static lean_object* l_Tree_instTraversable___closed__1;
static lean_object* l_Tree_instTraversable___closed__2;
lean_object* l_Tree_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_instTraversable;
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tree_instTraversable___closed__3;
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Tree_map___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Tree_map___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Tree_instTraversable___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Tree_traverse___rarg(x_2, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_Tree_instTraversable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tree_instTraversable___lambda__1), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Tree_instTraversable___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tree_instTraversable___lambda__2), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Tree_instTraversable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tree_instTraversable___closed__1;
x_2 = l_Tree_instTraversable___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tree_instTraversable___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tree_instTraversable___lambda__3), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Tree_instTraversable___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tree_instTraversable___closed__3;
x_2 = l_Tree_instTraversable___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tree_instTraversable() {
_start:
{
lean_object* x_1; 
x_1 = l_Tree_instTraversable___closed__5;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Tree_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Applicative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Tree_Traversable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Tree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Applicative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Tree_instTraversable___closed__1 = _init_l_Tree_instTraversable___closed__1();
lean_mark_persistent(l_Tree_instTraversable___closed__1);
l_Tree_instTraversable___closed__2 = _init_l_Tree_instTraversable___closed__2();
lean_mark_persistent(l_Tree_instTraversable___closed__2);
l_Tree_instTraversable___closed__3 = _init_l_Tree_instTraversable___closed__3();
lean_mark_persistent(l_Tree_instTraversable___closed__3);
l_Tree_instTraversable___closed__4 = _init_l_Tree_instTraversable___closed__4();
lean_mark_persistent(l_Tree_instTraversable___closed__4);
l_Tree_instTraversable___closed__5 = _init_l_Tree_instTraversable___closed__5();
lean_mark_persistent(l_Tree_instTraversable___closed__5);
l_Tree_instTraversable = _init_l_Tree_instTraversable();
lean_mark_persistent(l_Tree_instTraversable);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
