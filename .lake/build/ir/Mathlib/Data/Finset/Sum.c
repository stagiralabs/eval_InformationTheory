// Lean compiler output
// Module: Mathlib.Data.Finset.Sum
// Imports: Init Mathlib.Data.Finset.Card Mathlib.Data.Finset.Union Mathlib.Data.Multiset.Sum
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
lean_object* l_Multiset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_toLeft(lean_object*, lean_object*);
static lean_object* l_Finset_toLeft___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sumEquiv___lambda__1(lean_object*);
static lean_object* l_Finset_sumEquiv___closed__1;
LEAN_EXPORT lean_object* l_Finset_toRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg(lean_object*);
lean_object* l_Finset_disjiUnion___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_toLeft___rarg___closed__3;
lean_object* l_Sum_elim___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_disjSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sumEquiv(lean_object*, lean_object*);
static lean_object* l_Finset_toLeft___rarg___closed__2;
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__2___boxed(lean_object*);
static lean_object* l_Finset_sumEquiv___closed__3;
LEAN_EXPORT lean_object* l_Finset_toRight___rarg(lean_object*);
static lean_object* l_Finset_toRight___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sumEquiv___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__2(lean_object*);
static lean_object* l_Finset_sumEquiv___closed__2;
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_disjSum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_disjSum___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_disjSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_disjSum___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_Finset_toLeft___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_toLeft___rarg___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_toLeft___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_toLeft___rarg___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_toLeft___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Finset_toLeft___rarg___closed__1;
x_2 = l_Finset_toLeft___rarg___closed__2;
x_3 = lean_alloc_closure((void*)(l_Sum_elim___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_toLeft___rarg___closed__3;
x_3 = l_Finset_disjiUnion___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_toLeft___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toLeft___rarg___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_toLeft___rarg___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_toRight___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Finset_toLeft___rarg___closed__2;
x_2 = l_Finset_toLeft___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Sum_elim___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toRight___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_toRight___rarg___closed__1;
x_3 = l_Finset_disjiUnion___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_toRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_toRight___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sumEquiv___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = l_Finset_toLeft___rarg(x_1);
x_3 = l_Finset_toRight___rarg(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sumEquiv___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Multiset_disjSum___rarg(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Finset_sumEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sumEquiv___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_sumEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sumEquiv___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_sumEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Finset_sumEquiv___closed__1;
x_2 = l_Finset_sumEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sumEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_sumEquiv___closed__3;
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Union(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Sum(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Sum(uint8_t builtin, lean_object* w) {
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
res = initialize_Mathlib_Data_Multiset_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_toLeft___rarg___closed__1 = _init_l_Finset_toLeft___rarg___closed__1();
lean_mark_persistent(l_Finset_toLeft___rarg___closed__1);
l_Finset_toLeft___rarg___closed__2 = _init_l_Finset_toLeft___rarg___closed__2();
lean_mark_persistent(l_Finset_toLeft___rarg___closed__2);
l_Finset_toLeft___rarg___closed__3 = _init_l_Finset_toLeft___rarg___closed__3();
lean_mark_persistent(l_Finset_toLeft___rarg___closed__3);
l_Finset_toRight___rarg___closed__1 = _init_l_Finset_toRight___rarg___closed__1();
lean_mark_persistent(l_Finset_toRight___rarg___closed__1);
l_Finset_sumEquiv___closed__1 = _init_l_Finset_sumEquiv___closed__1();
lean_mark_persistent(l_Finset_sumEquiv___closed__1);
l_Finset_sumEquiv___closed__2 = _init_l_Finset_sumEquiv___closed__2();
lean_mark_persistent(l_Finset_sumEquiv___closed__2);
l_Finset_sumEquiv___closed__3 = _init_l_Finset_sumEquiv___closed__3();
lean_mark_persistent(l_Finset_sumEquiv___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
