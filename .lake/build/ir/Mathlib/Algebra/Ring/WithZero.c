// Lean compiler output
// Module: Mathlib.Algebra.Ring.WithZero
// Imports: Init Mathlib.Algebra.GroupWithZero.WithZero Mathlib.Algebra.Ring.Defs
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
LEAN_EXPORT lean_object* l_WithZero_instSemiring(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instDistrib(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WithZero_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_WithZero_mulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instDistrib___rarg(lean_object*);
lean_object* l_WithZero_addMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithZero_instDistrib___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithZero_mulZeroClass___rarg(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 1);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_WithZero_add___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
lean_ctor_set(x_3, 1, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_closure((void*)(l_WithZero_add___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_WithZero_instDistrib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithZero_instDistrib___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; 
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
lean_dec(x_3);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_12, x_3, x_11);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 3);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_apply_2(x_15, x_3, x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_3 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_2);
x_4 = l_WithZero_addMonoidWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_WithZero_mulZeroClass___rarg(x_6);
x_8 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_ctor_get(x_4, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_alloc_closure((void*)(l_WithZero_instSemiring___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_14);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_WithZero_instSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithZero_instSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithZero_instSemiring___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_WithZero_instSemiring___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_WithZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_WithZero(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_WithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
