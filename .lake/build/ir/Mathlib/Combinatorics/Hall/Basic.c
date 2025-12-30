// Lean compiler output
// Module: Mathlib.Combinatorics.Hall.Basic
// Imports: Init Mathlib.Combinatorics.Hall.Finite Mathlib.CategoryTheory.CofilteredSystem Mathlib.Data.Rel
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
LEAN_EXPORT lean_object* l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1(lean_object*, lean_object*);
static lean_object* l_hallMatchingsFunctor___closed__3;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Preorder_smallCategory(lean_object*, lean_object*);
lean_object* l_Finset_partialOrder(lean_object*);
static lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1;
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_hallMatchingsFunctor___closed__5;
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsFunctor(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_hallMatchingsFunctor___closed__4;
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet(lean_object*, lean_object*);
static lean_object* l_hallMatchingsFunctor___closed__2;
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_hallMatchingsFunctor___closed__1;
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_hallMatchingsOn_restrict___elambda__1___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_hallMatchingsOn_restrict___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_hallMatchingsOn_restrict___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_hallMatchingsOn_restrict___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsOn_restrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_hallMatchingsOn_restrict___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_hallMatchingsOn_restrict___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
static lean_object* _init_l_hallMatchingsFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_partialOrder(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_hallMatchingsFunctor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_hallMatchingsFunctor___closed__1;
x_2 = l_Preorder_smallCategory(lean_box(0), x_1);
return x_2;
}
}
static lean_object* _init_l_hallMatchingsFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_hallMatchingsFunctor___closed__2;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_hallMatchingsFunctor___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_hallMatchingsFunctor___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_hallMatchingsFunctor___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_hallMatchingsFunctor___closed__4;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsFunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_hallMatchingsFunctor___closed__5;
return x_4;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_hallMatchingsFunctor___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_hallMatchingsFunctor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_hallMatchingsFunctor(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_bind___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_alloc_closure((void*)(l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Finset_biUnion___at_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___spec__1___rarg(x_1, x_4, x_5);
x_7 = l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Hall_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_CofilteredSystem(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Hall_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Hall_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_CofilteredSystem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_hallMatchingsFunctor___closed__1 = _init_l_hallMatchingsFunctor___closed__1();
lean_mark_persistent(l_hallMatchingsFunctor___closed__1);
l_hallMatchingsFunctor___closed__2 = _init_l_hallMatchingsFunctor___closed__2();
lean_mark_persistent(l_hallMatchingsFunctor___closed__2);
l_hallMatchingsFunctor___closed__3 = _init_l_hallMatchingsFunctor___closed__3();
lean_mark_persistent(l_hallMatchingsFunctor___closed__3);
l_hallMatchingsFunctor___closed__4 = _init_l_hallMatchingsFunctor___closed__4();
lean_mark_persistent(l_hallMatchingsFunctor___closed__4);
l_hallMatchingsFunctor___closed__5 = _init_l_hallMatchingsFunctor___closed__5();
lean_mark_persistent(l_hallMatchingsFunctor___closed__5);
l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1 = _init_l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1();
lean_mark_persistent(l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___lambda__1___closed__1);
l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1 = _init_l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1();
lean_mark_persistent(l_instFintypeElemImageToSetOfDecidableEqOfSingletonSet___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
