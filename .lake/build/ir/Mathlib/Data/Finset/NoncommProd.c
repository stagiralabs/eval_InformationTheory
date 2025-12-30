// Lean compiler output
// Module: Mathlib.Data.Finset.NoncommProd
// Imports: Init Mathlib.Data.Fintype.Basic Mathlib.Algebra.Group.Commute.Hom Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
static lean_object* l_Multiset_noncommFoldr___rarg___closed__2;
LEAN_EXPORT lean_object* l_Finset_noncommSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFold(lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_noncommFoldr___rarg___closed__1;
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg___lambda__1(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommSum(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommProd(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Multiset_noncommFoldr___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_noncommFoldr___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_noncommFoldr___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Multiset_noncommFoldr___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Multiset_noncommFoldr___rarg___closed__2;
x_8 = l_Multiset_pmap___rarg(x_7, x_2, lean_box(0));
x_9 = l_List_foldrTR___rarg(x_6, x_4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_noncommFoldr___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommFoldr___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_noncommFoldr___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommFold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_noncommFoldr___rarg(x_1, x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommFold(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_noncommFold___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Monoid_toMulOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Multiset_noncommProd___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Multiset_noncommFoldr___rarg(x_4, x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommProd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_noncommProd___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommProd___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_noncommProd___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Multiset_noncommSum___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Multiset_noncommFoldr___rarg(x_4, x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommSum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_noncommSum___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_noncommSum___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_noncommSum___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Multiset_map___rarg(x_3, x_2);
x_6 = l_Multiset_noncommProd___rarg(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_noncommProd___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Multiset_map___rarg(x_3, x_2);
x_6 = l_Multiset_noncommSum___rarg(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_noncommSum___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Commute_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_NoncommProd(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Commute_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_noncommFoldr___rarg___closed__1 = _init_l_Multiset_noncommFoldr___rarg___closed__1();
lean_mark_persistent(l_Multiset_noncommFoldr___rarg___closed__1);
l_Multiset_noncommFoldr___rarg___closed__2 = _init_l_Multiset_noncommFoldr___rarg___closed__2();
lean_mark_persistent(l_Multiset_noncommFoldr___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
