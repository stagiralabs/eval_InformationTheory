// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.List
// Imports: Init Mathlib.Algebra.Order.Group.Nat Mathlib.Data.List.Rotate Mathlib.GroupTheory.Perm.Support
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
static lean_object* l_List_formPerm___rarg___closed__1;
lean_object* l_List_zipWithTR_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_formPerm___spec__2(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_List_formPerm___rarg(lean_object*, lean_object*);
lean_object* l_List_tail___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3(lean_object*);
lean_object* l_Equiv_swap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_formPerm(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_formPerm___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___at_List_formPerm___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_List_prod___at_List_formPerm___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_prod___at_List_formPerm___spec__1(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Equiv_refl(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = l_Equiv_trans___rarg(x_4, x_8);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = l_Equiv_trans___rarg(x_4, x_8);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_formPerm___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_le(x_4, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = 0;
x_10 = l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg(x_3, x_8, x_9, x_1);
lean_dec(x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_4);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg(x_3, x_13, x_14, x_1);
lean_dec(x_3);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_formPerm___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_formPerm___spec__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_List_prod___at_List_formPerm___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_prod___at_List_formPerm___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_List_prod___at_List_formPerm___spec__1___rarg___closed__1;
x_3 = l_List_foldrTR___at_List_formPerm___spec__2___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_prod___at_List_formPerm___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_prod___at_List_formPerm___spec__1___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_List_formPerm___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_formPerm___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_alloc_closure((void*)(l_Equiv_swap___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_List_tail___rarg(x_2);
x_5 = l_List_formPerm___rarg___closed__1;
x_6 = l_List_zipWithTR_go___rarg(x_3, x_2, x_4, x_5);
x_7 = l_List_prod___at_List_formPerm___spec__1___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_formPerm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_formPerm___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__3___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_List_formPerm___spec__4___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Rotate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Support(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_List(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Rotate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_prod___at_List_formPerm___spec__1___rarg___closed__1 = _init_l_List_prod___at_List_formPerm___spec__1___rarg___closed__1();
lean_mark_persistent(l_List_prod___at_List_formPerm___spec__1___rarg___closed__1);
l_List_formPerm___rarg___closed__1 = _init_l_List_formPerm___rarg___closed__1();
lean_mark_persistent(l_List_formPerm___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
