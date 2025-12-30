// Lean compiler output
// Module: Mathlib.Data.Fintype.Pi
// Imports: Init Mathlib.Data.Finset.Pi Mathlib.Data.Fintype.Basic Mathlib.Data.Set.Finite.Basic
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
lean_object* l_Multiset_pi___at_Finset_pi___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instFintype(lean_object*, lean_object*);
static lean_object* l_Fintype_piFinset___rarg___closed__1;
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_instFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_RelHom_instFintype___rarg___closed__2;
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_RelHom_instFintype___rarg___closed__1;
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instFintype___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_decidableForallFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Fintype_piFinset___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_piFinset___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Multiset_pi___at_Finset_pi___spec__1___rarg(x_1, lean_box(0), x_2, x_4);
x_6 = l_Fintype_piFinset___rarg___closed__1;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_piFinset___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Multiset_pi___at_Finset_pi___spec__1___rarg(x_1, lean_box(0), x_2, x_4);
x_6 = l_Fintype_piFinset___rarg___closed__1;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_instFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_1, x_2, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_instFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_instFintype___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_2);
x_7 = lean_apply_1(x_1, x_3);
x_8 = lean_apply_2(x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_apply_2(x_1, x_2, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_5);
lean_closure_set(x_8, 3, x_4);
x_9 = l_forall__prop__decidable___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__2), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_3);
x_7 = l_Fintype_decidableForallFintype___rarg(x_6, x_4);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
x_6 = l_Fintype_decidableForallFintype___rarg(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4___boxed), 4, 3);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_1);
x_11 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5___boxed), 2, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_3, x_1, lean_box(0), x_11);
x_13 = l_Subtype_fintype___rarg(x_10, x_12);
x_14 = l_Multiset_map___rarg(x_8, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), x_6, x_7, x_9, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_RelHom_instFintype___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_RelHom_instFintype___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_RelHom_instFintype___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RelHom_instFintype___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_RelHom_instFintype___rarg___closed__2;
x_9 = l_Fintype_ofEquiv___at_RelHom_instFintype___spec__1___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RelHom_instFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelHom_instFintype___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__4(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fintype_ofBijective___at_RelHom_instFintype___spec__2___rarg___lambda__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelHom_instFintype___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelHom_instFintype___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fintype_piFinset___rarg___closed__1 = _init_l_Fintype_piFinset___rarg___closed__1();
lean_mark_persistent(l_Fintype_piFinset___rarg___closed__1);
l_RelHom_instFintype___rarg___closed__1 = _init_l_RelHom_instFintype___rarg___closed__1();
lean_mark_persistent(l_RelHom_instFintype___rarg___closed__1);
l_RelHom_instFintype___rarg___closed__2 = _init_l_RelHom_instFintype___rarg___closed__2();
lean_mark_persistent(l_RelHom_instFintype___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
