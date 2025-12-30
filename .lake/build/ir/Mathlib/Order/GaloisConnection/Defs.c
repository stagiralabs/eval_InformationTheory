// Lean compiler output
// Module: Mathlib.Order.GaloisConnection.Defs
// Imports: Init Mathlib.Order.BoundedOrder.Basic Mathlib.Order.Monotone.Basic Mathlib.Tactic.Monotonicity.Attr Mathlib.Util.AssertExists
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
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro(lean_object*, lean_object*);
static lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___closed__1;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisInsertion_monotoneIntro___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GaloisInsertion_monotoneIntro___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_GaloisInsertion_monotoneIntro___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisInsertion___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisConnection_toGaloisInsertion___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GaloisConnection_toGaloisInsertion___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisConnection_toGaloisInsertion___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisConnection_liftOrderBot___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisConnection_liftOrderBot___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderBot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GaloisConnection_liftOrderBot(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisCoinsertion_dual___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_dual___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_dual___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisCoinsertion_dual___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_dual___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisCoinsertion_dual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_dual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisCoinsertion_dual___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisInsertion_dual___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_dual___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_dual___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisInsertion_dual___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_dual___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisInsertion_dual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_dual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisInsertion_dual___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisCoinsertion_ofDual___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_ofDual___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_ofDual___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisCoinsertion_ofDual___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_ofDual___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisCoinsertion_ofDual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_ofDual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisCoinsertion_ofDual___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisInsertion_ofDual___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisInsertion_ofDual___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1___rarg), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_GaloisCoinsertion_monotoneIntro___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = l_GaloisCoinsertion_monotoneIntro___rarg___closed__1;
x_10 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_9);
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_14, 0, x_11);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_GaloisInsertion_ofDual___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_GaloisCoinsertion_monotoneIntro___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisInsertion_monotoneIntro___at_GaloisCoinsertion_monotoneIntro___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GaloisInsertion_ofDual___at_GaloisCoinsertion_monotoneIntro___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_GaloisCoinsertion_monotoneIntro___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GaloisCoinsertion_monotoneIntro___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_GaloisCoinsertion_monotoneIntro___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GaloisConnection_toGaloisCoinsertion___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisConnection_toGaloisCoinsertion___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisConnection_toGaloisCoinsertion___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisCoinsertion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GaloisConnection_toGaloisCoinsertion(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_GaloisConnection_liftOrderTop___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisConnection_liftOrderTop___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_liftOrderTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GaloisConnection_liftOrderTop(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BoundedOrder_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Monotone_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Monotonicity_Attr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AssertExists(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_GaloisConnection_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BoundedOrder_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Monotone_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Monotonicity_Attr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AssertExists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_GaloisCoinsertion_monotoneIntro___rarg___closed__1 = _init_l_GaloisCoinsertion_monotoneIntro___rarg___closed__1();
lean_mark_persistent(l_GaloisCoinsertion_monotoneIntro___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
