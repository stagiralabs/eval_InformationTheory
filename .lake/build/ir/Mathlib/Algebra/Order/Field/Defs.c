// Lean compiler output
// Module: Mathlib.Algebra.Order.Field.Defs
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Field.Defs
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
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toLinearOrderedSemifield(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toSemifield___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toSemifield___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 4);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toSemifield___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toSemifield___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 5);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 0);
lean_dec(x_16);
lean_ctor_set(x_1, 5, x_9);
lean_ctor_set(x_1, 3, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_4);
lean_ctor_set(x_17, 2, x_5);
lean_ctor_set(x_17, 3, x_8);
lean_ctor_set(x_17, 4, x_6);
lean_ctor_set(x_17, 5, x_9);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemifield_toSemifield(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemifield_toSemifield___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 7);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 4);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 5);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__3___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__2___rarg), 3, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___elambda__1___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_1, 7);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 6);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 5);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 0);
lean_dec(x_20);
lean_ctor_set(x_1, 7, x_11);
lean_ctor_set(x_1, 6, x_10);
lean_ctor_set(x_1, 3, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_21; 
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_21, 0, x_8);
lean_ctor_set(x_21, 1, x_4);
lean_ctor_set(x_21, 2, x_5);
lean_ctor_set(x_21, 3, x_9);
lean_ctor_set(x_21, 4, x_6);
lean_ctor_set(x_21, 5, x_7);
lean_ctor_set(x_21, 6, x_10);
lean_ctor_set(x_21, 7, x_11);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedField_toField___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_inc(x_2);
x_3 = l_LinearOrderedRing_toLinearOrderedSemiring___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 3);
lean_inc(x_7);
lean_dec(x_3);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_ctor_get(x_2, 3);
lean_dec(x_9);
x_10 = lean_ctor_get(x_2, 2);
lean_dec(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
lean_ctor_set(x_2, 3, x_7);
lean_ctor_set(x_2, 2, x_6);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, x_4);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 6);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_15);
lean_ctor_set(x_18, 4, x_16);
lean_ctor_set(x_18, 5, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_2, 4);
x_20 = lean_ctor_get(x_2, 5);
x_21 = lean_ctor_get(x_2, 6);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_2);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_5);
lean_ctor_set(x_22, 2, x_6);
lean_ctor_set(x_22, 3, x_7);
lean_ctor_set(x_22, 4, x_19);
lean_ctor_set(x_22, 5, x_20);
lean_ctor_set(x_22, 6, x_21);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 4);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 6);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_23);
lean_ctor_set(x_28, 2, x_24);
lean_ctor_set(x_28, 3, x_25);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set(x_28, 5, x_27);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedField_toLinearOrderedSemifield(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedField_toLinearOrderedSemifield___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Field_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
