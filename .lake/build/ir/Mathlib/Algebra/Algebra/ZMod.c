// Lean compiler output
// Module: Mathlib.Algebra.Algebra.ZMod
// Imports: Init Mathlib.Algebra.Algebra.Defs Mathlib.Data.ZMod.Basic
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
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra_x27(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ZMod_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_12 = l_ZMod_val(x_11, x_3);
lean_dec(x_3);
lean_dec(x_11);
x_13 = lean_apply_1(x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 4);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_14, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = l_Ring_toNonAssocRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg(x_1, x_2, x_3);
x_9 = lean_apply_2(x_7, x_8, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_ZMod_algebra_x27___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_algebra_x27___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_cast___at_ZMod_algebra_x27___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_algebra_x27___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ZMod_algebra_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_12 = l_ZMod_val(x_11, x_3);
lean_dec(x_3);
lean_dec(x_11);
x_13 = lean_apply_1(x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 4);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_14, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_algebra___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = l_Ring_toNonAssocRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_ZMod_cast___at_ZMod_algebra___spec__1___rarg(x_1, x_2, x_3);
x_9 = lean_apply_2(x_7, x_8, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_ZMod_algebra___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_algebra___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_algebra___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_cast___at_ZMod_algebra___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_algebra___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_algebra___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Algebra_ZMod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
