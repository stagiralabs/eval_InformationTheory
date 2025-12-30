// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Ends.Defs
// Imports: Init Mathlib.CategoryTheory.CofilteredSystem Mathlib.Combinatorics.SimpleGraph.Path Mathlib.Data.Finite.Set
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
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_setLike(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_coeGraph(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_setLike___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_componentComplFunctor___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Preorder_smallCategory(lean_object*, lean_object*);
lean_object* l_Finset_partialOrder(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___rarg___boxed(lean_object*);
static lean_object* l_SimpleGraph_componentComplFunctor___closed__2;
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_coeGraph___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_componentComplFunctor___closed__4;
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk(lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_componentComplFunctor___closed__5;
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_componentComplFunctor___closed__3;
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_componentComplMk___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_componentComplMk___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplMk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_componentComplMk(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_setLike(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_setLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_ComponentCompl_setLike(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_ComponentCompl_lift___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_lift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ComponentCompl_lift(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_coeGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_coeGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_ComponentCompl_coeGraph(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_ComponentCompl_hom___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_ComponentCompl_hom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_ComponentCompl_hom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_ComponentCompl_hom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
static lean_object* _init_l_SimpleGraph_componentComplFunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_partialOrder(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_SimpleGraph_componentComplFunctor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_SimpleGraph_componentComplFunctor___closed__1;
x_2 = l_Preorder_smallCategory(lean_box(0), x_1);
return x_2;
}
}
static lean_object* _init_l_SimpleGraph_componentComplFunctor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_SimpleGraph_componentComplFunctor___closed__2;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_SimpleGraph_componentComplFunctor___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SimpleGraph_componentComplFunctor___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_SimpleGraph_componentComplFunctor___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_SimpleGraph_componentComplFunctor___closed__4;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_componentComplFunctor___closed__5;
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_componentComplFunctor___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_componentComplFunctor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_componentComplFunctor(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_CofilteredSystem(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Path(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Set(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Ends_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_CofilteredSystem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Set(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_componentComplFunctor___closed__1 = _init_l_SimpleGraph_componentComplFunctor___closed__1();
lean_mark_persistent(l_SimpleGraph_componentComplFunctor___closed__1);
l_SimpleGraph_componentComplFunctor___closed__2 = _init_l_SimpleGraph_componentComplFunctor___closed__2();
lean_mark_persistent(l_SimpleGraph_componentComplFunctor___closed__2);
l_SimpleGraph_componentComplFunctor___closed__3 = _init_l_SimpleGraph_componentComplFunctor___closed__3();
lean_mark_persistent(l_SimpleGraph_componentComplFunctor___closed__3);
l_SimpleGraph_componentComplFunctor___closed__4 = _init_l_SimpleGraph_componentComplFunctor___closed__4();
lean_mark_persistent(l_SimpleGraph_componentComplFunctor___closed__4);
l_SimpleGraph_componentComplFunctor___closed__5 = _init_l_SimpleGraph_componentComplFunctor___closed__5();
lean_mark_persistent(l_SimpleGraph_componentComplFunctor___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
