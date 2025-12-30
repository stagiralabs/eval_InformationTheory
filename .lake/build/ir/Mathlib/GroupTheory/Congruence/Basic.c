// Lean compiler output
// Module: Mathlib.GroupTheory.Congruence.Basic
// Imports: Init Mathlib.Algebra.Group.Equiv.Basic Mathlib.Algebra.Group.Submonoid.Operations Mathlib.Data.Setoid.Basic Mathlib.GroupTheory.Congruence.Hom
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
LEAN_EXPORT lean_object* l_AddCon_addAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_submonoid(lean_object*);
static lean_object* l_Con_congr___closed__1;
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_ofAddSubmonoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_pi___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addKer___at_AddCon_quotientQuotientEquivQuotient___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Con_kerLift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toSubmonoid(lean_object*);
LEAN_EXPORT lean_object* l_Con_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_ofAddSubmonoid(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientKerEquivOfRightInverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientKerEquivOfRightInverse(lean_object*, lean_object*);
lean_object* l_AddCon_kerLift___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_pi(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_instSMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulKer___at_Con_quotientQuotientEquivQuotient___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_pi___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_submonoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_ofSubmonoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Quot_congr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid(lean_object*);
LEAN_EXPORT lean_object* l_Con_mulAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_ofSubmonoid(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Con_toQuotient___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Con_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_pi(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulKer___at_Con_quotientQuotientEquivQuotient___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddCon_toQuotient___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddCon_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Setoid_quotientQuotientEquivQuotient___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient(lean_object*, lean_object*);
static lean_object* l_Con_congr___closed__2;
LEAN_EXPORT lean_object* l_AddCon_congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Con_instSMul(lean_object*, lean_object*, lean_object*);
static lean_object* l_Con_quotientKerEquivOfRightInverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddCon_addKer___at_AddCon_quotientQuotientEquivQuotient___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_quotientKerEquivOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_submonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_mulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_quotientKerEquivOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Con_prod(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddCon_prod(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_pi___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_pi(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_pi___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_pi(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Con_congr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Con_congr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Con_congr___closed__1;
x_2 = l_Quot_congr___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_congr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Con_congr___closed__2;
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_congr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Con_congr(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_congr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Con_congr___closed__2;
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCon_congr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddCon_congr(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_submonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_submonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_submonoid___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_submonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Con_submonoid___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_addSubmonoid___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_addSubmonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCon_addSubmonoid___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_ofSubmonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_ofSubmonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_ofSubmonoid(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_ofAddSubmonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_ofAddSubmonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_ofAddSubmonoid(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_toSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_submonoid___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toSubmonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toSubmonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCon_addSubmonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_toAddSubmonoid___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_toAddSubmonoid___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_toAddSubmonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_toAddSubmonoid___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCon_toAddSubmonoid___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Con_quotientKerEquivOfRightInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Con_toQuotient___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_quotientKerEquivOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Con_kerLift___rarg(x_1, x_2, x_3);
x_7 = l_Con_quotientKerEquivOfRightInverse___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Con_quotientKerEquivOfRightInverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_quotientKerEquivOfRightInverse___rarg), 5, 0);
return x_3;
}
}
static lean_object* _init_l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCon_toQuotient___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientKerEquivOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_AddCon_kerLift___rarg(x_1, x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientKerEquivOfRightInverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCon_quotientKerEquivOfRightInverse___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_mulKer___at_Con_quotientQuotientEquivQuotient___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Setoid_quotientQuotientEquivQuotient___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_quotientQuotientEquivQuotient___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_mulKer___at_Con_quotientQuotientEquivQuotient___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Con_mulKer___at_Con_quotientQuotientEquivQuotient___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_ker___at_Con_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_quotientQuotientEquivQuotient___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_quotientQuotientEquivQuotient___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Con_quotientQuotientEquivQuotient(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_addKer___at_AddCon_quotientQuotientEquivQuotient___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Setoid_quotientQuotientEquivQuotient___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCon_quotientQuotientEquivQuotient___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_addKer___at_AddCon_quotientQuotientEquivQuotient___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddCon_addKer___at_AddCon_quotientQuotientEquivQuotient___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_ker___at_AddCon_quotientQuotientEquivQuotient___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCon_quotientQuotientEquivQuotient___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_quotientQuotientEquivQuotient___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCon_quotientQuotientEquivQuotient(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Con_instSMul___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_instSMul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddCon_instVAdd___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCon_instVAdd___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCon_instVAdd___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_instVAdd___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCon_instVAdd___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_instVAdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_instVAdd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_mulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_mulAction___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_mulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_addAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddCon_instVAdd___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddCon_addAction___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCon_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCon_addAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_mulDistribMulAction___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_mulDistribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_mulDistribMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Setoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Congruence_Hom(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Congruence_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Setoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Congruence_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Con_congr___closed__1 = _init_l_Con_congr___closed__1();
lean_mark_persistent(l_Con_congr___closed__1);
l_Con_congr___closed__2 = _init_l_Con_congr___closed__2();
lean_mark_persistent(l_Con_congr___closed__2);
l_Con_quotientKerEquivOfRightInverse___rarg___closed__1 = _init_l_Con_quotientKerEquivOfRightInverse___rarg___closed__1();
lean_mark_persistent(l_Con_quotientKerEquivOfRightInverse___rarg___closed__1);
l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1 = _init_l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1();
lean_mark_persistent(l_AddCon_quotientKerEquivOfRightInverse___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
