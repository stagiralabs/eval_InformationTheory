// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Bicones
// Imports: Init Mathlib.CategoryTheory.Limits.Cones Mathlib.CategoryTheory.FinCategory.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32_(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeSmallCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instDecidableEqBicone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategory___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeSmallCategory___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBicone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instDecidableEqBicone___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
case 1:
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
x_9 = lean_box(x_8);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = 0;
x_11 = lean_box(x_10);
return x_11;
}
}
default: 
{
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_apply_2(x_1, x_12, x_13);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = 0;
x_16 = lean_box(x_15);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32____rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instDecidableEqBicone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_CategoryTheory_Limits_Bicones_0__CategoryTheory_decEqBicone____x40_Mathlib_CategoryTheory_Limits_Bicones___hyg_32____rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instDecidableEqBicone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_instDecidableEqBicone___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBicone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_instInhabitedBiconeHomLeft___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedBiconeHomLeft___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_instInhabitedBiconeHomLeft___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(1);
return x_4;
}
default: 
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_6, x_5);
lean_inc(x_5);
x_8 = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 2:
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
case 3:
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
case 4:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_5, 2);
lean_inc(x_19);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_6, 1);
x_22 = lean_ctor_get(x_6, 2);
x_23 = lean_ctor_get(x_6, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 2);
lean_inc(x_24);
lean_dec(x_1);
lean_inc(x_21);
lean_inc(x_17);
x_25 = lean_apply_5(x_24, x_17, x_18, x_21, x_19, x_22);
lean_ctor_set(x_6, 2, x_25);
lean_ctor_set(x_6, 0, x_17);
return x_6;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_6, 1);
x_27 = lean_ctor_get(x_6, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_6);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
lean_dec(x_1);
lean_inc(x_26);
lean_inc(x_17);
x_29 = lean_apply_5(x_28, x_17, x_18, x_26, x_19, x_27);
x_30 = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(x_30, 0, x_17);
lean_ctor_set(x_30, 1, x_26);
lean_ctor_set(x_30, 2, x_29);
return x_30;
}
}
default: 
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_biconeCategoryStruct___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2___boxed), 6, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_biconeCategoryStruct___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_biconeCategoryStruct___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategory___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_biconeCategoryStruct___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_biconeCategory___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
case 1:
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
return x_6;
}
default: 
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_apply_1(x_8, x_7);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_apply_1(x_11, x_12);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_apply_1(x_15, x_14);
return x_16;
}
case 3:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
lean_dec(x_7);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_apply_1(x_18, x_17);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_7, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_7, 2);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
lean_dec(x_4);
x_24 = lean_apply_3(x_23, x_20, x_21, x_22);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_biconeMk___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_biconeMk___rarg___lambda__2___boxed), 7, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
lean_closure_set(x_6, 3, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_biconeMk___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_biconeMk___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_biconeMk___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeMk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_biconeMk(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeSmallCategory___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_biconeCategoryStruct___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_biconeSmallCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_biconeSmallCategory___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Cones(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_FinCategory_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Bicones(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Cones(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_FinCategory_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
