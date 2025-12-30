// Lean compiler output
// Module: Mathlib.GroupTheory.Abelianization
// Imports: Init Mathlib.Data.Finite.Card Mathlib.Data.Finite.Prod Mathlib.GroupTheory.Commutator.Basic Mathlib.GroupTheory.Coset.Basic Mathlib.GroupTheory.Finiteness
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
LEAN_EXPORT lean_object* l_MulEquiv_abelianizationCongr(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_abelianizationCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_map(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_closureCommutatorRepresentatives___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientGroup_Quotient_group___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_closureCommutatorRepresentatives(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instUnique(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientGroup_fintype___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Abelianization_of___closed__1;
lean_object* l_QuotientGroup_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instFintypeOfDecidablePredMemSubgroupCommutator(lean_object*);
LEAN_EXPORT lean_object* l_commutator(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_of(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_of___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instFintypeOfDecidablePredMemSubgroupCommutator___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instUnique___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instUnique___rarg(lean_object*);
lean_object* l_Subgroup_closure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_commutator___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg___boxed(lean_object*);
lean_object* l_QuotientGroup_leftRelDecidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Abelianization_equivOfComm___rarg___closed__1;
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instUnique___rarg___boxed(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_commGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Abelianization_commGroup(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1(lean_object*, lean_object*);
lean_object* l_QuotientGroup_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_commutator___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_closure___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_commutator(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_commutator___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_commGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = l_Subgroup_closure___rarg(x_1, lean_box(0));
x_3 = l_QuotientGroup_Quotient_group___rarg(x_1, x_2, lean_box(0));
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_commGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_commGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Abelianization_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instUnique(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Abelianization_instUnique___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instUnique___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Abelianization_instUnique___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instUnique___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Abelianization_instUnique(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instFintypeOfDecidablePredMemSubgroupCommutator___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = l_Subgroup_closure___rarg(x_1, lean_box(0));
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_QuotientGroup_leftRelDecidable___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
x_6 = l_QuotientGroup_fintype___rarg(x_2, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Abelianization_instFintypeOfDecidablePredMemSubgroupCommutator(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_instFintypeOfDecidablePredMemSubgroupCommutator___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Abelianization_of___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_QuotientGroup_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Abelianization_of(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Abelianization_of___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_of___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Abelianization_of(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Abelianization_of___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_lift___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = l_Subgroup_closure___rarg(x_1, lean_box(0));
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_QuotientGroup_lift___rarg(x_1, x_5, lean_box(0), lean_box(0), x_6, x_4, lean_box(0));
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_lift___elambda__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Abelianization_lift___elambda__2___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_Abelianization_lift___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_lift___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_comp___at_Abelianization_lift___elambda__1___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Abelianization_lift___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Abelianization_lift___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Abelianization_map___spec__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Abelianization_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Abelianization_commGroup___rarg(x_3);
x_6 = l_Abelianization_of___closed__1;
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
x_8 = l_Abelianization_lift___elambda__2___rarg(x_1, lean_box(0), x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Abelianization_map(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_map___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Abelianization_map___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_comp___at_Abelianization_map___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_abelianizationCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_6 = l_Abelianization_map___rarg(x_1, lean_box(0), x_3, x_5);
x_7 = l_Equiv_symm___rarg(x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Abelianization_map___rarg(x_3, lean_box(0), x_1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_abelianizationCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulEquiv_abelianizationCongr___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_MulEquiv_abelianizationCongr___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Abelianization_equivOfComm___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Abelianization_equivOfComm___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg___boxed), 1, 0);
lean_inc(x_1);
x_3 = l_Abelianization_lift___elambda__2___rarg(x_1, lean_box(0), x_1, x_2);
x_4 = l_Abelianization_equivOfComm___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Abelianization_equivOfComm___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Abelianization_equivOfComm___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Abelianization_equivOfComm___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Abelianization_equivOfComm___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_closureCommutatorRepresentatives___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_closure___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_closureCommutatorRepresentatives(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_closureCommutatorRepresentatives___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Commutator_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Coset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Finiteness(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Abelianization(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Commutator_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Coset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Finiteness(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Abelianization_of___closed__1 = _init_l_Abelianization_of___closed__1();
lean_mark_persistent(l_Abelianization_of___closed__1);
l_Abelianization_equivOfComm___rarg___closed__1 = _init_l_Abelianization_equivOfComm___rarg___closed__1();
lean_mark_persistent(l_Abelianization_equivOfComm___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
