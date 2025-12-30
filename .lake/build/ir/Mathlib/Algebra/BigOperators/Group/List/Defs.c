// Lean compiler output
// Module: Mathlib.Algebra.BigOperators.Group.List.Defs
// Imports: Init Mathlib.Algebra.Group.Defs
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_List_alternatingProd(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_prod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_alternatingSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_alternatingProd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_alternatingSum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_prod___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_alternatingProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_alternatingSum(lean_object*);
LEAN_EXPORT lean_object* l_List_prod(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_9, x_5);
x_3 = x_8;
x_5 = x_10;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_9, x_5);
x_3 = x_8;
x_5 = x_10;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_prod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_mk(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_le(x_5, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = 0;
x_11 = l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg(x_1, x_4, x_9, x_10, x_2);
lean_dec(x_4);
return x_11;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_5);
if (x_13 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_prod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_prod___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_List_prod___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_prod(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_prod___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_List_prod___spec__2___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_List_prod___spec__3___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_alternatingSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_8);
lean_inc(x_2);
x_11 = lean_apply_2(x_2, x_7, x_10);
lean_inc(x_2);
x_12 = l_List_alternatingSum___rarg(x_1, x_2, x_3, x_9);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_List_alternatingSum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_alternatingSum___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_alternatingSum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_alternatingSum___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_alternatingProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_8);
lean_inc(x_2);
x_11 = lean_apply_2(x_2, x_7, x_10);
lean_inc(x_2);
x_12 = l_List_alternatingProd___rarg(x_1, x_2, x_3, x_9);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_List_alternatingProd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_alternatingProd___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_alternatingProd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_alternatingProd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_apply_3(x_4, x_8, x_9, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Algebra_BigOperators_Group_List_Defs_0__List_alternatingSum_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_BigOperators_Group_List_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
