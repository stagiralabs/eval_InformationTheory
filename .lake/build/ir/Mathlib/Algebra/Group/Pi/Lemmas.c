// Lean compiler output
// Module: Mathlib.Algebra.Group.Pi.Lemmas
// Imports: Init Mathlib.Algebra.Group.Commute.Defs Mathlib.Algebra.Group.Hom.Instances Mathlib.Data.Set.Function Mathlib.Logic.Pairwise
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
LEAN_EXPORT lean_object* l_MulHom_compLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_single___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMulHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_compLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMulHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_compLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_coeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addMonoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_compLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_update___at_Pi_mulSingle___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_coeFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMulHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMulHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_compLeft(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Pi_constMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_OneHom_mulSingle___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMulHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_single(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_coeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_compLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_single___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_coeFn___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMulHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMulHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddHom_compLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Pi_mulHom___elambda__1___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_mulHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_mulHom___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_mulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_mulHom___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_mulHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_mulHom___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_mulHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_mulHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Pi_addHom___elambda__1___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_addHom___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_addHom___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_addHom___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_addHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_addHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_monoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_monoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Pi_monoidHom___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_monoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_monoidHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_addMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_addMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Pi_addMonoidHom___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_addMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_addMonoidHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMulHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMulHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_evalMulHom___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMulHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_evalMulHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalMulHom___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalMulHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_evalAddHom___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_evalAddHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalAddHom___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalAddHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_constMulHom___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_constMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_constMulHom___elambda__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constMulHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_constMulHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_constMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constMulHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_constAddHom___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_constAddHom___elambda__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_constAddHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constAddHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulHom_coeFn___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_coeFn___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_coeFn___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulHom_coeFn___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_coeFn___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulHom_coeFn___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddHom_coeFn___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddHom_coeFn___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddHom_coeFn___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddHom_coeFn___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_coeFn___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddHom_coeFn___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulHom_compLeft___elambda__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulHom_compLeft___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_compLeft___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulHom_compLeft___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulHom_compLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulHom_compLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddHom_compLeft___elambda__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddHom_compLeft___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddHom_compLeft___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddHom_compLeft___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddHom_compLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddHom_compLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalMonoidHom___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalAddMonoidHom___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalAddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Pi_constMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_constMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_constAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constAddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_coeFn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_coeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_coeFn___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_coeFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_coeFn(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_coeFn___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_coeFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_coeFn(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_compLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_compLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_compLeft___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_compLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_compLeft(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_compLeft___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_compLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_compLeft(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_Pi_mulSingle___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OneHom_mulSingle___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OneHom_mulSingle___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OneHom_mulSingle___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OneHom_mulSingle___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ZeroHom_single___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ZeroHom_single___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ZeroHom_single___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ZeroHom_single___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_OneHom_mulSingle___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OneHom_mulSingle___at_MonoidHom_mulSingle___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mulSingle(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_mulSingle___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_ZeroHom_single___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZeroHom_single___at_AddMonoidHom_single___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_single___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZeroHom_single___at_AddMonoidHom_single___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_single(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_single___rarg), 3, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Commute_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Hom_Instances(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Function(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Pairwise(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Pi_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Commute_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Hom_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Function(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Pi_constMonoidHom___closed__1 = _init_l_Pi_constMonoidHom___closed__1();
lean_mark_persistent(l_Pi_constMonoidHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
