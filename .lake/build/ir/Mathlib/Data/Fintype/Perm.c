// Lean compiler output
// Module: Mathlib.Data.Fintype.Perm
// Imports: Init Mathlib.Algebra.BigOperators.Group.List.Defs Mathlib.Algebra.Group.End Mathlib.Algebra.Group.Nat.Defs Mathlib.Data.Fintype.EquivFin Mathlib.Data.Nat.Factorial.Basic
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
static lean_object* l_permsOfList___rarg___closed__1;
static lean_object* l_permsOfList___rarg___closed__3;
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Equiv_instFintype___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_equivFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fintypePerm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_equivCongr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_instFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_MulEquiv_instFintype___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fintypePerm(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
lean_object* l_Fintype_truncEquivFin___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_permsOfList___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_swap___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_permsOfList___spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_instFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_permsOfList___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Multiset_filterMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_permsOfList___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_permsOfFinset___rarg(lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_permsOfList(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_permsOfList___rarg___closed__2;
LEAN_EXPORT lean_object* l_permsOfFinset(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_permsOfList___spec__1(lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_instFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_equivFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Equiv_instFintype___spec__2(lean_object*, lean_object*);
uint8_t l_Fintype_decidableForallFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_permsOfList___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Equiv_swap___rarg(x_1, x_2, x_3);
x_11 = l_Equiv_trans___rarg(x_8, x_10);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_11);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_4;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Equiv_swap___rarg(x_1, x_2, x_3);
x_16 = l_Equiv_trans___rarg(x_13, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_5);
x_4 = x_14;
x_5 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_permsOfList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_permsOfList___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_permsOfList___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_array_to_list(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_box(0);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_List_mapTR_loop___at_permsOfList___spec__1___rarg(x_1, x_2, x_7, x_3, x_9);
x_11 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_5, x_10);
x_4 = x_8;
x_5 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_permsOfList___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_permsOfList___spec__2___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_permsOfList___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_permsOfList___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_permsOfList___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_permsOfList___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_permsOfList___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_permsOfList___rarg___closed__2;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_permsOfList___rarg(x_1, x_5);
x_7 = l_permsOfList___rarg___closed__3;
lean_inc(x_6);
x_8 = l_List_flatMapTR_go___at_permsOfList___spec__2___rarg(x_1, x_4, x_6, x_5, x_7);
x_9 = l_List_appendTR___rarg(x_6, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_permsOfList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_permsOfList___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Fintype_Perm_0__permsOfList_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_permsOfFinset___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_permsOfList___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_permsOfFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_permsOfFinset___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fintypePerm___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_permsOfList___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_fintypePerm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_fintypePerm___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Equiv_instFintype___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_permsOfList___rarg(x_1, x_2);
x_6 = l_Multiset_map___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Equiv_instFintype___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_Equiv_instFintype___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Fintype_ofBijective___at_Equiv_instFintype___spec__2___rarg(x_1, x_2, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_instFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_4, x_5);
x_7 = l_List_lengthTRAux___rarg(x_3, x_5);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Fintype_truncEquivFin___rarg(x_1, x_3);
x_11 = l_Fintype_truncEquivFin___rarg(x_2, x_4);
x_12 = l_Equiv_symm___rarg(x_11);
x_13 = l_Equiv_trans___rarg(x_10, x_12);
x_14 = l_permsOfList___rarg___closed__1;
x_15 = l_Equiv_equivCongr___rarg(x_14, x_13);
x_16 = l_Fintype_ofEquiv___at_Equiv_instFintype___spec__1___rarg(x_1, x_3, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_instFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_instFintype___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_equivFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_instFintype___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_equivFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_equivFintype___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_2, x_6);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_8);
x_9 = lean_apply_1(x_8, x_7);
lean_inc(x_8);
x_10 = lean_apply_1(x_8, x_2);
x_11 = lean_apply_1(x_8, x_6);
x_12 = lean_apply_2(x_4, x_10, x_11);
x_13 = lean_apply_2(x_5, x_9, x_12);
return x_13;
}
}
LEAN_EXPORT uint8_t l_MulEquiv_instFintype___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_alloc_closure((void*)(l_MulEquiv_instFintype___rarg___lambda__1), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
lean_closure_set(x_7, 4, x_4);
x_8 = l_Fintype_decidableForallFintype___rarg(x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_MulEquiv_instFintype___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_3);
lean_closure_set(x_6, 4, x_4);
x_7 = l_Fintype_decidableForallFintype___rarg(x_6, x_4);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_MulEquiv_instFintype___rarg___lambda__3), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_5);
x_8 = l_Equiv_instFintype___rarg(x_3, x_4, x_5, x_6);
x_9 = l_Multiset_filterMap___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_instFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_instFintype___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_instFintype___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_MulEquiv_instFintype___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_instFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_MulEquiv_instFintype___rarg___lambda__3), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_5);
x_8 = l_Equiv_instFintype___rarg(x_3, x_4, x_5, x_6);
x_9 = l_Multiset_filterMap___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_instFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_instFintype___rarg), 6, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_List_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_EquivFin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorial_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Perm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_List_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_EquivFin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_permsOfList___rarg___closed__1 = _init_l_permsOfList___rarg___closed__1();
lean_mark_persistent(l_permsOfList___rarg___closed__1);
l_permsOfList___rarg___closed__2 = _init_l_permsOfList___rarg___closed__2();
lean_mark_persistent(l_permsOfList___rarg___closed__2);
l_permsOfList___rarg___closed__3 = _init_l_permsOfList___rarg___closed__3();
lean_mark_persistent(l_permsOfList___rarg___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
