// Lean compiler output
// Module: Mathlib.Data.Set.Finite.Lattice
// Imports: Init Mathlib.Data.Finite.Sigma Mathlib.Data.Set.Finite.Powerset Mathlib.Data.Set.Finite.Range
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
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27(lean_object*);
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PLift_fintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeiUnion___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeiUnion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1(lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypesUnion(lean_object*);
static lean_object* l_Set_fintypeiUnion___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeiUnion___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypesUnion___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_fintypeBiUnion___rarg___closed__1;
static lean_object* l_Set_fintypeiUnion___rarg___closed__1;
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeiUnion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_bind___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeiUnion___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Set_fintypeiUnion___spec__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Set_fintypeiUnion___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_Set_fintypeiUnion___rarg___lambda__1___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Set_fintypeiUnion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_alloc_closure((void*)(l_Set_fintypeiUnion___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Finset_biUnion___at_Set_fintypeiUnion___spec__1___rarg(x_1, x_2, x_5);
x_7 = l_Set_fintypeiUnion___rarg___closed__1;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeiUnion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeiUnion___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeiUnion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_fintypeiUnion___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_fintypesUnion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_PLift_fintype___rarg(x_3);
x_6 = l_Set_fintypeiUnion___rarg(x_1, x_5, lean_box(0), x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypesUnion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintypesUnion___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Multiset_bind___rarg(x_5, x_6);
x_8 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_apply_2(x_1, x_2, lean_box(0));
x_4 = l_Set_fintypeiUnion___rarg___lambda__1___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Set_fintypeBiUnion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = l_Set_fintypeiUnion___rarg___lambda__1___closed__1;
lean_inc(x_4);
x_8 = l_Multiset_map___rarg(x_7, x_4);
x_9 = l_Set_fintypeBiUnion___rarg___closed__1;
x_10 = l_Multiset_pmap___rarg(x_9, x_8, lean_box(0));
x_11 = lean_alloc_closure((void*)(l_Set_fintypeBiUnion___rarg___lambda__1), 2, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg(x_1, lean_box(0), lean_box(0), x_4, x_10, x_11);
lean_dec(x_4);
x_13 = l_Set_fintypeiUnion___rarg___closed__1;
x_14 = l_Multiset_pmap___rarg(x_13, x_12, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintypeBiUnion___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_biUnion___at_Set_fintypeBiUnion___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Set_fintypeBiUnion___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Multiset_bind___rarg(x_3, x_4);
x_6 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Set_fintypeiUnion___rarg___lambda__1___closed__1;
x_8 = l_Multiset_map___rarg(x_7, x_4);
x_9 = lean_alloc_closure((void*)(l_Set_fintypeiUnion___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_6);
x_10 = l_Finset_biUnion___at_Set_fintypeBiUnion_x27___spec__1___rarg(x_1, lean_box(0), x_8, x_9);
x_11 = l_Set_fintypeiUnion___rarg___closed__1;
x_12 = l_Multiset_pmap___rarg(x_11, x_10, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintypeBiUnion_x27___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBiUnion_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Set_fintypeBiUnion_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Sigma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Range(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Finite_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_fintypeiUnion___rarg___lambda__1___closed__1 = _init_l_Set_fintypeiUnion___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Set_fintypeiUnion___rarg___lambda__1___closed__1);
l_Set_fintypeiUnion___rarg___closed__1 = _init_l_Set_fintypeiUnion___rarg___closed__1();
lean_mark_persistent(l_Set_fintypeiUnion___rarg___closed__1);
l_Set_fintypeBiUnion___rarg___closed__1 = _init_l_Set_fintypeBiUnion___rarg___closed__1();
lean_mark_persistent(l_Set_fintypeBiUnion___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
