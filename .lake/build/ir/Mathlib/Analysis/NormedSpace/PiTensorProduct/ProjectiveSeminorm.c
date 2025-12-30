// Lean compiler output
// Module: Mathlib.Analysis.NormedSpace.PiTensorProduct.ProjectiveSeminorm
// Imports: Init Mathlib.Analysis.NormedSpace.Multilinear.Basic Mathlib.LinearAlgebra.PiTensorProduct
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
LEAN_EXPORT lean_object* l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_PiTensorProduct_projectiveSeminormAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PiTensorProduct_projectiveSeminormAux(lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___at_PiTensorProduct_projectiveSeminormAux___spec__4(lean_object*);
static lean_object* _init_l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1;
x_3 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = lean_alloc_closure((void*)(l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_), 2, 0);
x_5 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_3);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_List_reverse___rarg(x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_apply_1(x_12, x_13);
lean_inc(x_5);
x_15 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_10);
lean_inc(x_1);
x_16 = l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1___rarg(x_1, x_15);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_14, x_16);
lean_ctor_set(x_6, 1, x_7);
lean_ctor_set(x_6, 0, x_17);
{
lean_object* _tmp_1 = lean_box(0);
lean_object* _tmp_3 = lean_box(0);
lean_object* _tmp_5 = x_11;
lean_object* _tmp_6 = x_6;
x_2 = _tmp_1;
x_4 = _tmp_3;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_6, 0);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_6);
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_apply_1(x_21, x_22);
lean_inc(x_5);
x_24 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg___lambda__1), 3, 2);
lean_closure_set(x_24, 0, x_5);
lean_closure_set(x_24, 1, x_19);
lean_inc(x_1);
x_25 = l_Finset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__1___rarg(x_1, x_24);
x_26 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_23, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_7);
x_2 = lean_box(0);
x_4 = lean_box(0);
x_6 = x_20;
x_7 = x_27;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(x_1, x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_List_sum___at_PiTensorProduct_projectiveSeminormAux___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_3 = l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PiTensorProduct_projectiveSeminormAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___at_PiTensorProduct_projectiveSeminormAux___spec__3___rarg(x_1, lean_box(0), x_3, lean_box(0), x_5, x_6, x_7);
x_9 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_10 = l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(x_9, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_PiTensorProduct_projectiveSeminormAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PiTensorProduct_projectiveSeminormAux___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldr___at_PiTensorProduct_projectiveSeminormAux___spec__5(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_Multilinear_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_PiTensorProduct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_NormedSpace_PiTensorProduct_ProjectiveSeminorm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_Multilinear_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_PiTensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1 = _init_l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1();
lean_mark_persistent(l_Multiset_prod___at_PiTensorProduct_projectiveSeminormAux___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
