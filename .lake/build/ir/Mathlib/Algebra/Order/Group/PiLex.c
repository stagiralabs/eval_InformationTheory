// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.PiLex
// Imports: Init Mathlib.Algebra.Group.Pi.Basic Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Group.Synonym Mathlib.Order.PiLex
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
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
lean_object* l_Pi_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Pi_divInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Pi_instPartialOrderLexForallOfLinearOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Pi_monoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCancelCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Pi_instPartialOrderLexForallOfLinearOrder(lean_box(0), lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCancelCommMonoid___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCancelCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_Lex_orderedCancelCommMonoid___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Pi_addMonoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCancelCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Pi_instPartialOrderLexForallOfLinearOrder(lean_box(0), lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCancelCommMonoid___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCancelCommMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_Lex_orderedAddCancelCommMonoid___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCommGroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Pi_divInvMonoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCommGroup___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Pi_instPartialOrderLexForallOfLinearOrder(lean_box(0), lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedCommGroup___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_Lex_orderedCommGroup___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCommGroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Pi_subNegMonoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCommGroup___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Pi_instPartialOrderLexForallOfLinearOrder(lean_box(0), lean_box(0), x_1, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_Lex_orderedAddCommGroup___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_Lex_orderedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_Lex_orderedAddCommGroup___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_PiLex(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_PiLex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_PiLex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
