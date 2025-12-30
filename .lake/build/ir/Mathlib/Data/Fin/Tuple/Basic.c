// Lean compiler output
// Module: Mathlib.Data.Fin.Tuple.Basic
// Imports: Init Mathlib.Data.Fin.Rev Mathlib.Data.Nat.Find
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
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNth___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_succAboveCases(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_contractNth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNth___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNth___boxed(lean_object*, lean_object*);
lean_object* l_finZeroElim___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_repeat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_contractNth___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_cons(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consInduction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_removeNth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNth(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snoc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_init___boxed(lean_object*, lean_object*);
lean_object* l_Fin_addCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_tail___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_removeNth(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_find___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_contractNth___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_init(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_tail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_init___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snoc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1(lean_object*);
lean_object* l_Fin_succAbove___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocInduction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_cons___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_succAboveCases___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Fin_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_succAboveCases___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_repeat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_removeNth___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_find(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_succAboveCases___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_tail___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_tail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_contractNth(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_removeNth___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_consCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_piFinTwoEquiv(lean_object*);
LEAN_EXPORT lean_object* l_Fin_consCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_append(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_snocInduction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_piFinTwoEquiv___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Fin_snocInduction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_tail___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_tail(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_tail___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_tail___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_tail___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_tail___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_tail(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_cons(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_cases(x_1, lean_box(0), x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_cons___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_cons(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_mod(x_6, x_5);
lean_dec(x_5);
lean_inc(x_3);
x_8 = lean_apply_1(x_3, x_7);
x_9 = lean_alloc_closure((void*)(l_Fin_tail___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Fin_cases(x_1, lean_box(0), x_5, x_6, x_4);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_consEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Fin_consEquiv___elambda__2___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_Fin_consEquiv___elambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_consEquiv___elambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_consEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_consEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_consCases(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_mod(x_8, x_7);
lean_dec(x_7);
lean_inc(x_5);
x_10 = lean_apply_1(x_5, x_9);
x_11 = lean_alloc_closure((void*)(l_Fin_tail___rarg___boxed), 2, 1);
lean_closure_set(x_11, 0, x_5);
x_12 = lean_apply_2(x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Fin_consCases___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_consCases(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Fin_consInduction___rarg(x_2, x_1, x_3, x_5);
x_7 = lean_apply_4(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Fin_consInduction___rarg___lambda__1), 5, 3);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Fin_consCases(x_8, lean_box(0), lean_box(0), x_9, x_4);
lean_dec(x_8);
return x_10;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Fin_consInduction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_consInduction___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_consInduction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_consInduction___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_append(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Fin_addCases(x_1, x_2, lean_box(0), x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_append___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Fin_append(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_repeat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_nat_mod(x_5, x_1);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_repeat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_repeat(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_init___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_init(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_init___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_init___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_init(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_snoc(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_7; 
x_7 = lean_apply_1(x_3, x_5);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Fin_snoc___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_snoc(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_3, x_1);
x_5 = lean_alloc_closure((void*)(l_Fin_init___rarg), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Fin_snoc(x_1, lean_box(0), x_5, x_6, x_4);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_snocEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Fin_snocEquiv___elambda__2___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_Fin_snocEquiv___elambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_snocEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_snocEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_snocCases(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Fin_init___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_apply_1(x_5, x_1);
x_8 = lean_apply_2(x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fin_snocInduction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_Fin_init___rarg), 2, 1);
lean_closure_set(x_9, 0, x_4);
lean_inc(x_8);
x_10 = lean_apply_1(x_4, x_8);
lean_inc(x_9);
lean_inc(x_2);
x_11 = l_Fin_snocInduction___rarg(x_1, x_2, x_8, x_9);
x_12 = lean_apply_4(x_2, x_8, x_9, x_10, x_11);
return x_12;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Fin_snocInduction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_snocInduction___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_snocInduction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_snocInduction___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_succAboveCases___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_4, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
lean_dec(x_4);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_apply_1(x_3, x_4);
return x_10;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Fin_succAboveCases(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_succAboveCases___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_succAboveCases___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_succAboveCases___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_succAboveCases___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_succAboveCases(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_removeNth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Fin_succAbove___rarg(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_removeNth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_removeNth___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_removeNth___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_removeNth___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_removeNth___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_removeNth(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_succAboveCases___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_insertNth___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNth___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_insertNth___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNth___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_insertNth(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_apply_1(x_2, x_1);
x_4 = lean_alloc_closure((void*)(l_Fin_removeNth___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_insertNthEquiv___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Fin_succAboveCases___rarg(x_1, x_4, x_5, x_3);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_insertNthEquiv___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Fin_insertNthEquiv___elambda__2___rarg___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Fin_insertNthEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_insertNthEquiv___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_insertNthEquiv___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_insertNthEquiv___elambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_insertNthEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_insertNthEquiv(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_find(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_inc(x_3);
x_8 = l_Fin_find(x_7, lean_box(0), x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
lean_inc(x_7);
x_9 = lean_apply_1(x_3, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_7);
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_box(0);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Fin_find___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_find(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_3(x_5, x_9, lean_box(0), x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_4, lean_box(0), x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_Data_Fin_Tuple_Basic_0__Fin_find_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_contractNth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_4);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
lean_inc(x_4);
x_10 = lean_apply_1(x_3, x_4);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_13 = lean_apply_1(x_3, x_12);
x_14 = lean_apply_2(x_2, x_10, x_13);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_4);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Fin_contractNth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fin_contractNth___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fin_contractNth___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_contractNth___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_contractNth___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fin_contractNth(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_piFinTwoEquiv___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_finZeroElim___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_piFinTwoEquiv___elambda__1___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_Fin_cons___boxed), 5, 4);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Fin_cases(x_8, lean_box(0), x_3, x_7, x_2);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_piFinTwoEquiv___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_piFinTwoEquiv___elambda__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_piFinTwoEquiv___elambda__2___rarg), 1, 0);
x_3 = lean_alloc_closure((void*)(l_piFinTwoEquiv___elambda__1___rarg___boxed), 2, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_piFinTwoEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_piFinTwoEquiv___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Rev(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fin_Tuple_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Rev(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_piFinTwoEquiv___elambda__1___rarg___closed__1 = _init_l_piFinTwoEquiv___elambda__1___rarg___closed__1();
lean_mark_persistent(l_piFinTwoEquiv___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
