// Lean compiler output
// Module: Mathlib.Data.Nat.ChineseRemainder
// Imports: Init Mathlib.Algebra.BigOperators.Ring.List Mathlib.Data.Nat.ModEq Mathlib.Data.Nat.GCD.BigOperators
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
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfMultiset(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfMultiset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfList(lean_object*);
lean_object* l_Nat_chineseRemainder_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___at_Nat_chineseRemainderOfList___spec__1(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfFinset(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Nat_chineseRemainderOfList___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
x_9 = lean_nat_mul(x_8, x_4);
lean_dec(x_4);
lean_dec(x_8);
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
LEAN_EXPORT lean_object* l_List_foldrTR___at_Nat_chineseRemainderOfList___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_prod___at_Nat_chineseRemainderOfList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_List_foldrTR___at_Nat_chineseRemainderOfList___spec__2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Nat_chineseRemainderOfList___rarg(x_1, x_2, x_7, lean_box(0));
x_9 = lean_box(0);
lean_inc(x_2);
x_10 = l_List_mapTR_loop___rarg(x_2, x_7, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_List_foldrTR___at_Nat_chineseRemainderOfList___spec__2(x_11, x_10);
lean_inc(x_6);
x_13 = lean_apply_1(x_2, x_6);
x_14 = lean_apply_1(x_1, x_6);
x_15 = l_Nat_chineseRemainder_x27(x_12, x_13, x_14, x_8, lean_box(0));
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_chineseRemainderOfList___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Nat_chineseRemainderOfList___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_ChineseRemainder_0__Nat_chineseRemainderOfList_match__1_splitter(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfMultiset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_chineseRemainderOfList___rarg(x_1, x_2, x_3, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_chineseRemainderOfMultiset___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_chineseRemainderOfList___rarg(x_1, x_2, x_3, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_chineseRemainderOfFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_chineseRemainderOfFinset___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_List(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_ModEq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_GCD_BigOperators(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_ChineseRemainder(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_ModEq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_GCD_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
