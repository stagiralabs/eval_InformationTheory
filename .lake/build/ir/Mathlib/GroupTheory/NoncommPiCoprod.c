// Lean compiler output
// Module: Mathlib.GroupTheory.NoncommPiCoprod
// Imports: Init Mathlib.GroupTheory.OrderOfElement Mathlib.Data.Nat.GCD.BigOperators Mathlib.Order.SupIndep
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
lean_object* l_Subgroup_subtype___rarg___boxed(lean_object*);
static lean_object* l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubgroup_subtype___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_noncommSum___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Subgroup_noncommPiCoprod___rarg___closed__1;
lean_object* l_Multiset_noncommProd___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2(lean_object*);
static lean_object* l_AddSubgroup_noncommPiCoprod___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod(lean_object*);
lean_object* l_ZeroHom_single___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2(lean_object*);
lean_object* l_OneHom_mulSingle___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Multiset_map___rarg(x_4, x_3);
x_7 = l_Multiset_noncommProd___rarg(x_1, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = l_Finset_noncommProd___at_MonoidHom_noncommPiCoprod___spec__1___rarg(x_1, lean_box(0), x_3, x_9, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MonoidHom_noncommPiCoprod___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Multiset_map___rarg(x_4, x_3);
x_7 = l_Multiset_noncommSum___rarg(x_1, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = l_Finset_noncommSum___at_AddMonoidHom_noncommPiCoprod___spec__1___rarg(x_1, lean_box(0), x_3, x_9, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprod___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AddMonoidHom_noncommPiCoprod___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_OneHom_mulSingle___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_OneHom_mulSingle___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(x_4, x_5, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___boxed), 8, 7);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
lean_closure_set(x_7, 6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprodEquiv___elambda__2___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprodEquiv___elambda__2___rarg), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
x_8 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprodEquiv___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_comp___at_MonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_ZeroHom_single___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_ZeroHom_single___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__2___rarg(x_4, x_5, x_7);
x_9 = l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___rarg(x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprod___rarg___boxed), 8, 7);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
lean_closure_set(x_7, 6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprodEquiv___elambda__2___rarg), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
x_8 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprodEquiv___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_comp___at_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddMonoidHom_noncommPiCoprodEquiv___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Multiset_map___rarg(x_4, x_3);
x_8 = l_Multiset_noncommProd___rarg(x_6, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_5);
x_9 = l_Finset_noncommProd___at_Subgroup_noncommPiCoprod___spec__2___rarg(x_1, lean_box(0), x_4, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1;
return x_2;
}
}
static lean_object* _init_l_Subgroup_noncommPiCoprod___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subgroup_noncommPiCoprod___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Subgroup_noncommPiCoprod___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg___boxed), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_noncommPiCoprod___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MonoidHom_noncommPiCoprod___at_Subgroup_noncommPiCoprod___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Subgroup_noncommPiCoprod___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_noncommPiCoprod___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Multiset_map___rarg(x_4, x_3);
x_8 = l_Multiset_noncommSum___rarg(x_6, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MonoidHom_noncommPiCoprod___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_5);
x_9 = l_Finset_noncommSum___at_AddSubgroup_noncommPiCoprod___spec__2___rarg(x_1, lean_box(0), x_4, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
static lean_object* _init_l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddSubgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1;
return x_2;
}
}
static lean_object* _init_l_AddSubgroup_noncommPiCoprod___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_AddSubgroup_noncommPiCoprod___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg___boxed), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_noncommPiCoprod___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddMonoidHom_noncommPiCoprod___at_AddSubgroup_noncommPiCoprod___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubgroup_noncommPiCoprod___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_OrderOfElement(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_GCD_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SupIndep(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_NoncommPiCoprod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_OrderOfElement(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_GCD_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SupIndep(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1 = _init_l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Subgroup_noncommPiCoprod___rarg___lambda__1___closed__1);
l_Subgroup_noncommPiCoprod___rarg___closed__1 = _init_l_Subgroup_noncommPiCoprod___rarg___closed__1();
lean_mark_persistent(l_Subgroup_noncommPiCoprod___rarg___closed__1);
l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1 = _init_l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1();
lean_mark_persistent(l_AddSubgroup_noncommPiCoprod___rarg___lambda__1___closed__1);
l_AddSubgroup_noncommPiCoprod___rarg___closed__1 = _init_l_AddSubgroup_noncommPiCoprod___rarg___closed__1();
lean_mark_persistent(l_AddSubgroup_noncommPiCoprod___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
