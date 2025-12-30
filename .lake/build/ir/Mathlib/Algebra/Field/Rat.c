// Lean compiler output
// Module: Mathlib.Algebra.Field.Rat
// Imports: Init Mathlib.Algebra.Field.Defs Mathlib.Data.NNRat.Defs
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
LEAN_EXPORT lean_object* l_Rat_instField___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_NNRat_instSemifield___closed__4;
static lean_object* l_Rat_instField___closed__3;
LEAN_EXPORT lean_object* l_NNRat_instInv(lean_object*);
static lean_object* l_Rat_instField___closed__1;
lean_object* l_DivisionRing_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDiv___boxed(lean_object*, lean_object*);
extern lean_object* l_instNNRatCommSemiring;
LEAN_EXPORT lean_object* l_NNRat_instSemifield;
lean_object* l_Rat_mul___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instField___closed__4;
static lean_object* l_NNRat_instSemifield___closed__2;
lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instField___closed__7;
static lean_object* l_NNRat_instSemifield___closed__5;
LEAN_EXPORT lean_object* l_NNRat_instDiv(lean_object*, lean_object*);
lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDivisionRing;
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instField___spec__1(lean_object*);
static lean_object* l_NNRat_instSemifield___closed__1;
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_instRatCastRat___boxed(lean_object*);
lean_object* l_Rat_inv(lean_object*);
lean_object* l_NNRat_instNNRatCast___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instField;
extern lean_object* l_Rat_instInv;
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instField___lambda__1(lean_object*, lean_object*);
static lean_object* l_Rat_instField___closed__5;
static lean_object* l_NNRat_instSemifield___closed__3;
static lean_object* l_Rat_instField___closed__2;
static lean_object* l_Rat_instField___closed__6;
LEAN_EXPORT lean_object* l_NNRat_instZPow(lean_object*, lean_object*);
lean_object* l_Rat_instNNRatCast___boxed(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instField___spec__1___boxed(lean_object*);
static lean_object* l_Rat_instDivisionRing___closed__1;
extern lean_object* l_Rat_instDiv;
extern lean_object* l_Rat_commRing;
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instField___spec__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_instField___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_mul(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instField___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instField___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instField___closed__1;
x_2 = lean_alloc_closure((void*)(l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instField___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instNNRatCast___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instField___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instRatCastRat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instField___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instField___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instField___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instField___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = l_Rat_commRing;
x_2 = l_Rat_instInv;
x_3 = l_Rat_instDiv;
x_4 = l_Rat_instField___closed__2;
x_5 = l_Rat_instField___closed__3;
x_6 = l_Rat_instField___closed__4;
x_7 = l_Rat_instField___closed__5;
x_8 = l_Rat_instField___closed__6;
x_9 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_4);
lean_ctor_set(x_9, 4, x_5);
lean_ctor_set(x_9, 5, x_6);
lean_ctor_set(x_9, 6, x_7);
lean_ctor_set(x_9, 7, x_8);
return x_9;
}
}
static lean_object* _init_l_Rat_instField() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instField___closed__7;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instField___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_cast___at_Rat_instField___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instField___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_instField___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Rat_instDivisionRing___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instField;
x_2 = l_Field_toDivisionRing___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instDivisionRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instDivisionRing___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_NNRat_instInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_inv(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_div(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NNRat_instDiv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_instZPow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Rat_instDivisionRing;
x_4 = l_DivisionRing_toDivInvMonoid___elambda__1___rarg(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_NNRat_instSemifield___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instDivisionRing;
x_2 = lean_alloc_closure((void*)(l_DivisionRing_toDivInvMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_NNRat_instSemifield___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NNRat_instInv), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_instSemifield___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NNRat_instDiv___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_instSemifield___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NNRat_instNNRatCast___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_instSemifield___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_instNNRatCommSemiring;
x_2 = l_NNRat_instSemifield___closed__2;
x_3 = l_NNRat_instSemifield___closed__3;
x_4 = l_NNRat_instSemifield___closed__1;
x_5 = l_NNRat_instSemifield___closed__4;
x_6 = l_Rat_instField___closed__5;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
static lean_object* _init_l_NNRat_instSemifield() {
_start:
{
lean_object* x_1; 
x_1 = l_NNRat_instSemifield___closed__5;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNRat_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Field_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNRat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_instField___closed__1 = _init_l_Rat_instField___closed__1();
lean_mark_persistent(l_Rat_instField___closed__1);
l_Rat_instField___closed__2 = _init_l_Rat_instField___closed__2();
lean_mark_persistent(l_Rat_instField___closed__2);
l_Rat_instField___closed__3 = _init_l_Rat_instField___closed__3();
lean_mark_persistent(l_Rat_instField___closed__3);
l_Rat_instField___closed__4 = _init_l_Rat_instField___closed__4();
lean_mark_persistent(l_Rat_instField___closed__4);
l_Rat_instField___closed__5 = _init_l_Rat_instField___closed__5();
lean_mark_persistent(l_Rat_instField___closed__5);
l_Rat_instField___closed__6 = _init_l_Rat_instField___closed__6();
lean_mark_persistent(l_Rat_instField___closed__6);
l_Rat_instField___closed__7 = _init_l_Rat_instField___closed__7();
lean_mark_persistent(l_Rat_instField___closed__7);
l_Rat_instField = _init_l_Rat_instField();
lean_mark_persistent(l_Rat_instField);
l_Rat_instDivisionRing___closed__1 = _init_l_Rat_instDivisionRing___closed__1();
lean_mark_persistent(l_Rat_instDivisionRing___closed__1);
l_Rat_instDivisionRing = _init_l_Rat_instDivisionRing();
lean_mark_persistent(l_Rat_instDivisionRing);
l_NNRat_instSemifield___closed__1 = _init_l_NNRat_instSemifield___closed__1();
lean_mark_persistent(l_NNRat_instSemifield___closed__1);
l_NNRat_instSemifield___closed__2 = _init_l_NNRat_instSemifield___closed__2();
lean_mark_persistent(l_NNRat_instSemifield___closed__2);
l_NNRat_instSemifield___closed__3 = _init_l_NNRat_instSemifield___closed__3();
lean_mark_persistent(l_NNRat_instSemifield___closed__3);
l_NNRat_instSemifield___closed__4 = _init_l_NNRat_instSemifield___closed__4();
lean_mark_persistent(l_NNRat_instSemifield___closed__4);
l_NNRat_instSemifield___closed__5 = _init_l_NNRat_instSemifield___closed__5();
lean_mark_persistent(l_NNRat_instSemifield___closed__5);
l_NNRat_instSemifield = _init_l_NNRat_instSemifield();
lean_mark_persistent(l_NNRat_instSemifield);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
