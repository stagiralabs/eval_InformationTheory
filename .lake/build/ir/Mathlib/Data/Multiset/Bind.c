// Lean compiler output
// Module: Mathlib.Data.Multiset.Bind
// Imports: Init Mathlib.Algebra.BigOperators.Group.Multiset.Basic
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
LEAN_EXPORT lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instSProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sigma(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Multiset_join___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Multiset_join___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_product___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Multiset_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_join(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_product(lean_object*, lean_object*);
static lean_object* l_Multiset_instSProd___closed__1;
LEAN_EXPORT lean_object* l_Multiset_sum___at_Multiset_join___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_bind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_product___rarg___lambda__2(lean_object*, lean_object*);
static lean_object* _init_l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_add___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Multiset_join___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1;
x_4 = l_List_foldrTR___rarg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Multiset_join___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Multiset_join___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_join___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_sum___at_Multiset_join___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_join(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_join___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_bind___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_Multiset_join___spec__1___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_bind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_bind___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_product___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_product___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Multiset_product___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_map___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_product___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Multiset_product___rarg___lambda__2), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_bind___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_product(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_product___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Multiset_instSProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_product___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_instSProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_instSProd___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Multiset_sigma___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_1(x_1, x_2);
x_5 = l_Multiset_map___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_sigma___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Multiset_sigma___rarg___lambda__2), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_bind___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sigma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_sigma___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Multiset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Multiset_Bind(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Multiset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1 = _init_l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1();
lean_mark_persistent(l_Multiset_sum___at_Multiset_join___spec__1___rarg___closed__1);
l_Multiset_instSProd___closed__1 = _init_l_Multiset_instSProd___closed__1();
lean_mark_persistent(l_Multiset_instSProd___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
