// Lean compiler output
// Module: Mathlib.Data.DFinsupp.FiniteInfinite
// Imports: Init Mathlib.Data.DFinsupp.Defs Mathlib.Data.Fintype.Pi
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
LEAN_EXPORT lean_object* l_DFinsupp_fintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_DFinsupp_equivFunOnFintype___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
static lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_fintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Multiset_pi___at_Finset_pi___spec__1___rarg(x_1, lean_box(0), x_2, x_4);
x_6 = l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_piFinset___at_DFinsupp_fintype___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg(x_1, x_3, lean_box(0), x_4);
x_8 = l_Multiset_map___rarg(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg(x_1, x_2, x_3, x_4, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_fintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_DFinsupp_equivFunOnFintype___rarg(x_2, x_3);
x_6 = l_Equiv_symm___rarg(x_5);
x_7 = l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_fintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DFinsupp_fintype___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Fintype_ofBijective___at_DFinsupp_fintype___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fintype_ofEquiv___at_DFinsupp_fintype___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_DFinsupp_FiniteInfinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1 = _init_l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1();
lean_mark_persistent(l_Fintype_piFinset___at_DFinsupp_fintype___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
