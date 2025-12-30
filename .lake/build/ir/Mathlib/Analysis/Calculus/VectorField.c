// Lean compiler output
// Module: Mathlib.Analysis.Calculus.VectorField
// Imports: Init Mathlib.Analysis.Calculus.FDeriv.Symmetric
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
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracket___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracket___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracket___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracketWithin___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_NormedAddCommGroup_toNormedAddGroup___rarg(lean_object*);
lean_object* l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracket___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracketWithin___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracket(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_VectorField_lieBracket___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracket___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracket___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_1);
x_6 = l_NormedAddCommGroup_toNormedAddGroup___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_1);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_5);
x_14 = lean_apply_1(x_3, x_5);
lean_inc(x_13);
x_15 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____rarg(x_13, x_2, x_12, x_4, lean_box(0), x_5);
x_16 = lean_apply_1(x_15, x_14);
lean_inc(x_5);
x_17 = lean_apply_1(x_4, x_5);
x_18 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____rarg(x_13, x_2, x_12, x_3, lean_box(0), x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_12);
x_19 = lean_apply_1(x_18, x_17);
x_20 = lean_apply_2(x_8, x_16, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracket(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_VectorField_lieBracket___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracket___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_VectorField_lieBracket___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracket___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_VectorField_lieBracket___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracket___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_VectorField_lieBracket(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracketWithin___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_1);
x_7 = l_NormedAddCommGroup_toNormedAddGroup___rarg(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_1);
x_10 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_1);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_6);
x_15 = lean_apply_1(x_3, x_6);
lean_inc(x_14);
x_16 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____rarg(x_14, x_2, x_13, x_4, lean_box(0), x_6);
x_17 = lean_apply_1(x_16, x_15);
lean_inc(x_6);
x_18 = lean_apply_1(x_4, x_6);
x_19 = l_definition____x40_Mathlib_Analysis_Calculus_FDeriv_Basic___hyg_578____rarg(x_14, x_2, x_13, x_3, lean_box(0), x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_13);
x_20 = lean_apply_1(x_19, x_18);
x_21 = lean_apply_2(x_9, x_17, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_VectorField_lieBracketWithin___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_VectorField_lieBracketWithin___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_VectorField_lieBracketWithin___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_VectorField_lieBracketWithin___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_VectorField_lieBracketWithin___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_VectorField_lieBracketWithin(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Symmetric(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_VectorField(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1 = _init_l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_VectorField_lieBracket___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
