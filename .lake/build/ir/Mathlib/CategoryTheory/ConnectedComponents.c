// Lean compiler output
// Module: Mathlib.CategoryTheory.ConnectedComponents
// Imports: Init Mathlib.Data.List.Chain Mathlib.CategoryTheory.IsConnected Mathlib.CategoryTheory.Sigma.Basic Mathlib.CategoryTheory.FullSubcategory
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
lean_object* l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_decomposedTo(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___boxed(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eqToHom___at_CategoryTheory_ConnectedComponents_functorToDiscrete___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eqToHom___at_CategoryTheory_ConnectedComponents_functorToDiscrete___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inclusion___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent(lean_object*);
lean_object* l_CategoryTheory_discreteCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1;
static lean_object* l_CategoryTheory_instCategoryComponent___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inclusion(lean_object*);
lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1(lean_object*);
lean_object* l_Quotient_mk___rarg___boxed(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_decomposedTo___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* _init_l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Quotient_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1;
x_5 = l_Function_comp___rarg(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_mapConnectedComponents___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_mapConnectedComponents___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_mapConnectedComponents(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_instInhabitedConnectedComponents___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_instInhabitedConnectedComponents___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instInhabitedConnectedComponents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_instInhabitedConnectedComponents(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eqToHom___at_CategoryTheory_ConnectedComponents_functorToDiscrete___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_discreteCategory(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eqToHom___at_CategoryTheory_ConnectedComponents_functorToDiscrete___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_eqToHom___at_CategoryTheory_ConnectedComponents_functorToDiscrete___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_liftFunctor___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_liftFunctor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ConnectedComponents_liftFunctor(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_ConnectedComponents_liftFunctor___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___rarg), 2, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ConnectedComponents_typeToCatHomEquiv___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_CategoryTheory_instCategoryComponent___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_CategoryTheory_instCategoryComponent___rarg___closed__1;
x_4 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_instCategoryComponent___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCategoryComponent___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_instCategoryComponent___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_CategoryTheory_instCategoryComponent___rarg___closed__1;
x_4 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Component__u03b9___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Component__u03b9___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Component__u03b9___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_instCategoryComponent___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inclusion___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_inclusion___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Sigma_incl___at_CategoryTheory_inclusion___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_1(x_1, x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_3(x_10, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg___boxed), 4, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_decomposedTo___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Component__u03b9___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_decomposedTo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_decomposedTo___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Sigma_descMap___at_CategoryTheory_decomposedTo___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Sigma_desc___at_CategoryTheory_decomposedTo___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Chain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_IsConnected(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sigma_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_FullSubcategory(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_ConnectedComponents(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Chain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_IsConnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sigma_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_FullSubcategory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1 = _init_l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_mapConnectedComponents___rarg___closed__1);
l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___closed__1 = _init_l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_ConnectedComponents_functorToDiscrete___rarg___closed__1);
l_CategoryTheory_instCategoryComponent___rarg___closed__1 = _init_l_CategoryTheory_instCategoryComponent___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_instCategoryComponent___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
