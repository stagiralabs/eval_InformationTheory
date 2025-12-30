// Lean compiler output
// Module: Mathlib.Algebra.Homology.Embedding.Basic
// Imports: Init Mathlib.Algebra.Homology.ComplexShape Mathlib.Algebra.Ring.Int.Defs Mathlib.Algebra.Ring.Nat Mathlib.Tactic.ByContra
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
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_ComplexShape_embeddingUpNat___closed__1;
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE(lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpNat___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingDownNat;
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__2;
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE(lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingDownNat___elambda__1(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op(lean_object*, lean_object*);
static lean_object* l_ComplexShape_embeddingDownNat___closed__1;
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__1;
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpNat;
LEAN_EXPORT lean_object* l_ComplexShape_down___at_ComplexShape_embeddingDownNat___spec__1;
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ComplexShape_Embedding_op___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ComplexShape_Embedding_op___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ComplexShape_Embedding_op___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComplexShape_Embedding_op___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_op___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComplexShape_Embedding_op___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ComplexShape_Embedding_mk_x27___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComplexShape_Embedding_mk_x27___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_Embedding_mk_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComplexShape_Embedding_mk_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_ComplexShape_embeddingUpNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ComplexShape_embeddingUpNat___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ComplexShape_embeddingUpNat() {
_start:
{
lean_object* x_1; 
x_1 = l_ComplexShape_embeddingUpNat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingDownNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_nat_to_int(x_1);
x_3 = lean_int_neg(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_ComplexShape_down___at_ComplexShape_embeddingDownNat___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_ComplexShape_embeddingDownNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ComplexShape_embeddingDownNat___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ComplexShape_embeddingDownNat() {
_start:
{
lean_object* x_1; 
x_1 = l_ComplexShape_embeddingDownNat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_nat_to_int(x_2);
x_4 = lean_int_add(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ComplexShape_embeddingUpIntGE___elambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntGE___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComplexShape_embeddingUpIntGE___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_nat_to_int(x_2);
x_4 = lean_int_sub(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ComplexShape_embeddingUpIntLE___elambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComplexShape_embeddingUpIntLE___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComplexShape_embeddingUpIntLE___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ComplexShape(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ByContra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_Embedding_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ComplexShape(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ByContra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__1 = _init_l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__1();
lean_mark_persistent(l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__1);
l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__2 = _init_l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__2();
lean_mark_persistent(l_ComplexShape_up___at_ComplexShape_embeddingUpNat___spec__2);
l_ComplexShape_embeddingUpNat___closed__1 = _init_l_ComplexShape_embeddingUpNat___closed__1();
lean_mark_persistent(l_ComplexShape_embeddingUpNat___closed__1);
l_ComplexShape_embeddingUpNat = _init_l_ComplexShape_embeddingUpNat();
lean_mark_persistent(l_ComplexShape_embeddingUpNat);
l_ComplexShape_down___at_ComplexShape_embeddingDownNat___spec__1 = _init_l_ComplexShape_down___at_ComplexShape_embeddingDownNat___spec__1();
lean_mark_persistent(l_ComplexShape_down___at_ComplexShape_embeddingDownNat___spec__1);
l_ComplexShape_embeddingDownNat___closed__1 = _init_l_ComplexShape_embeddingDownNat___closed__1();
lean_mark_persistent(l_ComplexShape_embeddingDownNat___closed__1);
l_ComplexShape_embeddingDownNat = _init_l_ComplexShape_embeddingDownNat();
lean_mark_persistent(l_ComplexShape_embeddingDownNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
