// Lean compiler output
// Module: Mathlib.Data.Fin.Tuple.Curry
// Imports: Init Mathlib.Data.Fin.Tuple.Basic Mathlib.Logic.Equiv.Fin Mathlib.Logic.Function.OfArity
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
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_succ___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_uncurry___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_curryEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_curry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_FromTypes_curry___closed__1;
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_uncurry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_curryEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_FromTypes_uncurry___closed__1;
LEAN_EXPORT lean_object* l_Function_FromTypes_curry(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cons___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_isEmptyElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_curry___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_dcomp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_OfArity_curry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Function_FromTypes_uncurry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_succ___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
lean_dec(x_1);
x_10 = lean_nat_add(x_9, x_8);
x_11 = lean_nat_mod(x_6, x_10);
lean_dec(x_10);
lean_inc(x_5);
x_12 = lean_apply_1(x_5, x_11);
x_13 = lean_apply_1(x_4, x_12);
x_14 = lean_alloc_closure((void*)(l_Function_FromTypes_uncurry___lambda__1___boxed), 3, 1);
lean_closure_set(x_14, 0, x_5);
x_15 = l_Function_FromTypes_uncurry___closed__1;
x_16 = lean_alloc_closure((void*)(l_Function_dcomp___rarg), 3, 2);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
x_1 = x_9;
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = x_13;
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_1);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_uncurry___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_FromTypes_uncurry___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Fin_cons___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Function_FromTypes_curry___lambda__1), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
lean_closure_set(x_4, 2, x_2);
x_5 = l_Function_FromTypes_curry(x_1, lean_box(0), lean_box(0), x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Function_FromTypes_curry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_isEmptyElim___boxed), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_FromTypes_curry___lambda__2), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Function_FromTypes_curry___closed__1;
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_curry(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_FromTypes_uncurry(x_1, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_curry(x_1, lean_box(0), lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Function_FromTypes_curryEquiv___elambda__2___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, lean_box(0));
x_5 = lean_alloc_closure((void*)(l_Function_FromTypes_curryEquiv___elambda__1), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, lean_box(0));
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_curryEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_curryEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_uncurry___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_FromTypes_uncurry(x_1, lean_box(0), lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_uncurry(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_OfArity_uncurry___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_curry___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Function_FromTypes_curry(x_1, lean_box(0), lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_curry(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_OfArity_curry___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_curry___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Function_OfArity_curry___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_curryEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Function_FromTypes_curryEquiv(x_1, lean_box(0), lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_OfArity_curryEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_OfArity_curryEquiv___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Tuple_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Function_OfArity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fin_Tuple_Curry(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Tuple_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_OfArity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Function_FromTypes_uncurry___closed__1 = _init_l_Function_FromTypes_uncurry___closed__1();
lean_mark_persistent(l_Function_FromTypes_uncurry___closed__1);
l_Function_FromTypes_curry___closed__1 = _init_l_Function_FromTypes_curry___closed__1();
lean_mark_persistent(l_Function_FromTypes_curry___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
