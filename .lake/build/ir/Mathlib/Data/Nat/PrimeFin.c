// Lean compiler output
// Module: Mathlib.Data.Nat.PrimeFin
// Imports: Init Mathlib.Data.Countable.Defs Mathlib.Data.Nat.Factors Mathlib.Data.Nat.Prime.Infinite Mathlib.Data.Set.Finite.Lattice
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
LEAN_EXPORT lean_object* l_List_pwFilter___at_Nat_primeFactors___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_Nat_primeFactors___spec__1(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Nat_primeFactors___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Nat_primeFactors___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Nat_primeFactors___spec__2(lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Nat_primeFactors___spec__4(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1___boxed(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Nat_primeFactors(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Nat_primeFactors___boxed(lean_object*);
lean_object* l_Nat_primeFactorsList(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_nat_dec_eq(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Nat_primeFactors___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Nat_primeFactors___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_Nat_primeFactors___spec__6(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Nat_primeFactors___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Nat_primeFactors___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Nat_primeFactors___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Nat_primeFactors___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Nat_primeFactors___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Nat_primeFactors___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_Nat_primeFactors___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Nat_primeFactors___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_primeFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_primeFactorsList(x_1);
x_3 = l_List_pwFilter___at_Nat_primeFactors___spec__5(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Nat_primeFactors___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_primeFactors___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_primeFactors(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Countable_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Infinite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_PrimeFin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Countable_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Infinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
