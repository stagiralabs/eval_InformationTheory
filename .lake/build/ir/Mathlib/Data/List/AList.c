// Lean compiler output
// Module: Mathlib.Data.List.AList
// Imports: Init Mathlib.Data.List.Sigma
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_AList_0__AList_insertRec_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instUnion___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AList_union(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_insertRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_kunion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_keys___rarg(lean_object*);
lean_object* l_List_kextract___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_insert(lean_object*, lean_object*);
lean_object* l_List_kinsert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AList_instDecidableMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instEmptyCollection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_AList_foldl___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_AList_0__AList_insertRec_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_singleton___rarg(lean_object*, lean_object*);
lean_object* l_List_dedupKeys___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_replace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_lookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_replace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_keys___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AList_lookup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_AList_instDecidableEq___spec__1(lean_object*, lean_object*);
lean_object* l_Sigma_instDecidableEqSigma___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toAList(lean_object*);
LEAN_EXPORT lean_object* l_AList_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_union___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_insertRec(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AList_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_keys(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instDecidableMem___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_kerase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_foldl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_AList_foldl___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_dlookup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_insertRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_extract(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instUnion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instMembership(lean_object*, lean_object*);
lean_object* l_List_kreplace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toAList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_extract___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_foldl___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AList_instDecidableMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toAList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_dedupKeys___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_toAList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_toAList___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Sigma_instDecidableEqSigma___rarg(x_1, x_2, x_8, x_10);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = 0;
return x_14;
}
else
{
x_3 = x_9;
x_4 = x_11;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_AList_instDecidableEq___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_AList_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AList_instDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_instDecidableEq___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_List_hasDecEq___at_AList_instDecidableEq___spec__1___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AList_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_AList_instDecidableEq___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AList_keys___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_keys___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AList_keys(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_keys___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_instMembership(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_instEmptyCollection(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_singleton___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AList_singleton(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_singleton___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_lookup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_dlookup___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_lookup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_lookup___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_AList_instDecidableMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_dlookup___rarg(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_AList_instDecidableMem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_instDecidableMem___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_instDecidableMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_AList_instDecidableMem___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AList_replace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_kreplace___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AList_replace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_replace___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_AList_foldl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
x_8 = lean_apply_3(x_1, x_2, x_6, x_7);
x_2 = x_8;
x_3 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_AList_foldl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_foldl___at_AList_foldl___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___at_AList_foldl___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_foldl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AList_foldl___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_kerase___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_erase___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_kinsert___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AList_insert(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_insert___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_insertRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
lean_inc(x_7);
lean_inc(x_4);
x_10 = l_AList_insertRec___rarg(x_1, lean_box(0), x_3, x_4, x_7);
x_11 = lean_apply_5(x_4, x_8, x_9, x_7, lean_box(0), x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_AList_insertRec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_insertRec___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_insertRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AList_insertRec___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_AList_0__AList_insertRec_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_apply_1(x_2, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_3, x_5, x_6, lean_box(0));
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_AList_0__AList_insertRec_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_AList_0__AList_insertRec_match__1_splitter___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_extract___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_List_kextract___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_AList_extract(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_extract___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_union___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_kunion___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AList_union(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_union___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AList_instUnion___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AList_union___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AList_instUnion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AList_instUnion___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Sigma(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_AList(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
