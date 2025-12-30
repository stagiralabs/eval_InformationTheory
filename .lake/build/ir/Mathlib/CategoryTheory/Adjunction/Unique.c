// Lean compiler output
// Module: Mathlib.CategoryTheory.Adjunction.Unique
// Imports: Init Mathlib.CategoryTheory.Adjunction.Mates
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
lean_object* l_CategoryTheory_conjugateIsoEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natIsoEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_leftAdjointUniq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_leftAdjointUniq(lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_id___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_conjugateEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_rightAdjointUniq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natTransEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_conjugateIsoEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_rightAdjointUniq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natTransEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natIsoEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_leftAdjointUniq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc_n(x_5, 2);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_CategoryTheory_conjugateIsoEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_5, x_6, x_7);
lean_inc(x_1);
x_9 = l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg(x_1, x_2, x_5);
x_10 = l_Equiv_symm___elambda__2___rarg(x_8, x_9);
x_11 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg(x_1, x_2, x_4, x_3, x_10);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_leftAdjointUniq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Adjunction_leftAdjointUniq___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Adjunction_leftAdjointUniq___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_rightAdjointUniq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg(x_1, x_2, x_3);
lean_inc(x_3);
x_9 = l_CategoryTheory_conjugateIsoEquiv___elambda__2___rarg(x_1, x_2, x_3, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_rightAdjointUniq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Adjunction_rightAdjointUniq___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Iso_refl___at_CategoryTheory_Adjunction_rightAdjointUniq___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natTransEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_conjugateEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natTransEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Adjunction_natTransEquiv___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natIsoEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_conjugateIsoEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_natIsoEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Adjunction_natIsoEquiv___rarg), 8, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Mates(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Unique(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Mates(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
