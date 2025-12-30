// Lean compiler output
// Module: Mathlib.Data.Nat.Factorization.Root
// Imports: Init Mathlib.Algebra.Order.Floor.Div Mathlib.Data.Nat.Factorization.Defs
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
LEAN_EXPORT lean_object* l_Nat_floorRoot___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ceilRoot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_floorRoot___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ceilRoot___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Finsupp_prod___at_Nat_factorizationEquiv___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ceilRoot___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_factorization(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_floorRoot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_floorRoot___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_nat_div(x_3, x_1);
x_5 = lean_nat_pow(x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_floorRoot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Nat_factorization(x_2);
x_7 = lean_alloc_closure((void*)(l_Nat_floorRoot___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Finsupp_prod___at_Nat_factorizationEquiv___elambda__1___spec__1(x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(0u);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Nat_floorRoot___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_floorRoot___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_ceilRoot___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_nat_add(x_3, x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = lean_nat_div(x_6, x_1);
lean_dec(x_6);
x_8 = lean_nat_pow(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_ceilRoot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Nat_factorization(x_2);
x_7 = lean_alloc_closure((void*)(l_Nat_ceilRoot___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Finsupp_prod___at_Nat_factorizationEquiv___elambda__1___spec__1(x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(0u);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Nat_ceilRoot___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_ceilRoot___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Floor_Div(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Factorization_Root(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Floor_Div(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
