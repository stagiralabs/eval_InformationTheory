// Lean compiler output
// Module: Mathlib.Data.List.Induction
// Imports: Init Mathlib.Data.List.Basic
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter(lean_object*, lean_object*);
lean_object* l_List_getLast___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseRecOn___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_reverseRecOn_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_reverseRecOn_match__1_splitter(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_reverseRecOn___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseRecOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseRecOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_reverse___rarg(x_6);
lean_inc(x_3);
lean_inc(x_7);
x_8 = l_List_reverseRecOn___rarg(x_7, x_2, x_3);
x_9 = lean_apply_3(x_3, x_7, x_5, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_reverseRecOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_reverseRecOn___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_reverseRecOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_reverseRecOn___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_reverseRecOn_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_apply_1(x_2, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_3, x_5, x_6, lean_box(0));
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_reverseRecOn_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Induction_0__List_reverseRecOn_match__1_splitter___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_5);
x_10 = lean_array_mk(x_5);
x_11 = lean_array_pop(x_10);
x_12 = lean_array_to_list(x_11);
x_13 = l_List_getLast___rarg(x_5, lean_box(0));
lean_inc(x_12);
lean_inc(x_3);
x_14 = l_List_bidirectionalRec___rarg(x_1, x_2, x_3, x_12);
x_15 = lean_apply_4(x_3, x_8, x_12, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_18);
x_19 = lean_array_mk(x_18);
x_20 = lean_array_pop(x_19);
x_21 = lean_array_to_list(x_20);
x_22 = l_List_getLast___rarg(x_18, lean_box(0));
lean_inc(x_21);
lean_inc(x_3);
x_23 = l_List_bidirectionalRec___rarg(x_1, x_2, x_3, x_21);
x_24 = lean_apply_4(x_3, x_8, x_21, x_22, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_bidirectionalRec___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_bidirectionalRec___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_List_Induction_0__List_bidirectionalRec_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_bidirectionalRec___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_bidirectionalRecOn___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_bidirectionalRecOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_bidirectionalRecOn___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Induction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
