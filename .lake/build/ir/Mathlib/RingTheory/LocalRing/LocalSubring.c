// Lean compiler output
// Module: Mathlib.RingTheory.LocalRing.LocalSubring
// Imports: Init Mathlib.Tactic.FieldSimp Mathlib.RingTheory.LocalRing.RingHom.Basic Mathlib.RingTheory.Localization.AtPrime
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
LEAN_EXPORT lean_object* l_LocalSubring_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_instPartialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_map(lean_object*, lean_object*, lean_object*);
lean_object* l_Subring_map___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LocalSubring_instPartialOrder___closed__1;
LEAN_EXPORT lean_object* l_LocalSubring_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_map___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subring_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_instPartialOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_range___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_range(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_copy(lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocalSubring_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subring_copy___rarg(x_1, x_2, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_copy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LocalSubring_copy___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LocalSubring_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subring_map___rarg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LocalSubring_map___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LocalSubring_map___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LocalSubring_map(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_range___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = l_Subring_map___rarg(x_2, x_5, x_6);
lean_dec(x_6);
x_8 = l_Subring_copy___rarg(x_2, x_7, lean_box(0), lean_box(0));
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_range(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LocalSubring_range___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_range___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LocalSubring_range___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_LocalSubring_instPartialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_instPartialOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocalSubring_instPartialOrder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocalSubring_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocalSubring_instPartialOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_RingHom_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_AtPrime(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_LocalRing_LocalSubring(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_RingHom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_AtPrime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LocalSubring_instPartialOrder___closed__1 = _init_l_LocalSubring_instPartialOrder___closed__1();
lean_mark_persistent(l_LocalSubring_instPartialOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
