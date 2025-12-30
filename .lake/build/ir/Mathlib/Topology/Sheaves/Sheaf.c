// Lean compiler output
// Module: Mathlib.Topology.Sheaves.Sheaf
// Imports: Init Mathlib.Topology.Sheaves.Presheaf Mathlib.CategoryTheory.Sites.Sheaf Mathlib.CategoryTheory.Sites.Spaces
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
lean_object* l_CompleteLattice_toCompleteSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_sheafInhabited(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_SheafCat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_SheafCat(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Preorder_smallCategory(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Sheaf_instCategorySheaf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Opens_grothendieckTopology___rarg(lean_object*);
static lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1;
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget___rarg(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_star___at_TopCat_sheafInhabited___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_discreteCategory(lean_object*);
static lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1(lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
static lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf(lean_object*, lean_object*, lean_object*);
lean_object* l_TopologicalSpace_Opens_instCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_SheafCat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_3 = l_TopologicalSpace_Opens_instCompleteLattice___rarg(x_2);
x_4 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Preorder_smallCategory(lean_box(0), x_5);
lean_dec(x_5);
x_7 = l_Opens_grothendieckTopology___rarg(x_2);
lean_dec(x_2);
x_8 = l_CategoryTheory_Sheaf_instCategorySheaf___rarg(x_6, x_7, lean_box(0), x_1);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_TopCat_SheafCat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TopCat_SheafCat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopCat_Sheaf_presheaf___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TopCat_Sheaf_presheaf___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_presheaf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopCat_Sheaf_presheaf(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_discreteCategory(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = l_TopologicalSpace_Opens_instCompleteLattice___rarg(x_1);
x_3 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Preorder_smallCategory(lean_box(0), x_4);
lean_dec(x_4);
x_6 = l_CategoryTheory_Category_opposite___rarg(x_5);
x_7 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1;
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___boxed), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_star___at_TopCat_sheafInhabited___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopCat_sheafInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Functor_star___at_TopCat_sheafInhabited___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1;
x_5 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Opens_grothendieckTopology___rarg(x_2);
x_4 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TopCat_Sheaf_forget___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_Sheaf_forget___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_Sheaf_forget___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Presheaf(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Sheaf(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Spaces(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Sheaves_Sheaf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Presheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Sheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Spaces(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1 = _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___lambda__3___closed__1);
l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1 = _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__1);
l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2 = _init_l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2();
lean_mark_persistent(l_CategoryTheory_Functor_const___at_TopCat_sheafInhabited___spec__2___closed__2);
l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1 = _init_l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__1);
l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2 = _init_l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2();
lean_mark_persistent(l_CategoryTheory_sheafToPresheaf___at_TopCat_Sheaf_forget___spec__1___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
