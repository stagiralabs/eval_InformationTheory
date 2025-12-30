// Lean compiler output
// Module: Mathlib.Data.List.Sublists
// Imports: Init Mathlib.Data.Nat.Choose.Basic Mathlib.Data.List.FinRange Mathlib.Data.List.Perm.Basic Mathlib.Data.List.Lex Mathlib.Data.List.Induction
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsLenAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublistsAux___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublists_x27Aux___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_sublistsLen___rarg___closed__1;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublists_x27Aux(lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsLen(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsLenAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublists_x27Aux___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsLenAux___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublists_x27Aux___spec__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsLen___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sublistsAux(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublistsAux___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublists_x27Aux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_List_appendTR___rarg(x_2, x_8);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_List_appendTR___rarg(x_2, x_15);
x_2 = x_16;
x_3 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublists_x27Aux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_sublists_x27Aux___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_sublists_x27Aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___at_List_sublists_x27Aux___spec__1___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_sublists_x27Aux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_sublists_x27Aux___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublistsAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_inc(x_1);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_List_appendTR___rarg(x_2, x_9);
x_2 = x_10;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_List_appendTR___rarg(x_2, x_17);
x_2 = x_18;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_List_sublistsAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_List_sublistsAux___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_sublistsAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldl___at_List_sublistsAux___spec__1___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_sublistsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_sublistsAux___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_sublistsLenAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_sublistsLenAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_1, x_9);
lean_dec(x_1);
x_11 = lean_nat_add(x_10, x_9);
x_12 = lean_alloc_closure((void*)(l_List_sublistsLenAux___rarg___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_7);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_8);
x_14 = l_List_sublistsLenAux___rarg(x_10, x_8, x_13, x_4);
x_1 = x_11;
x_2 = x_8;
x_4 = x_14;
goto _start;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_3, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_List_sublistsLenAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_sublistsLenAux___rarg), 4, 0);
return x_3;
}
}
static lean_object* _init_l_List_sublistsLen___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_sublistsLen___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_List_sublistsLen___rarg___closed__1;
x_5 = l_List_sublistsLenAux___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_sublistsLen(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_sublistsLen___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_1, x_10);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_7);
x_12 = lean_apply_3(x_6, x_11, x_3, x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_5(x_7, x_11, x_13, x_14, x_3, x_4);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
x_16 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Data_List_Sublists_0__List_sublistsLenAux_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_FinRange(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Perm_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Induction(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Sublists(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_FinRange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Perm_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Induction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_sublistsLen___rarg___closed__1 = _init_l_List_sublistsLen___rarg___closed__1();
lean_mark_persistent(l_List_sublistsLen___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
