// Lean compiler output
// Module: Mathlib.CategoryTheory.HomCongr
// Imports: Init Mathlib.CategoryTheory.Iso
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
lean_object* l_CategoryTheory_Iso_trans___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrLeft(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Iso_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Iso_refl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrRight(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_4);
x_12 = lean_apply_5(x_9, x_4, x_5, x_3, x_8, x_11);
x_13 = lean_apply_5(x_9, x_2, x_4, x_3, x_10, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_homCongr___elambda__1___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_2);
x_12 = lean_apply_5(x_9, x_2, x_3, x_5, x_8, x_11);
x_13 = lean_apply_5(x_9, x_4, x_2, x_5, x_10, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_homCongr___elambda__2___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_homCongr___elambda__2___rarg), 8, 7);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, x_6);
lean_closure_set(x_8, 6, x_7);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_homCongr___elambda__1___rarg), 8, 7);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_homCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_homCongr___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_CategoryTheory_Iso_symm___rarg(x_1, x_3, x_5, x_7);
lean_inc(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_10 = l_CategoryTheory_Iso_trans___rarg(x_1, x_4, x_5, x_3, x_8, x_9);
x_11 = l_CategoryTheory_Iso_trans___rarg(x_1, x_2, x_4, x_3, x_6, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongr___elambda__1___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_CategoryTheory_Iso_symm___rarg(x_1, x_2, x_4, x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_CategoryTheory_Iso_trans___rarg(x_1, x_2, x_3, x_5, x_8, x_7);
x_11 = l_CategoryTheory_Iso_trans___rarg(x_1, x_4, x_2, x_5, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongr___elambda__2___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongr___elambda__2___rarg___boxed), 8, 7);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, x_6);
lean_closure_set(x_8, 6, x_7);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongr___elambda__1___rarg___boxed), 8, 7);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongr___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Iso_isoCongr___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongr___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Iso_isoCongr___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_1);
x_6 = l_CategoryTheory_Iso_refl___rarg(x_1, x_4);
lean_inc(x_4);
x_7 = l_CategoryTheory_Iso_isoCongr___rarg(x_1, x_2, x_4, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongrLeft___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_CategoryTheory_Iso_refl___rarg(x_1, x_2);
lean_inc(x_2);
x_7 = l_CategoryTheory_Iso_isoCongr___rarg(x_1, x_2, x_3, x_2, x_4, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_isoCongrRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_isoCongrRight___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Iso(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_HomCongr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Iso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
