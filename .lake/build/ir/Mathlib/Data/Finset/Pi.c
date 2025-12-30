// Lean compiler output
// Module: Mathlib.Data.Finset.Pi
// Imports: Init Mathlib.Data.Finset.Card Mathlib.Data.Finset.Union Mathlib.Data.Multiset.Pi Mathlib.Logic.Function.DependsOn
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
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict___rarg(lean_object*, lean_object*);
lean_object* l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_piDiag___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_piDiag(lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_piDiag___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_Pi_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Pi_cons(lean_object*, lean_object*);
static lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_pi___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Pi_cons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_pi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Pi_empty(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_piDiag___rarg___closed__1;
lean_object* l_Multiset_Pi_cons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_piDiag___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict_u2082___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Pi_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_restrict___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_Pi_cons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Pi_cons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_Finset_Pi_empty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Finset_Pi_empty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_Pi_empty(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Multiset_Pi_cons___rarg___boxed), 8, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_3);
lean_closure_set(x_6, 4, x_5);
x_7 = l_Multiset_map___rarg(x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_alloc_closure((void*)(l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_5);
x_8 = l_Multiset_bind___rarg(x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_Pi_empty___boxed), 4, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Multiset_pi___at_Finset_pi___spec__1___rarg___lambda__2), 5, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2;
x_7 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_6, x_5, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_pi___at_Finset_pi___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_pi___at_Finset_pi___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_pi___at_Finset_pi___spec__1___rarg(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_pi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_pi___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Pi_cons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Multiset_Pi_cons___rarg(x_1, lean_box(0), x_2, x_3, x_4, x_5, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_Pi_cons(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_Pi_cons___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Pi_cons___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_Pi_cons___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_piDiag___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_piDiag___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_piDiag___spec__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Finset_piDiag___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_piDiag___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_piDiag___rarg___closed__1;
x_5 = l_Finset_image___at_Finset_piDiag___spec__1___rarg(x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_piDiag(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_piDiag___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_restrict___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_restrict(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict_u2082___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Finset_restrict_u2082___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_restrict_u2082___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_restrict_u2082(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Union(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Function_DependsOn(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Pi(uint8_t builtin, lean_object* w) {
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
res = initialize_Mathlib_Data_Multiset_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_DependsOn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1 = _init_l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1();
lean_mark_persistent(l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__1);
l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2 = _init_l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2();
lean_mark_persistent(l_Multiset_pi___at_Finset_pi___spec__1___rarg___closed__2);
l_Finset_piDiag___rarg___closed__1 = _init_l_Finset_piDiag___rarg___closed__1();
lean_mark_persistent(l_Finset_piDiag___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
