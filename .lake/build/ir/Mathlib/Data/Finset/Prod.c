// Lean compiler output
// Module: Mathlib.Data.Finset.Prod
// Imports: Init Mathlib.Data.Finset.Card Mathlib.Data.Finset.Union
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
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_diag___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_diag___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_diag___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag___rarg(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Finset_diag(lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag(lean_object*);
static lean_object* l_Finset_instSProd___closed__1;
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_offDiag___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instSProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_offDiag___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_diag___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_offDiag___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_offDiag___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_offDiag___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_diag___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_diag___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_product(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_offDiag___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_diag___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_product___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_product___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_product(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_product___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Finset_instSProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_product___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instSProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_instSProd___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_diag___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_8, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_1);
x_18 = lean_apply_2(x_1, x_16, x_17);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_dec(x_14);
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_diag___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_diag___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_diag___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finset_diag___spec__3___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_diag___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_diag___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_diag___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finset_diag___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_diag___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_diag___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_diag___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_product___rarg(x_2, x_2);
x_4 = l_Multiset_filter___at_Finset_diag___spec__2___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_diag(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_diag___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_offDiag___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_8, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_instDecidableNot___rarg(x_11);
if (x_12 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_apply_2(x_1, x_17, x_18);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
x_21 = l_instDecidableNot___rarg(x_20);
if (x_21 == 0)
{
lean_dec(x_15);
x_2 = x_16;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_15);
lean_ctor_set(x_23, 1, x_3);
x_2 = x_16;
x_3 = x_23;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_offDiag___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_offDiag___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_offDiag___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finset_offDiag___spec__3___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_offDiag___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_offDiag___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_offDiag___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finset_offDiag___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_offDiag___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_offDiag___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_product___rarg(x_2, x_2);
x_4 = l_Multiset_filter___at_Finset_offDiag___spec__2___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_offDiag___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Union(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Union(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_instSProd___closed__1 = _init_l_Finset_instSProd___closed__1();
lean_mark_persistent(l_Finset_instSProd___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
