// Lean compiler output
// Module: Mathlib.Data.Erased
// Imports: Init Mathlib.Logic.Equiv.Defs
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
LEAN_EXPORT lean_object* l_Erased_Monad;
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Erased_Monad___closed__1;
LEAN_EXPORT lean_object* l_Erased_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_instInhabitedOfNonempty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_join(lean_object*, lean_object*);
static lean_object* l_Erased_Monad___closed__3;
static lean_object* l_Erased_Monad___closed__7;
LEAN_EXPORT lean_object* l_Erased_instToString(lean_object*, lean_object*);
static lean_object* l_Erased_Monad___closed__4;
static lean_object* l_Erased_Monad___closed__6;
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_instRepr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_instRepr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_mk___boxed(lean_object*, lean_object*);
static lean_object* l_Erased_instRepr___closed__2;
LEAN_EXPORT lean_object* l_Erased_choice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_map(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Erased_Monad___closed__5;
static lean_object* l_Erased_instRepr___closed__1;
static lean_object* l_Erased_Monad___closed__8;
LEAN_EXPORT lean_object* l_Erased_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Erased_Monad___closed__2;
LEAN_EXPORT lean_object* l_Erased_bind(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Erased_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_mk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Erased_mk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Erased_instRepr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Erased", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Erased_instRepr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Erased_instRepr___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Erased_instRepr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Erased_instRepr___closed__2;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Erased_instRepr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Erased_instRepr(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Erased_instToString(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Erased_instRepr___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Erased_choice(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_instInhabitedOfNonempty(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_bind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_bind___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Erased_bind(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Erased_join(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Erased_map(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_Erased_Monad___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Erased_map___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Erased_Monad___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Erased_Monad___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Erased_Monad___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Erased_Monad___closed__1;
x_2 = l_Erased_Monad___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Erased_Monad___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Erased_mk___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Erased_Monad___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Erased_Monad___lambda__2___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Erased_Monad___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Erased_Monad___closed__3;
x_2 = l_Erased_Monad___closed__4;
x_3 = l_Erased_Monad___closed__5;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
static lean_object* _init_l_Erased_Monad___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Erased_bind___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Erased_Monad___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Erased_Monad___closed__6;
x_2 = l_Erased_Monad___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Erased_Monad() {
_start:
{
lean_object* x_1; 
x_1 = l_Erased_Monad___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Erased_Monad___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Erased_Monad___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Erased_Monad___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Erased(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Erased_instRepr___closed__1 = _init_l_Erased_instRepr___closed__1();
lean_mark_persistent(l_Erased_instRepr___closed__1);
l_Erased_instRepr___closed__2 = _init_l_Erased_instRepr___closed__2();
lean_mark_persistent(l_Erased_instRepr___closed__2);
l_Erased_Monad___closed__1 = _init_l_Erased_Monad___closed__1();
lean_mark_persistent(l_Erased_Monad___closed__1);
l_Erased_Monad___closed__2 = _init_l_Erased_Monad___closed__2();
lean_mark_persistent(l_Erased_Monad___closed__2);
l_Erased_Monad___closed__3 = _init_l_Erased_Monad___closed__3();
lean_mark_persistent(l_Erased_Monad___closed__3);
l_Erased_Monad___closed__4 = _init_l_Erased_Monad___closed__4();
lean_mark_persistent(l_Erased_Monad___closed__4);
l_Erased_Monad___closed__5 = _init_l_Erased_Monad___closed__5();
lean_mark_persistent(l_Erased_Monad___closed__5);
l_Erased_Monad___closed__6 = _init_l_Erased_Monad___closed__6();
lean_mark_persistent(l_Erased_Monad___closed__6);
l_Erased_Monad___closed__7 = _init_l_Erased_Monad___closed__7();
lean_mark_persistent(l_Erased_Monad___closed__7);
l_Erased_Monad___closed__8 = _init_l_Erased_Monad___closed__8();
lean_mark_persistent(l_Erased_Monad___closed__8);
l_Erased_Monad = _init_l_Erased_Monad();
lean_mark_persistent(l_Erased_Monad);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
