// Lean compiler output
// Module: Mathlib.Util.GetAllModules
// Imports: Init Mathlib.Init Lean.Util.Path
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
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_getAllFiles___closed__7;
lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_System_FilePath_extension(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1___boxed(lean_object*);
lean_object* lean_module_name_of_file(lean_object*, lean_object*, lean_object*);
static lean_object* l_getAllFiles___closed__6;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1(size_t, size_t, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_getAllFiles___lambda__1___boxed(lean_object*, lean_object*);
static uint8_t l_getAllFiles___closed__8;
LEAN_EXPORT lean_object* l_getAllFiles(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase___at_getAllFiles___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_getAllFiles___closed__1;
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_getAllFiles___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_takeRightWhileAux___at_getAllFiles___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_takeRightWhileAux___at_getAllFiles___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_getAllFiles___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1(lean_object*);
static lean_object* l_getAllFiles___closed__3;
uint8_t l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_forEachModuleInDir___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_getAllModulesSorted___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*, lean_object*);
extern uint32_t l_System_FilePath_pathSeparator;
static lean_object* l_getAllFiles___closed__2;
LEAN_EXPORT lean_object* l_Array_erase___at_getAllFiles___spec__1(lean_object*, lean_object*);
static lean_object* l_getAllFiles___closed__5;
LEAN_EXPORT lean_object* l_Array_filterMapM___at_getAllFiles___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_getAllFiles___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_getAllFiles___closed__4;
LEAN_EXPORT lean_object* l_Array_filterMapM___at_getAllFiles___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_getAllFiles___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Parser_Error_toString___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_List_mapTR_loop___at_System_SearchPath_parse___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_getAllModulesSorted(uint8_t, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1;
lean_object* l_IO_Process_run(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_getAllFiles___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_string_dec_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_erase___at_getAllFiles___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_idxOfAux___at_getAllFiles___spec__2(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Array_eraseIdx___rarg(x_1, x_5, lean_box(0));
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_1, x_2);
x_8 = l_System_FilePath_pathExists(x_7, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; size_t x_12; size_t x_13; 
lean_dec(x_7);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = 1;
x_13 = lean_usize_add(x_2, x_12);
x_2 = x_13;
x_5 = x_11;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_array_push(x_4, x_7);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_2 = x_18;
x_4 = x_16;
x_5 = x_15;
goto _start;
}
}
else
{
lean_object* x_20; 
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_5);
return x_20;
}
}
}
static lean_object* _init_l_Array_filterMapM___at_getAllFiles___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at_getAllFiles___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_le(x_3, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_usize_of_nat(x_2);
x_13 = lean_usize_of_nat(x_3);
x_14 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_15 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4(x_1, x_12, x_13, x_14, x_4);
return x_15;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_2);
lean_inc(x_6);
x_7 = l_System_FilePath_extension(x_6);
x_8 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2;
x_9 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_forEachModuleInDir___spec__1(x_7, x_8);
lean_dec(x_7);
x_10 = 1;
x_11 = lean_usize_add(x_2, x_10);
if (x_9 == 0)
{
lean_dec(x_6);
x_2 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_array_push(x_4, x_6);
x_2 = x_11;
x_4 = x_13;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Substring_takeRightWhileAux___at_getAllFiles___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_5 = lean_string_utf8_prev(x_1, x_3);
x_6 = lean_string_utf8_get(x_1, x_5);
x_7 = 10;
x_8 = lean_uint32_dec_eq(x_6, x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_dec(x_3);
x_3 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_getAllFiles___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
static lean_object* _init_l_getAllFiles___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_getAllFiles___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_getAllFiles___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_getAllFiles___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("*.lean", 6, 6);
return x_1;
}
}
static lean_object* _init_l_getAllFiles___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ls-files", 8, 8);
return x_1;
}
}
static lean_object* _init_l_getAllFiles___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("git", 3, 3);
return x_1;
}
}
static lean_object* _init_l_getAllFiles___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_getAllFiles___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static uint8_t _init_l_getAllFiles___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_getAllFiles___closed__6;
x_2 = l_getAllFiles___closed__7;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_getAllFiles(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1;
lean_inc(x_2);
x_5 = l_System_FilePath_addExtension(x_2, x_4);
if (x_1 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_getAllFiles___closed__1;
x_18 = l_System_FilePath_walkDir(x_2, x_17, x_3);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_array_get_size(x_19);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_19);
x_24 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_6 = x_24;
x_7 = x_20;
goto block_16;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_21, x_21);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_19);
x_26 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_6 = x_26;
x_7 = x_20;
goto block_16;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_29 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_30 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5(x_19, x_27, x_28, x_29);
lean_dec(x_19);
x_6 = x_30;
x_7 = x_20;
goto block_16;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint32_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_35 = l_System_FilePath_pathSeparator;
x_36 = lean_string_push(x_2, x_35);
x_37 = l_getAllFiles___closed__3;
x_38 = lean_string_append(x_36, x_37);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_getAllFiles___closed__4;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_array_mk(x_42);
x_44 = lean_box(0);
x_45 = l_getAllFiles___closed__2;
x_46 = l_getAllFiles___closed__5;
x_47 = l_Array_filterMapM___at_getAllFiles___spec__3___closed__1;
x_48 = 0;
x_49 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_43);
lean_ctor_set(x_49, 3, x_44);
lean_ctor_set(x_49, 4, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*5, x_48);
x_50 = l_IO_Process_run(x_49, x_3);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_string_utf8_byte_size(x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Substring_takeRightWhileAux___at_getAllFiles___spec__6(x_51, x_54, x_53);
x_56 = lean_string_utf8_extract(x_51, x_54, x_55);
lean_dec(x_55);
lean_dec(x_51);
x_57 = l_getAllFiles___closed__8;
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = l_getAllFiles___closed__6;
x_59 = l_String_splitOnAux(x_56, x_58, x_54, x_54, x_54, x_39);
lean_dec(x_56);
x_60 = l_List_mapTR_loop___at_System_SearchPath_parse___spec__3(x_59, x_39);
x_61 = lean_array_mk(x_60);
x_6 = x_61;
x_7 = x_52;
goto block_16;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_56);
lean_ctor_set(x_62, 1, x_39);
x_63 = l_List_mapTR_loop___at_System_SearchPath_parse___spec__3(x_62, x_39);
x_64 = lean_array_mk(x_63);
x_6 = x_64;
x_7 = x_52;
goto block_16;
}
}
else
{
uint8_t x_65; 
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_50);
if (x_65 == 0)
{
return x_50;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_50, 0);
x_67 = lean_ctor_get(x_50, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_50);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
block_16:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Array_erase___at_getAllFiles___spec__1(x_6, x_5);
lean_dec(x_5);
x_9 = lean_array_get_size(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_filterMapM___at_getAllFiles___spec__3(x_8, x_10, x_9, x_7);
lean_dec(x_9);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_getAllFiles___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_idxOfAux___at_getAllFiles___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_erase___at_getAllFiles___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_erase___at_getAllFiles___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__4(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at_getAllFiles___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_filterMapM___at_getAllFiles___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Substring_takeRightWhileAux___at_getAllFiles___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Substring_takeRightWhileAux___at_getAllFiles___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_getAllFiles___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_getAllFiles___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_getAllFiles___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_getAllFiles(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_2, x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = lean_box(0);
x_11 = lean_module_name_of_file(x_7, x_10, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1;
x_16 = l_Lean_Name_toString(x_12, x_14, x_15);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_19 = lean_array_uset(x_9, x_2, x_16);
x_2 = x_18;
x_3 = x_19;
x_4 = x_13;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_9);
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
return x_11;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_getAllModulesSorted(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_getAllFiles(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_array_size(x_5);
x_8 = 0;
x_9 = l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1(x_7, x_8, x_5, x_6);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_12, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_15, x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_inc(x_14);
x_18 = l_Array_qsort_sort___at_Lean_Parser_Error_toString___spec__3(x_12, x_11, x_14, x_14, lean_box(0), lean_box(0));
lean_dec(x_14);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_object* x_19; 
x_19 = l_Array_qsort_sort___at_Lean_Parser_Error_toString___spec__3(x_12, x_11, x_15, x_14, lean_box(0), lean_box(0));
lean_dec(x_14);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_19);
return x_9;
}
}
else
{
lean_dec(x_14);
lean_dec(x_12);
return x_9;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_22 = lean_array_get_size(x_20);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_22, x_23);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_eq(x_22, x_25);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = lean_nat_dec_le(x_25, x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_inc(x_24);
x_28 = l_Array_qsort_sort___at_Lean_Parser_Error_toString___spec__3(x_22, x_20, x_24, x_24, lean_box(0), lean_box(0));
lean_dec(x_24);
lean_dec(x_22);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = l_Array_qsort_sort___at_Lean_Parser_Error_toString___spec__3(x_22, x_20, x_25, x_24, lean_box(0), lean_box(0));
lean_dec(x_24);
lean_dec(x_22);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_24);
lean_dec(x_22);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_9);
if (x_33 == 0)
{
return x_9;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_9, 0);
x_35 = lean_ctor_get(x_9, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_9);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_4);
if (x_37 == 0)
{
return x_4;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_getAllModulesSorted___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_getAllModulesSorted(x_4, x_2, x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Path(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Util_GetAllModules(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_filterMapM___at_getAllFiles___spec__3___closed__1 = _init_l_Array_filterMapM___at_getAllFiles___spec__3___closed__1();
lean_mark_persistent(l_Array_filterMapM___at_getAllFiles___spec__3___closed__1);
l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__1);
l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_getAllFiles___spec__5___closed__2);
l_getAllFiles___closed__1 = _init_l_getAllFiles___closed__1();
lean_mark_persistent(l_getAllFiles___closed__1);
l_getAllFiles___closed__2 = _init_l_getAllFiles___closed__2();
lean_mark_persistent(l_getAllFiles___closed__2);
l_getAllFiles___closed__3 = _init_l_getAllFiles___closed__3();
lean_mark_persistent(l_getAllFiles___closed__3);
l_getAllFiles___closed__4 = _init_l_getAllFiles___closed__4();
lean_mark_persistent(l_getAllFiles___closed__4);
l_getAllFiles___closed__5 = _init_l_getAllFiles___closed__5();
lean_mark_persistent(l_getAllFiles___closed__5);
l_getAllFiles___closed__6 = _init_l_getAllFiles___closed__6();
lean_mark_persistent(l_getAllFiles___closed__6);
l_getAllFiles___closed__7 = _init_l_getAllFiles___closed__7();
lean_mark_persistent(l_getAllFiles___closed__7);
l_getAllFiles___closed__8 = _init_l_getAllFiles___closed__8();
l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_getAllModulesSorted___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
