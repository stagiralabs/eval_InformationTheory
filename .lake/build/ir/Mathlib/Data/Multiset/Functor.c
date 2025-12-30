// Lean compiler output
// Module: Mathlib.Data.Multiset.Functor
// Imports: Init Mathlib.Data.Multiset.Bind Mathlib.Control.Traversable.Lemmas Mathlib.Control.Traversable.Instances
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
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map(lean_object*, lean_object*);
static lean_object* l_Multiset_functor___closed__1;
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_functor;
LEAN_EXPORT lean_object* l_Multiset_traverse(lean_object*);
static lean_object* l_Multiset_functor___closed__3;
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
static lean_object* l_Multiset_functor___closed__2;
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_instMonad___closed__5;
LEAN_EXPORT lean_object* l_Multiset_instMonad;
static lean_object* l_Multiset_instMonad___closed__1;
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__5(lean_object*, lean_object*);
static lean_object* l_Multiset_instMonad___closed__2;
LEAN_EXPORT lean_object* l_Multiset_functor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__2(lean_object*, lean_object*);
lean_object* l_List_traverse___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_traverse___rarg___closed__1;
static lean_object* l_Multiset_instMonad___closed__3;
lean_object* l_Multiset_ofList___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__7(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__7___boxed(lean_object*, lean_object*);
lean_object* l_Multiset_bind(lean_object*, lean_object*);
static lean_object* l_Multiset_instMonad___closed__4;
static lean_object* l_Multiset_instMonad___closed__6;
static lean_object* l_Multiset_instMonad___closed__7;
LEAN_EXPORT lean_object* l_Multiset_functor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Multiset_map___rarg(x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_Multiset_functor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_map), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_functor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_functor___lambda__1), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_functor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Multiset_functor___closed__1;
x_2 = l_Multiset_functor___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Multiset_functor() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_functor___closed__3;
return x_1;
}
}
static lean_object* _init_l_Multiset_traverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_ofList___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_traverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Multiset_traverse___rarg___closed__1;
x_10 = lean_apply_3(x_8, lean_box(0), lean_box(0), x_9);
x_11 = lean_alloc_closure((void*)(l_List_traverse___rarg), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_5);
x_12 = l_Function_comp___rarg(x_10, x_11, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Multiset_traverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_traverse___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_apply_1(x_1, x_3);
x_5 = l_Multiset_map___rarg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Multiset_bind___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_box(0);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__4___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_bind___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__5), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Multiset_bind___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__7___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Multiset_bind___rarg(x_3, x_5);
return x_6;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__3), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__6), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_instMonad___lambda__8), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Multiset_functor;
x_2 = l_Multiset_instMonad___closed__1;
x_3 = l_Multiset_instMonad___closed__2;
x_4 = l_Multiset_instMonad___closed__3;
x_5 = l_Multiset_instMonad___closed__4;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_bind), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Multiset_instMonad___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Multiset_instMonad___closed__5;
x_2 = l_Multiset_instMonad___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Multiset_instMonad() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_instMonad___closed__7;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_instMonad___lambda__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_instMonad___lambda__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_instMonad___lambda__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Bind(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Instances(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Multiset_Functor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Bind(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_functor___closed__1 = _init_l_Multiset_functor___closed__1();
lean_mark_persistent(l_Multiset_functor___closed__1);
l_Multiset_functor___closed__2 = _init_l_Multiset_functor___closed__2();
lean_mark_persistent(l_Multiset_functor___closed__2);
l_Multiset_functor___closed__3 = _init_l_Multiset_functor___closed__3();
lean_mark_persistent(l_Multiset_functor___closed__3);
l_Multiset_functor = _init_l_Multiset_functor();
lean_mark_persistent(l_Multiset_functor);
l_Multiset_traverse___rarg___closed__1 = _init_l_Multiset_traverse___rarg___closed__1();
lean_mark_persistent(l_Multiset_traverse___rarg___closed__1);
l_Multiset_instMonad___closed__1 = _init_l_Multiset_instMonad___closed__1();
lean_mark_persistent(l_Multiset_instMonad___closed__1);
l_Multiset_instMonad___closed__2 = _init_l_Multiset_instMonad___closed__2();
lean_mark_persistent(l_Multiset_instMonad___closed__2);
l_Multiset_instMonad___closed__3 = _init_l_Multiset_instMonad___closed__3();
lean_mark_persistent(l_Multiset_instMonad___closed__3);
l_Multiset_instMonad___closed__4 = _init_l_Multiset_instMonad___closed__4();
lean_mark_persistent(l_Multiset_instMonad___closed__4);
l_Multiset_instMonad___closed__5 = _init_l_Multiset_instMonad___closed__5();
lean_mark_persistent(l_Multiset_instMonad___closed__5);
l_Multiset_instMonad___closed__6 = _init_l_Multiset_instMonad___closed__6();
lean_mark_persistent(l_Multiset_instMonad___closed__6);
l_Multiset_instMonad___closed__7 = _init_l_Multiset_instMonad___closed__7();
lean_mark_persistent(l_Multiset_instMonad___closed__7);
l_Multiset_instMonad = _init_l_Multiset_instMonad();
lean_mark_persistent(l_Multiset_instMonad);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
