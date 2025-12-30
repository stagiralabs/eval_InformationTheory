// Lean compiler output
// Module: Mathlib.Algebra.Group.ConjFinite
// Imports: Init Mathlib.Algebra.Group.Conj Mathlib.Data.Fintype.Units
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
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1;
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conjugatesOf_fintype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_image___at_Quotient_fintype___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype(lean_object*);
lean_object* l_Quotient_mk_x27_x27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier___boxed(lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_conjugatesOf_fintype(lean_object*, lean_object*);
lean_object* l_instFintypeUnitsOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conjugatesOf_fintype___boxed(lean_object*, lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Quotient_mk_x27_x27___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1;
x_5 = l_Finset_image___at_Quotient_fintype___spec__2___rarg(x_3, x_2, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instFintypeConjClassesOfDecidableRelIsConj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instFintypeConjClassesOfDecidableRelIsConj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instFintypeConjClassesOfDecidableRelIsConj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_Monoid_toMulOneClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_7);
lean_inc(x_8);
x_9 = lean_apply_2(x_7, x_8, x_2);
x_10 = lean_apply_2(x_7, x_3, x_8);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT uint8_t l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_5);
lean_closure_set(x_6, 3, x_2);
x_7 = l_instFintypeUnitsOfDecidableEq___rarg(x_1, x_3, x_2);
x_8 = l_Finset_decidableExistsAndFinset___rarg(x_7, lean_box(0), x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_instDecidableRelIsConjOfDecidableEqOfFintype___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_conjugatesOf_fintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Subtype_fintype___rarg(x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_conjugatesOf_fintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_conjugatesOf_fintype___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conjugatesOf_fintype___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_conjugatesOf_fintype(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_conjugatesOf_fintype___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ConjClasses_instFintypeElemCarrier___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ConjClasses_instFintypeElemCarrier___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ConjClasses_instFintypeElemCarrier(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Conj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Units(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_ConjFinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Conj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1 = _init_l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1();
lean_mark_persistent(l_instFintypeConjClassesOfDecidableRelIsConj___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
