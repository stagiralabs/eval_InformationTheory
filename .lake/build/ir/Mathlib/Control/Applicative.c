// Lean compiler output
// Module: Mathlib.Control.Applicative
// Imports: Init Mathlib.Algebra.Group.Defs Mathlib.Control.Functor Mathlib.Control.Basic
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
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul(lean_object*);
static lean_object* l_instApplicativeConstOfOneOfMul___rarg___closed__1;
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeAddConstOfZeroOfAdd(lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeAddConstOfZeroOfAdd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_Const_functor(lean_object*);
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_apply_1(x_5, x_6);
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
static lean_object* _init_l_instApplicativeConstOfOneOfMul___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Functor_Const_functor(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_instApplicativeConstOfOneOfMul___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_instApplicativeConstOfOneOfMul___rarg___lambda__2), 5, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_instApplicativeConstOfOneOfMul___rarg___closed__1;
lean_inc_n(x_4, 2);
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instApplicativeConstOfOneOfMul___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instApplicativeConstOfOneOfMul___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instApplicativeConstOfOneOfMul___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instApplicativeAddConstOfZeroOfAdd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_instApplicativeConstOfOneOfMul___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_instApplicativeConstOfOneOfMul___rarg___lambda__2), 5, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_instApplicativeConstOfOneOfMul___rarg___closed__1;
lean_inc_n(x_4, 2);
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instApplicativeAddConstOfZeroOfAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instApplicativeAddConstOfZeroOfAdd___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Applicative(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instApplicativeConstOfOneOfMul___rarg___closed__1 = _init_l_instApplicativeConstOfOneOfMul___rarg___closed__1();
lean_mark_persistent(l_instApplicativeConstOfOneOfMul___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
