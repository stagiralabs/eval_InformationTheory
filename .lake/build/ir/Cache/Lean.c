// Lean compiler output
// Module: Cache.Lean
// Imports: Init Lean.Util.Paths
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
LEAN_EXPORT lean_object* l_UInt64_asLTar(uint64_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UInt64_asLTar___boxed(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_SearchPath_findWithExtBase___closed__1;
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SearchPath_findWithExtBase___lambda__1(lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase___lambda__1___boxed(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent_go(lean_object*, lean_object*);
lean_object* l_System_FilePath_isDir(lean_object*, lean_object*);
uint32_t l_Nat_digitChar(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_System_FilePath_components(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toHexDigits(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_mkFilePath(lean_object*);
static lean_object* l_UInt64_asLTar___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents_go(lean_object*, lean_object*);
static lean_object* l_UInt64_asLTar___closed__2;
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toHexDigits___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toHexDigits(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; uint32_t x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; uint32_t x_20; lean_object* x_21; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = lean_unsigned_to_nat(8u);
x_9 = lean_nat_mul(x_7, x_8);
x_10 = lean_nat_shiftr(x_1, x_9);
lean_dec(x_9);
x_11 = lean_uint8_of_nat(x_10);
lean_dec(x_10);
x_12 = 4;
x_13 = lean_uint8_shift_right(x_11, x_12);
x_14 = lean_uint8_to_nat(x_13);
x_15 = l_Nat_digitChar(x_14);
lean_dec(x_14);
x_16 = lean_string_push(x_3, x_15);
x_17 = 15;
x_18 = lean_uint8_land(x_11, x_17);
x_19 = lean_uint8_to_nat(x_18);
x_20 = l_Nat_digitChar(x_19);
lean_dec(x_19);
x_21 = lean_string_push(x_16, x_20);
x_2 = x_7;
x_3 = x_21;
goto _start;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Nat_toHexDigits___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_toHexDigits(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_UInt64_asLTar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_UInt64_asLTar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".ltar", 5, 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_UInt64_asLTar(uint64_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_uint64_to_nat(x_1);
x_3 = lean_unsigned_to_nat(8u);
x_4 = l_UInt64_asLTar___closed__1;
x_5 = l_Nat_toHexDigits(x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_string_append(x_4, x_5);
lean_dec(x_5);
x_7 = l_UInt64_asLTar___closed__2;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_UInt64_asLTar___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = l_UInt64_asLTar(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Name_updatePrefix(x_3, x_1);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_Name_fromComponents_go(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_7);
x_9 = l_System_FilePath_join(x_7, x_2);
x_10 = l_System_FilePath_isDir(x_9, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_System_FilePath_addExtension(x_9, x_1);
x_15 = l_System_FilePath_pathExists(x_14, x_13);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_7);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_3 = x_8;
x_4 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_8);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_15, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_7);
lean_ctor_set(x_15, 0, x_22);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_7);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_8);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_10, 0);
lean_dec(x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_7);
lean_ctor_set(x_10, 0, x_28);
return x_10;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_dec(x_10);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_7);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_SearchPath_findWithExtBase___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_SearchPath_findWithExtBase___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_SearchPath_findWithExtBase___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_Name_getRoot(x_3);
x_6 = 0;
x_7 = l_Lean_SearchPath_findWithExtBase___closed__1;
x_8 = l_Lean_Name_toString(x_5, x_6, x_7);
x_9 = l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1(x_2, x_8, x_1, x_4);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_findM_x3f___at_Lean_SearchPath_findWithExtBase___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_SearchPath_findWithExtBase___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExtBase___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_SearchPath_findWithExtBase(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_string_dec_eq(x_4, x_6);
if (x_8 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
x_1 = x_5;
x_2 = x_7;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent_go___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_System_FilePath_withoutParent_go(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_withoutParent(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_System_FilePath_components(x_1);
x_4 = l_System_FilePath_components(x_2);
x_5 = l_System_FilePath_withoutParent_go(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_6 = l_System_mkFilePath(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Paths(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cache_Lean(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Paths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UInt64_asLTar___closed__1 = _init_l_UInt64_asLTar___closed__1();
lean_mark_persistent(l_UInt64_asLTar___closed__1);
l_UInt64_asLTar___closed__2 = _init_l_UInt64_asLTar___closed__2();
lean_mark_persistent(l_UInt64_asLTar___closed__2);
l_Lean_SearchPath_findWithExtBase___closed__1 = _init_l_Lean_SearchPath_findWithExtBase___closed__1();
lean_mark_persistent(l_Lean_SearchPath_findWithExtBase___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
