// Lean compiler output
// Module: Mathlib.RingTheory.Derivation.Lie
// Imports: Init Mathlib.Algebra.Lie.OfAssociative Mathlib.RingTheory.Derivation.Basic
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
lean_object* l_Derivation_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instLieRing(lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instBracket(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_instBracket___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_instBracket___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instLieRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Derivation_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
static lean_object* _init_l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_instBracket___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
lean_inc(x_3);
x_7 = lean_apply_1(x_3, x_6);
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_apply_2(x_5, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Ring_toAddCommGroup___rarg(x_3);
x_8 = lean_alloc_closure((void*)(l_Derivation_instBracket___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Derivation_instBracket(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Derivation_instBracket___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_instBracket___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Derivation_instBracket___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_mk_x27___at_Derivation_instBracket___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Derivation_mk_x27___at_Derivation_instBracket___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Derivation_instBracket___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Derivation_instBracket___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Derivation_instLieRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = l_Ring_toAddCommGroup___rarg(x_3);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = l_Algebra_id___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Derivation_instAddCommGroup___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0), x_5, x_8, x_9);
x_11 = lean_alloc_closure((void*)(l_Derivation_instBracket___rarg___boxed), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Derivation_instLieRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Derivation_instLieRing___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Derivation_instModule___rarg), 6, 3);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Derivation_instLieAlgebra___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Derivation_instLieAlgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Derivation_instLieAlgebra(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_OfAssociative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Derivation_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Derivation_Lie(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_OfAssociative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Derivation_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1 = _init_l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Derivation_instBracket___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
