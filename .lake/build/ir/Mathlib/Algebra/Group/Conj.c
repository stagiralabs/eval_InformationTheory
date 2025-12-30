// Lean compiler output
// Module: Mathlib.Algebra.Group.Conj
// Imports: Init Mathlib.Algebra.Group.End Mathlib.Algebra.Group.Semiconj.Units
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
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instOne(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mk___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsConj_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited___rarg___boxed(lean_object*);
static lean_object* l_ConjClasses_map___rarg___closed__1;
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj(lean_object*, lean_object*);
static lean_object* l_ConjClasses_mkEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsConj_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mk___rarg___boxed(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instOne___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___rarg___boxed(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsConj_setoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsConj_setoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsConj_setoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mk___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ConjClasses_mk___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mk___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjClasses_mk___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjClasses_mk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjClasses_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjClasses_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instOne___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instOne(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjClasses_instOne___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instOne___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjClasses_instOne___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_ConjClasses_map___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ConjClasses_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_ConjClasses_map___rarg___closed__1;
x_4 = l_Function_comp___rarg(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ConjClasses_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ConjClasses_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ConjClasses_instDecidableEqOfDecidableRelIsConj___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instDecidableEqOfDecidableRelIsConj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjClasses_instDecidableEqOfDecidableRelIsConj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ConjClasses_mkEquiv___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ConjClasses_mkEquiv___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
static lean_object* _init_l_ConjClasses_mkEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_ConjClasses_mkEquiv___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ConjClasses_mkEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_ConjClasses_mkEquiv___elambda__2___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ConjClasses_mkEquiv___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ConjClasses_mkEquiv___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjClasses_mkEquiv___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjClasses_mkEquiv___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_mkEquiv___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ConjClasses_mkEquiv___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Semiconj_Units(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Conj(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Semiconj_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ConjClasses_map___rarg___closed__1 = _init_l_ConjClasses_map___rarg___closed__1();
lean_mark_persistent(l_ConjClasses_map___rarg___closed__1);
l_ConjClasses_mkEquiv___rarg___closed__1 = _init_l_ConjClasses_mkEquiv___rarg___closed__1();
lean_mark_persistent(l_ConjClasses_mkEquiv___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
