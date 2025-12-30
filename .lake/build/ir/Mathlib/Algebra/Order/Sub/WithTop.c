// Lean compiler output
// Module: Mathlib.Algebra.Order.Sub.WithTop
// Imports: Init Mathlib.Algebra.Order.Sub.Defs Mathlib.Algebra.Order.Monoid.Unbundled.WithTop
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
LEAN_EXPORT lean_object* l_WithTop_instSub(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_sub(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instSub___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_sub___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_sub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_3, 0);
lean_dec(x_8);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
}
else
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_apply_2(x_1, x_10, x_12);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_apply_2(x_1, x_10, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WithTop_sub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_sub___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_instSub___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_sub___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_instSub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_instSub___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Sub_WithTop(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
