// Lean compiler output
// Module: Mathlib.CategoryTheory.Monad.EquivMon
// Imports: Init Mathlib.CategoryTheory.Monad.Basic Mathlib.CategoryTheory.Monoidal.End Mathlib.CategoryTheory.Monoidal.Mon_
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
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon(lean_object*);
static lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_id___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monToMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monToMonad(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Monad_monadToMon___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_toMon___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_toMon___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Monad_toMon___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Monad_monadToMon___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadToMon___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_toMon___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_CategoryTheory_Monad_monadToMon___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadToMon___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadToMon___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Monad_monadToMon___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_ofMon___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_ofMon___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Monad_ofMon___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monToMonad___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_ofMon___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_CategoryTheory_Monad_monadToMon___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monToMonad(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monToMonad___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1;
x_3 = l_CategoryTheory_Monad_monadToMon___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_3);
x_8 = lean_apply_1(x_7, x_3);
lean_inc(x_4);
x_9 = lean_apply_1(x_7, x_4);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_3(x_10, x_3, x_4, x_5);
x_12 = lean_apply_3(x_6, x_8, x_9, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__2), 5, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___lambda__2), 5, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1;
x_3 = l_CategoryTheory_Monad_monadToMon___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_id___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_2 = l_CategoryTheory_Monad_monadToMon___rarg(x_1);
lean_inc(x_1);
x_3 = l_CategoryTheory_Monad_monToMonad___rarg(x_1);
x_4 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg(x_1, x_2, x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__2), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__2), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_inc(x_2);
lean_inc(x_3);
x_9 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg(x_1, x_3, x_2);
x_10 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg(x_1);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__3), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_1);
x_12 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg___lambda__3), 3, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_8);
lean_ctor_set(x_14, 3, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Monad_monadMonEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Monad_monadMonEquiv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_comp___at_CategoryTheory_Monad_monadMonEquiv___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Mon__(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monad_EquivMon(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Mon__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Monad_monadToMon___rarg___closed__1 = _init_l_CategoryTheory_Monad_monadToMon___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Monad_monadToMon___rarg___closed__1);
l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1 = _init_l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_id___at_CategoryTheory_Monad_monadMonEquiv___spec__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
