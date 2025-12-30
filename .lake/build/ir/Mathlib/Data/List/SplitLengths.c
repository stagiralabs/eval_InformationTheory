// Lean compiler output
// Module: Mathlib.Data.List.SplitLengths
// Imports: Init Mathlib.Algebra.Group.Nat.Defs Mathlib.Order.MinMax
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
lean_object* l_List_splitAt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_SplitLengths_0__List_splitLengths_match__2_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitLengths___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_SplitLengths_0__List_splitLengths_match__2_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitLengths(lean_object*);
LEAN_EXPORT lean_object* l_List_splitLengths___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_List_splitAt___rarg(x_5, x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_List_splitLengths___rarg(x_6, x_9);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_List_splitAt___rarg(x_11, x_2);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_List_splitLengths___rarg(x_12, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_splitLengths(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_splitLengths___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_SplitLengths_0__List_splitLengths_match__2_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
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
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_SplitLengths_0__List_splitLengths_match__2_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_SplitLengths_0__List_splitLengths_match__2_splitter___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_MinMax(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_SplitLengths(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_MinMax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
