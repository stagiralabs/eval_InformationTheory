// Lean compiler output
// Module: Mathlib.Data.List.Sym
// Imports: Init Mathlib.Data.Nat.Choose.Basic Mathlib.Data.Sym.Sym2
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
LEAN_EXPORT lean_object* l_List_sym___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sym___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sym2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym2___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sym2(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym2___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sym(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_List_sym___rarg___closed__1;
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym2___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_8);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym2___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_sym2___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_sym2___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_List_sym2___spec__1___rarg(x_4, x_1, x_6);
x_8 = l_List_sym2___rarg(x_5);
x_9 = l_List_appendTR___rarg(x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_box(0);
x_14 = l_List_mapTR_loop___at_List_sym2___spec__1___rarg(x_10, x_12, x_13);
x_15 = l_List_sym2___rarg(x_11);
x_16 = l_List_appendTR___rarg(x_14, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_sym2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_sym2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_List_Sym_0__List_sym2_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
lean_ctor_set(x_3, 1, x_7);
lean_ctor_set(x_3, 0, x_2);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
x_3 = x_8;
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_2);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
x_3 = x_12;
x_4 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_sym___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_List_sym___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_sym___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_1, x_9);
lean_inc(x_8);
lean_inc(x_7);
x_11 = l_List_sym___rarg(x_10, x_2);
x_12 = lean_box(0);
x_13 = l_List_mapTR_loop___at_List_sym___spec__1___rarg(x_10, x_7, x_11, x_12);
x_14 = lean_nat_add(x_10, x_9);
lean_dec(x_10);
x_15 = l_List_sym___rarg(x_14, x_8);
lean_dec(x_14);
x_16 = l_List_appendTR___rarg(x_13, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_1, x_19);
lean_inc(x_18);
lean_inc(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
x_22 = l_List_sym___rarg(x_20, x_21);
x_23 = lean_box(0);
x_24 = l_List_mapTR_loop___at_List_sym___spec__1___rarg(x_20, x_17, x_22, x_23);
x_25 = lean_nat_add(x_20, x_19);
lean_dec(x_20);
x_26 = l_List_sym___rarg(x_25, x_18);
lean_dec(x_25);
x_27 = l_List_appendTR___rarg(x_24, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_2);
x_28 = l_List_sym___rarg___closed__1;
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_List_sym(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_sym___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_sym___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapTR_loop___at_List_sym___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_sym___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_sym___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_apply_2(x_4, x_1, lean_box(0));
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
lean_dec(x_1);
x_13 = lean_apply_3(x_5, x_12, x_9, x_10);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_14 = lean_apply_1(x_3, x_2);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Sym_0__List_sym_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Sym_0__List_sym_match__1_splitter___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sym_Sym2(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Sym(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sym_Sym2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_sym___rarg___closed__1 = _init_l_List_sym___rarg___closed__1();
lean_mark_persistent(l_List_sym___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
