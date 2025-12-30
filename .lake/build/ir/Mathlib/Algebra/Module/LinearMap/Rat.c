// Lean compiler output
// Module: Mathlib.Algebra.Module.LinearMap.Rat
// Imports: Init Mathlib.Algebra.Module.Rat Mathlib.Algebra.Module.LinearMap.Defs
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
static lean_object* l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_toRatLinearMap___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonoidHom_toRatLinearMap___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRatLinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_toRatLinearMap(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_LinearMap_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_LinearMap_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_LinearMap_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1___closed__1);
l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1 = _init_l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1();
lean_mark_persistent(l_RingHom_id___at_AddMonoidHom_toRatLinearMap___spec__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
