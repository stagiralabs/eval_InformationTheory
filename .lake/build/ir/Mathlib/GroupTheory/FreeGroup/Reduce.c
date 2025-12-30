// Lean compiler output
// Module: Mathlib.GroupTheory.FreeGroup.Reduce
// Imports: Init Mathlib.Data.Finset.Dedup Mathlib.Data.Fintype.Defs Mathlib.Data.List.Sublists Mathlib.GroupTheory.FreeGroup.Basic
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
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FreeGroup_Red_decidableRel___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1(lean_object*);
lean_object* l_List_sublistsFast___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_toWord___rarg(lean_object*, lean_object*);
lean_object* l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_Red_enum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_toWord(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_norm(lean_object*);
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_toWord(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_norm(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_norm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_Red_enum(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_instFintypeSubtypeListProdBoolRed(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce(lean_object*);
lean_object* l_instDecidableEqBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_norm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_Red_decidableRel(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_toWord___rarg(lean_object*, lean_object*);
static lean_object* l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FreeGroup_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FreeAddGroup_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1(lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_instDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_Red_decidableRel___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1(lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_instDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_apply_2(x_2, x_9, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_3);
lean_ctor_set(x_18, 1, x_5);
return x_18;
}
else
{
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
else
{
lean_object* x_21; 
lean_dec(x_8);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_5);
return x_21;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_closure((void*)(l_FreeGroup_reduce___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_reduce___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_FreeGroup_reduce___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_closure((void*)(l_FreeGroup_reduce___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddGroup_reduce___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_toWord___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeGroup_reduce___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_toWord(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_toWord___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_toWord___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeAddGroup_reduce___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_toWord(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddGroup_toWord___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_FreeGroup_reduce___rarg(x_4, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_reduce_churchRosser___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_reduce_churchRosser___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_FreeGroup_reduce_churchRosser___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_FreeAddGroup_reduce___rarg(x_4, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddGroup_reduce_churchRosser___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_reduce_churchRosser___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_FreeAddGroup_reduce_churchRosser___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqBool___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_1);
x_12 = l_instDecidableEqProd___rarg(x_1, x_11, x_7, x_9);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_14 = 0;
return x_14;
}
else
{
x_2 = x_8;
x_3 = x_10;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_5 = l_FreeGroup_reduce___rarg(x_1, x_3);
lean_inc(x_1);
x_6 = l_FreeGroup_reduce___rarg(x_1, x_4);
x_7 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FreeGroup_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_instDecidableEq___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Function_Injective_decidableEq___at_FreeGroup_instDecidableEq___spec__2___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FreeGroup_instDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_1);
x_12 = l_instDecidableEqProd___rarg(x_1, x_11, x_7, x_9);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_14 = 0;
return x_14;
}
else
{
x_2 = x_8;
x_3 = x_10;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_5 = l_FreeAddGroup_reduce___rarg(x_1, x_3);
lean_inc(x_1);
x_6 = l_FreeAddGroup_reduce___rarg(x_1, x_4);
x_7 = l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FreeAddGroup_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddGroup_instDecidableEq___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_hasDecEq___at_FreeAddGroup_instDecidableEq___spec__1___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Function_Injective_decidableEq___at_FreeAddGroup_instDecidableEq___spec__2___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FreeAddGroup_instDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_FreeGroup_Red_decidableRel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_box(0);
x_13 = lean_unbox(x_11);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
x_14 = 1;
x_15 = lean_box(x_14);
lean_ctor_set(x_6, 1, x_15);
lean_ctor_set(x_2, 1, x_12);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_17; lean_object* x_18; 
x_17 = 0;
x_18 = lean_box(x_17);
lean_ctor_set(x_6, 1, x_18);
lean_ctor_set(x_2, 1, x_12);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_6, 0);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_6);
x_22 = lean_box(0);
x_23 = lean_unbox(x_21);
lean_dec(x_21);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_2, 1, x_22);
lean_ctor_set(x_2, 0, x_26);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_2, 1, x_22);
lean_ctor_set(x_2, 0, x_30);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_2, 1);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_6, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_6, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_35 = x_6;
} else {
 lean_dec_ref(x_6);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
x_37 = lean_unbox(x_34);
lean_dec(x_34);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = 1;
x_39 = lean_box(x_38);
if (lean_is_scalar(x_35)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_35;
}
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
x_2 = x_32;
x_3 = x_41;
goto _start;
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = 0;
x_44 = lean_box(x_43);
if (lean_is_scalar(x_35)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_35;
}
lean_ctor_set(x_45, 0, x_33);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_36);
x_2 = x_32;
x_3 = x_46;
goto _start;
}
}
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_3, 0);
lean_inc(x_48);
x_49 = !lean_is_exclusive(x_2);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_2, 1);
x_51 = lean_ctor_get(x_2, 0);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_6);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_3);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_6, 0);
x_55 = lean_ctor_get(x_6, 1);
x_56 = lean_ctor_get(x_3, 1);
x_57 = lean_ctor_get(x_3, 0);
lean_dec(x_57);
x_58 = !lean_is_exclusive(x_48);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_48, 0);
x_60 = lean_ctor_get(x_48, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_ctor_set(x_48, 1, x_55);
lean_ctor_set(x_48, 0, x_54);
lean_ctor_set(x_6, 1, x_60);
lean_ctor_set(x_6, 0, x_59);
x_61 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_6);
lean_inc(x_1);
x_62 = l_instDecidableEqProd___rarg(x_1, x_61, x_48, x_6);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
uint8_t x_64; 
lean_ctor_set(x_3, 0, x_6);
x_64 = lean_unbox(x_55);
lean_dec(x_55);
if (x_64 == 0)
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_65 = 1;
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_54);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_67);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; 
x_69 = 0;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_54);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_71);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_dec(x_6);
lean_free_object(x_3);
lean_dec(x_55);
lean_dec(x_54);
lean_free_object(x_2);
x_2 = x_50;
x_3 = x_56;
goto _start;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_74 = lean_ctor_get(x_48, 0);
x_75 = lean_ctor_get(x_48, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_48);
lean_inc(x_55);
lean_inc(x_54);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_54);
lean_ctor_set(x_76, 1, x_55);
lean_ctor_set(x_6, 1, x_75);
lean_ctor_set(x_6, 0, x_74);
x_77 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_6);
lean_inc(x_1);
x_78 = l_instDecidableEqProd___rarg(x_1, x_77, x_76, x_6);
x_79 = lean_unbox(x_78);
lean_dec(x_78);
if (x_79 == 0)
{
uint8_t x_80; 
lean_ctor_set(x_3, 0, x_6);
x_80 = lean_unbox(x_55);
lean_dec(x_55);
if (x_80 == 0)
{
uint8_t x_81; lean_object* x_82; lean_object* x_83; 
x_81 = 1;
x_82 = lean_box(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_54);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_83);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_85; lean_object* x_86; lean_object* x_87; 
x_85 = 0;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_54);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_87);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_dec(x_6);
lean_free_object(x_3);
lean_dec(x_55);
lean_dec(x_54);
lean_free_object(x_2);
x_2 = x_50;
x_3 = x_56;
goto _start;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_90 = lean_ctor_get(x_6, 0);
x_91 = lean_ctor_get(x_6, 1);
x_92 = lean_ctor_get(x_3, 1);
lean_inc(x_92);
lean_dec(x_3);
x_93 = lean_ctor_get(x_48, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_48, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_95 = x_48;
} else {
 lean_dec_ref(x_48);
 x_95 = lean_box(0);
}
lean_inc(x_91);
lean_inc(x_90);
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_91);
lean_ctor_set(x_6, 1, x_94);
lean_ctor_set(x_6, 0, x_93);
x_97 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_6);
lean_inc(x_1);
x_98 = l_instDecidableEqProd___rarg(x_1, x_97, x_96, x_6);
x_99 = lean_unbox(x_98);
lean_dec(x_98);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_6);
lean_ctor_set(x_100, 1, x_92);
x_101 = lean_unbox(x_91);
lean_dec(x_91);
if (x_101 == 0)
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; 
x_102 = 1;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_90);
lean_ctor_set(x_104, 1, x_103);
lean_ctor_set(x_2, 1, x_100);
lean_ctor_set(x_2, 0, x_104);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_106; lean_object* x_107; lean_object* x_108; 
x_106 = 0;
x_107 = lean_box(x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_90);
lean_ctor_set(x_108, 1, x_107);
lean_ctor_set(x_2, 1, x_100);
lean_ctor_set(x_2, 0, x_108);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_dec(x_6);
lean_dec(x_91);
lean_dec(x_90);
lean_free_object(x_2);
x_2 = x_50;
x_3 = x_92;
goto _start;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_111 = lean_ctor_get(x_6, 0);
x_112 = lean_ctor_get(x_6, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_6);
x_113 = lean_ctor_get(x_3, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_114 = x_3;
} else {
 lean_dec_ref(x_3);
 x_114 = lean_box(0);
}
x_115 = lean_ctor_get(x_48, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_48, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_117 = x_48;
} else {
 lean_dec_ref(x_48);
 x_117 = lean_box(0);
}
lean_inc(x_112);
lean_inc(x_111);
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_111);
lean_ctor_set(x_118, 1, x_112);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_115);
lean_ctor_set(x_119, 1, x_116);
x_120 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_119);
lean_inc(x_1);
x_121 = l_instDecidableEqProd___rarg(x_1, x_120, x_118, x_119);
x_122 = lean_unbox(x_121);
lean_dec(x_121);
if (x_122 == 0)
{
lean_object* x_123; uint8_t x_124; 
if (lean_is_scalar(x_114)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_114;
}
lean_ctor_set(x_123, 0, x_119);
lean_ctor_set(x_123, 1, x_113);
x_124 = lean_unbox(x_112);
lean_dec(x_112);
if (x_124 == 0)
{
uint8_t x_125; lean_object* x_126; lean_object* x_127; 
x_125 = 1;
x_126 = lean_box(x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_111);
lean_ctor_set(x_127, 1, x_126);
lean_ctor_set(x_2, 1, x_123);
lean_ctor_set(x_2, 0, x_127);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_129; lean_object* x_130; lean_object* x_131; 
x_129 = 0;
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_111);
lean_ctor_set(x_131, 1, x_130);
lean_ctor_set(x_2, 1, x_123);
lean_ctor_set(x_2, 0, x_131);
{
lean_object* _tmp_1 = x_50;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_dec(x_119);
lean_dec(x_114);
lean_dec(x_112);
lean_dec(x_111);
lean_free_object(x_2);
x_2 = x_50;
x_3 = x_113;
goto _start;
}
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_134 = lean_ctor_get(x_2, 1);
lean_inc(x_134);
lean_dec(x_2);
x_135 = lean_ctor_get(x_6, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_6, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_137 = x_6;
} else {
 lean_dec_ref(x_6);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_3, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_139 = x_3;
} else {
 lean_dec_ref(x_3);
 x_139 = lean_box(0);
}
x_140 = lean_ctor_get(x_48, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_48, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_142 = x_48;
} else {
 lean_dec_ref(x_48);
 x_142 = lean_box(0);
}
lean_inc(x_136);
lean_inc(x_135);
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_135);
lean_ctor_set(x_143, 1, x_136);
if (lean_is_scalar(x_137)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_137;
}
lean_ctor_set(x_144, 0, x_140);
lean_ctor_set(x_144, 1, x_141);
x_145 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_144);
lean_inc(x_1);
x_146 = l_instDecidableEqProd___rarg(x_1, x_145, x_143, x_144);
x_147 = lean_unbox(x_146);
lean_dec(x_146);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
if (lean_is_scalar(x_139)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_139;
}
lean_ctor_set(x_148, 0, x_144);
lean_ctor_set(x_148, 1, x_138);
x_149 = lean_unbox(x_136);
lean_dec(x_136);
if (x_149 == 0)
{
uint8_t x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = 1;
x_151 = lean_box(x_150);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_135);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_148);
x_2 = x_134;
x_3 = x_153;
goto _start;
}
else
{
uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = 0;
x_156 = lean_box(x_155);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_135);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_148);
x_2 = x_134;
x_3 = x_158;
goto _start;
}
}
else
{
lean_dec(x_144);
lean_dec(x_139);
lean_dec(x_136);
lean_dec(x_135);
x_2 = x_134;
x_3 = x_138;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_FreeGroup_Red_decidableRel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_Red_decidableRel___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_Red_decidableRel___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FreeGroup_Red_decidableRel___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_FreeGroup_Red_decidableRel___rarg(x_1, x_2, x_7);
if (x_9 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_FreeGroup_Red_decidableRel___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_Red_enum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = l_List_sublistsFast___rarg(x_2);
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_FreeGroup_Red_enum___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_Red_enum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_Red_enum___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1;
lean_inc(x_1);
x_12 = l_instDecidableEqProd___rarg(x_1, x_11, x_7, x_9);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_14 = 0;
return x_14;
}
else
{
x_2 = x_8;
x_3 = x_10;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_3 = l_FreeGroup_Red_enum___rarg(x_1, x_2);
x_4 = l_List_toFinset___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__2___rarg(x_1, x_3);
x_5 = l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1;
x_6 = l_Multiset_pmap___rarg(x_5, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_instFintypeSubtypeListProdBoolRed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_hasDecEq___at_FreeGroup_instFintypeSubtypeListProdBoolRed___spec__1___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_norm___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_FreeGroup_reduce___rarg(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_norm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeGroup_norm___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_norm___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_FreeAddGroup_reduce___rarg(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeAddGroup_norm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddGroup_norm___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Dedup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Sublists(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_FreeGroup_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_FreeGroup_Reduce(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Dedup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Sublists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_FreeGroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1 = _init_l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1();
lean_mark_persistent(l_List_hasDecEq___at_FreeGroup_instDecidableEq___spec__1___rarg___closed__1);
l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1 = _init_l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1();
lean_mark_persistent(l_FreeGroup_instFintypeSubtypeListProdBoolRed___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
