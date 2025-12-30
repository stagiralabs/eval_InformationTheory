// Lean compiler output
// Module: Mathlib.RingTheory.ClassGroup
// Imports: Init Mathlib.RingTheory.DedekindDomain.Ideal
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
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_span___at_FractionalIdeal_definition____x40_Mathlib_RingTheory_FractionalIdeal_Operations___hyg_9813____spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46_;
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg___boxed(lean_object*);
static lean_object* l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1;
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_toPrincipalIdeal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toPrincipalIdeal___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1(lean_object*);
lean_object* l_FractionalIdeal_commSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Submodule_span___at_FractionalIdeal_definition____x40_Mathlib_RingTheory_FractionalIdeal_Operations___hyg_9813____spec__1___rarg(x_1, x_2, lean_box(0));
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_6);
x_7 = l_FractionalIdeal_commSemiring___rarg(x_1, x_5, lean_box(0), x_6, x_3);
x_8 = l_Semiring_toMonoidWithZero___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_nonZeroDivisors___at_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46_), 2, 0);
return x_1;
}
}
static lean_object* _init_l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46_() {
_start:
{
lean_object* x_1; 
x_1 = l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_toPrincipalIdeal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_definition____x40_Mathlib_RingTheory_ClassGroup___hyg_46____rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_toPrincipalIdeal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_toPrincipalIdeal___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Ideal(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_ClassGroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1 = _init_l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1();
lean_mark_persistent(l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46____closed__1);
l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46_ = _init_l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46_();
lean_mark_persistent(l_wrapped____x40_Mathlib_RingTheory_ClassGroup___hyg_46_);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
