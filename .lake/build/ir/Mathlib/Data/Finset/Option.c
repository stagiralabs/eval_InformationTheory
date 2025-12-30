// Lean compiler output
// Module: Mathlib.Data.Finset.Option
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
lean_object* l_Function_Embedding_some___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_eraseNone(lean_object*);
LEAN_EXPORT lean_object* l_Option_toFinset___rarg(lean_object*);
static lean_object* l_Finset_eraseNone___closed__3;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_Finset_eraseNone___spec__6(lean_object*);
static lean_object* l_Finset_insertNone___rarg___closed__1;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_eraseNone___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_eraseNone___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_eraseNone___spec__3___rarg(lean_object*);
lean_object* l_Equiv_optionIsSomeEquiv(lean_object*);
LEAN_EXPORT lean_object* l_Option_toFinset(lean_object*);
lean_object* l_Finset_map___rarg(lean_object*, lean_object*);
lean_object* l_OrderHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2(lean_object*);
lean_object* l_OrderEmbedding_toOrderHom___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_eraseNone___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Option_toFinset___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_eraseNone___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_eraseNone___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___at_Finset_eraseNone___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_insertNone___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_insertNone(lean_object*);
static lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2;
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Finset_eraseNone___closed__2;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_Finset_eraseNone___spec__6___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_eraseNone___closed__1;
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___at_Finset_eraseNone___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Option_toFinset___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_box(0);
lean_inc(x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Option_toFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_toFinset___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_toFinset___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Option_toFinset___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_insertNone___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_some___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_insertNone___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Finset_insertNone___rarg___closed__1;
x_4 = l_Multiset_map___rarg(x_3, x_1);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_insertNone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_insertNone___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___at_Finset_eraseNone___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___at_Finset_eraseNone___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___at_Finset_eraseNone___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_eraseNone___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_1 = x_5;
goto _start;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 0);
lean_dec(x_9);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_8;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_11;
x_2 = x_12;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_eraseNone___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_eraseNone___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_eraseNone___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_filterTR_loop___at_Finset_eraseNone___spec__5___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_eraseNone___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_eraseNone___spec__4___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_eraseNone___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_filter___at_Finset_eraseNone___spec__4___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_eraseNone___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_eraseNone___spec__3___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Multiset_filter___at_Finset_eraseNone___spec__4___rarg(x_1);
x_3 = l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_2, lean_box(0));
x_5 = l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2;
x_6 = l_Multiset_map___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_Finset_eraseNone___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_Finset_eraseNone___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_comp___at_Finset_eraseNone___spec__6___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_eraseNone___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_optionIsSomeEquiv(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Finset_eraseNone___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Finset_eraseNone___closed__1;
x_2 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_eraseNone___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Finset_eraseNone___closed__2;
x_2 = lean_alloc_closure((void*)(l_Finset_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_eraseNone(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Finset_eraseNone___closed__3;
x_3 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg), 1, 0);
x_5 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Union(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Option(uint8_t builtin, lean_object* w) {
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
l_Finset_insertNone___rarg___closed__1 = _init_l_Finset_insertNone___rarg___closed__1();
lean_mark_persistent(l_Finset_insertNone___rarg___closed__1);
l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1 = _init_l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1();
lean_mark_persistent(l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__1);
l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2 = _init_l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2();
lean_mark_persistent(l_Finset_subtype___at_Finset_eraseNone___spec__2___rarg___closed__2);
l_Finset_eraseNone___closed__1 = _init_l_Finset_eraseNone___closed__1();
lean_mark_persistent(l_Finset_eraseNone___closed__1);
l_Finset_eraseNone___closed__2 = _init_l_Finset_eraseNone___closed__2();
lean_mark_persistent(l_Finset_eraseNone___closed__2);
l_Finset_eraseNone___closed__3 = _init_l_Finset_eraseNone___closed__3();
lean_mark_persistent(l_Finset_eraseNone___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
