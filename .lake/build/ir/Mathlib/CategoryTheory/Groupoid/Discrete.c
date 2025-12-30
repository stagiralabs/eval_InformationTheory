// Lean compiler output
// Module: Mathlib.CategoryTheory.Groupoid.Discrete
// Imports: Init Mathlib.CategoryTheory.Groupoid Mathlib.CategoryTheory.DiscreteCategory
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
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_instGroupoidDiscrete___closed__1;
static lean_object* l_CategoryTheory_instGroupoidDiscrete___closed__3;
static lean_object* l_CategoryTheory_instGroupoidDiscrete___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_discreteCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_CategoryTheory_instGroupoidDiscrete___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_discreteCategory(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_instGroupoidDiscrete___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_instGroupoidDiscrete___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_instGroupoidDiscrete___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CategoryTheory_instGroupoidDiscrete___closed__1;
x_2 = l_CategoryTheory_instGroupoidDiscrete___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_instGroupoidDiscrete___closed__3;
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instGroupoidDiscrete___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_instGroupoidDiscrete___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Groupoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_DiscreteCategory(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Groupoid_Discrete(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Groupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_DiscreteCategory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_instGroupoidDiscrete___closed__1 = _init_l_CategoryTheory_instGroupoidDiscrete___closed__1();
lean_mark_persistent(l_CategoryTheory_instGroupoidDiscrete___closed__1);
l_CategoryTheory_instGroupoidDiscrete___closed__2 = _init_l_CategoryTheory_instGroupoidDiscrete___closed__2();
lean_mark_persistent(l_CategoryTheory_instGroupoidDiscrete___closed__2);
l_CategoryTheory_instGroupoidDiscrete___closed__3 = _init_l_CategoryTheory_instGroupoidDiscrete___closed__3();
lean_mark_persistent(l_CategoryTheory_instGroupoidDiscrete___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
