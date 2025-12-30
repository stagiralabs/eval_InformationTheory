// Lean compiler output
// Module: Mathlib.Data.Nat.PSub
// Imports: Init Mathlib.Algebra.Group.Basic Mathlib.Algebra.Group.Nat.Defs Mathlib.Data.Nat.Basic
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_ppred___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_psub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_psub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_psub_x27(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ppred(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_psub_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ppred(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Nat_ppred___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_ppred(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_psub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
x_7 = l_Nat_psub(x_1, x_6);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Nat_ppred(x_9);
lean_dec(x_9);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Nat_psub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_psub(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_PSub_0__Nat_ppred_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_psub_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_le(x_2, x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_nat_sub(x_1, x_2);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Nat_psub_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_psub_x27(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_PSub(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
