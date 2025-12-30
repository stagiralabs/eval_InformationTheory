// Lean compiler output
// Module: Mathlib.Topology.Sheaves.PresheafOfFunctions
// Imports: Init Mathlib.Topology.Sheaves.Presheaf
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
static lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2;
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes(lean_object*, lean_object*);
extern lean_object* l_TopCat_instCategory;
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_CategoryTheory_types;
static lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1;
lean_object* l_CategoryTheory_Functor_category___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_TopCat_presheafToTypes___closed__1;
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_TopologicalSpace_Opens_toTopCat(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_TopCat_presheafToTypes___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_TopCat_presheafToTypes___lambda__1___boxed), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_TopCat_presheafToTypes___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_TopCat_presheafToTypes___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToTypes___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_presheafToTypes(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_TopCat_presheafToTypes___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_presheafToType(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_3, x_2, lean_box(0));
return x_6;
}
}
static lean_object* _init_l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_TopCat_instCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___lambda__2), 4, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
static lean_object* _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
static lean_object* _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1;
x_2 = l_CategoryTheory_types;
x_3 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1;
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_8);
lean_inc(x_3);
x_9 = lean_apply_1(x_8, x_3);
lean_inc(x_4);
x_10 = lean_apply_1(x_8, x_4);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_3(x_11, x_3, x_4, x_5);
x_13 = lean_apply_4(x_7, x_9, x_10, x_12, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3___lambda__1), 6, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, lean_box(0));
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_TopologicalSpace_Opens_toTopCat(x_1);
x_4 = l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1(x_1, x_3);
x_5 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2;
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_2);
x_8 = l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_comp___at_TopCat_presheafToTop___spec__3(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_presheafToTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_presheafToTop(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Presheaf(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Sheaves_PresheafOfFunctions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Presheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_TopCat_presheafToTypes___closed__1 = _init_l_TopCat_presheafToTypes___closed__1();
lean_mark_persistent(l_TopCat_presheafToTypes___closed__1);
l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1 = _init_l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_op___at_TopCat_presheafToTop___spec__1___closed__1);
l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1 = _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1();
lean_mark_persistent(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___lambda__2___closed__1);
l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__1 = _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__1();
lean_mark_persistent(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__1);
l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2 = _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2();
lean_mark_persistent(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2___closed__2);
l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2 = _init_l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2();
lean_mark_persistent(l_CategoryTheory_yoneda___at_TopCat_presheafToTop___spec__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
