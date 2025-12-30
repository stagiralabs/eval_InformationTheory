// Lean compiler output
// Module: Mathlib.Data.Finset.Image
// Imports: Init Mathlib.Data.Fin.Basic Mathlib.Data.Finset.Basic Mathlib.Data.Finset.SymmDiff
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
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__2(lean_object*, lean_object*);
lean_object* l_Multiset_filter___rarg(lean_object*, lean_object*);
lean_object* l_Fin_equivSubtype(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_subtype___rarg___closed__2;
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_fin___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_fin___boxed(lean_object*, lean_object*);
static lean_object* l_Finset_subtype___rarg___closed__1;
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__1(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filterMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_fin___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_fin___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetCongr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mapEmbedding___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_fin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_map___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
lean_object* l_Multiset_filterMap___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_fin___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_fin___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Subtype_impEmbedding___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_fin___spec__2(lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_fin___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_fin___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filterMap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_image(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mapEmbedding(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_map___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_map___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mapEmbedding___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_mapEmbedding(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mapEmbedding___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_image___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_image___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filterMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filterMap___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filterMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filterMap___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Finset_subtype___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_subtype___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_subtype___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Multiset_filter___rarg(x_1, x_2);
x_4 = l_Finset_subtype___rarg___closed__1;
x_5 = l_Multiset_pmap___rarg(x_4, x_3, lean_box(0));
x_6 = l_Finset_subtype___rarg___closed__2;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_subtype___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_subtype___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_fin___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_nat_dec_lt(x_6, x_1);
if (x_8 == 0)
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
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_nat_dec_lt(x_11, x_1);
if (x_13 == 0)
{
lean_dec(x_11);
x_2 = x_12;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_fin___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finset_fin___spec__4(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_fin___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finset_fin___spec__3(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_fin___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Multiset_filter___at_Finset_fin___spec__3(x_1, x_2);
x_4 = l_Finset_subtype___rarg___closed__1;
x_5 = l_Multiset_pmap___rarg(x_4, x_3, lean_box(0));
x_6 = l_Finset_subtype___rarg___closed__2;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_fin(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Fin_equivSubtype(x_1);
x_4 = l_Equiv_symm___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Finset_subtype___at_Finset_fin___spec__1(x_1, x_2);
x_7 = l_Multiset_map___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_fin___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterTR_loop___at_Finset_fin___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_fin___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finset_fin___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_fin___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_filter___at_Finset_fin___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_fin___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_subtype___at_Finset_fin___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_fin___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_fin(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_symm___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Multiset_map___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetCongr___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Multiset_map___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetCongr___elambda__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Equiv_finsetCongr___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetCongr___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetCongr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetCongr___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subtype_impEmbedding___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Finset_subtype___rarg___closed__1;
x_3 = l_Multiset_pmap___rarg(x_2, x_1, lean_box(0));
x_4 = l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetSubtypeComm___elambda__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_subtype___rarg___closed__2;
x_3 = l_Multiset_map___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetSubtypeComm___elambda__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_finsetSubtypeComm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Equiv_finsetSubtypeComm___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_closure((void*)(l_Equiv_finsetSubtypeComm___elambda__1___rarg), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_SymmDiff(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Image(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_SymmDiff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_subtype___rarg___closed__1 = _init_l_Finset_subtype___rarg___closed__1();
lean_mark_persistent(l_Finset_subtype___rarg___closed__1);
l_Finset_subtype___rarg___closed__2 = _init_l_Finset_subtype___rarg___closed__2();
lean_mark_persistent(l_Finset_subtype___rarg___closed__2);
l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1 = _init_l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1();
lean_mark_persistent(l_Equiv_finsetSubtypeComm___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
