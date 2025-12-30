// Lean compiler output
// Module: Mathlib.Data.Analysis.Filter
// Imports: Init Mathlib.Order.Filter.Cofinite
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
lean_object* l_CompleteLattice_toCompleteSemilatticeInf___rarg(lean_object*);
static lean_object* l_Filter_Realizer_ofFilter___closed__2;
LEAN_EXPORT lean_object* l_Filter_Realizer_top(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_toFilter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bot(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_comap(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_iSup___rarg___closed__2;
LEAN_EXPORT lean_object* l_Filter_Realizer_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_principal___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_ofFilter___closed__4;
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_principal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedCFilter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_instInhabitedPrincipal___closed__1;
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Filter_Realizer_iSup___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_prod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_inf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedCFilter(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_toRealizer___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg(lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter___lambda__1(lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_ofFilter___closed__3;
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Filter_Realizer_iSup___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_principal___closed__2;
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_map___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_toRealizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_comap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_comap___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup(lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_ofFilter___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_CFilter_toFilter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_toRealizer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_inf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_sup(lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_iSup___rarg___closed__1;
LEAN_EXPORT lean_object* l_Filter_Realizer_prod___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_instInhabitedCFilter___rarg___closed__1;
LEAN_EXPORT lean_object* l_Filter_Realizer_instInhabitedPrincipal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_inf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_principal___lambda__1(lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_iSup___rarg___closed__3;
lean_object* l_Set_instCompleteAtomicBooleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall(lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_Realizer_principal___closed__1;
static lean_object* l_Filter_Realizer_ofFilter___closed__1;
LEAN_EXPORT lean_object* l_instInhabitedCFilter___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedCFilter___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_instInhabitedCFilter___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instInhabitedCFilter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_instInhabitedCFilter___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_instInhabitedCFilter___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instInhabitedCFilter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInhabitedCFilter___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CFilter_instCoeFunForall___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_instCoeFunForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CFilter_instCoeFunForall(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__2___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_inc(x_9);
x_10 = lean_apply_1(x_9, x_6);
x_11 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__1___rarg), 5, 3);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_9);
lean_ctor_set(x_3, 2, x_11);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_12);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_inc(x_16);
x_17 = lean_apply_1(x_16, x_13);
x_18 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__1___rarg), 5, 3);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_16);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CFilter_ofEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_toFilter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_toFilter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CFilter_toFilter(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CFilter_toRealizer___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CFilter_toRealizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CFilter_toRealizer___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CFilter_toRealizer___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CFilter_toRealizer___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Filter_Realizer_ofEq___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_Realizer_ofEq___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_Realizer_ofEq(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Filter_Realizer_ofFilter___lambda__1___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_ofFilter___lambda__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_Filter_Realizer_ofFilter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_instCompleteAtomicBooleanAlgebra(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Filter_Realizer_ofFilter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_Realizer_ofFilter___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_Realizer_ofFilter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_Realizer_ofFilter___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_Realizer_ofFilter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Filter_Realizer_ofFilter___closed__3;
x_2 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, lean_box(0));
lean_ctor_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_ofFilter___closed__4;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofFilter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_ofFilter(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_2, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_4);
x_9 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__1___rarg), 5, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_7);
lean_ctor_set(x_2, 2, x_9);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_inc(x_12);
x_13 = lean_apply_1(x_12, x_10);
x_14 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___elambda__1___rarg), 5, 3);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_12);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, lean_box(0));
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Realizer_ofEquiv___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_ofEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Realizer_ofEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_principal___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_Filter_Realizer_principal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_Realizer_principal___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_Realizer_principal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Filter_Realizer_principal___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, lean_box(0));
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_principal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_principal___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_principal___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_principal___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Filter_Realizer_instInhabitedPrincipal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_Realizer_principal(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_instInhabitedPrincipal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Realizer_instInhabitedPrincipal___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_top(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_Realizer_instInhabitedPrincipal___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_Realizer_instInhabitedPrincipal___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_map___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, lean_box(0));
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Filter_Realizer_map___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_Realizer_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_comap___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, lean_box(0));
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_comap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Filter_Realizer_comap___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_comap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_Realizer_comap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_10, x_5, x_8);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_12, x_6, x_9);
lean_ctor_set(x_4, 1, x_13);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_4);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_2(x_16, x_5, x_14);
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_apply_2(x_18, x_6, x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Filter_Realizer_sup___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_2, 0);
lean_dec(x_10);
lean_ctor_set(x_2, 2, x_6);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, lean_box(0));
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_sup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Realizer_sup___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_sup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Realizer_sup(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_inf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Filter_Realizer_sup___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_2, 0);
lean_dec(x_10);
lean_ctor_set(x_2, 2, x_6);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, lean_box(0));
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_inf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Realizer_inf___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_inf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Realizer_inf(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_closure((void*)(l_Filter_Realizer_cofinite___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_cofinite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_Realizer_cofinite___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
x_8 = lean_apply_2(x_2, x_4, lean_box(0));
x_9 = lean_apply_2(x_3, x_4, lean_box(0));
x_10 = lean_apply_2(x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_10, x_5, x_8);
x_12 = lean_alloc_closure((void*)(l_Filter_Realizer_bind___rarg___lambda__2), 5, 3);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_6);
lean_closure_set(x_12, 2, x_9);
lean_ctor_set(x_4, 1, x_12);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_15, x_5, x_13);
x_17 = lean_alloc_closure((void*)(l_Filter_Realizer_bind___rarg___lambda__2), 5, 3);
lean_closure_set(x_17, 0, x_2);
lean_closure_set(x_17, 1, x_6);
lean_closure_set(x_17, 2, x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_Filter_Realizer_bind___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_Filter_Realizer_bind___rarg___lambda__3), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Filter_Realizer_bind___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_bind___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_Realizer_bind(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Filter_Realizer_iSup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_2(x_3, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Filter_Realizer_iSup___rarg___lambda__2), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Filter_Realizer_iSup___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_Realizer_iSup___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_Realizer_iSup___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_Realizer_iSup___rarg___lambda__3), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_Realizer_iSup___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_Realizer_iSup___rarg___closed__1;
x_2 = l_Filter_Realizer_iSup___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Filter_Realizer_instInhabitedPrincipal___closed__1;
x_3 = l_Filter_Realizer_bind___rarg(x_2, x_1);
x_4 = l_Filter_Realizer_iSup___rarg___closed__3;
x_5 = l_CFilter_ofEquiv___at_Filter_Realizer_ofEquiv___spec__1___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Realizer_iSup___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Filter_Realizer_iSup___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iSup___at_Filter_Realizer_iSup___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_iSup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Realizer_iSup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_prod___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Filter_Realizer_comap___rarg(x_1);
x_4 = l_Filter_Realizer_comap___rarg(x_2);
x_5 = l_Filter_Realizer_inf___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_Realizer_prod___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_Realizer_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_Realizer_prod(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Cofinite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Analysis_Filter(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Cofinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instInhabitedCFilter___rarg___closed__1 = _init_l_instInhabitedCFilter___rarg___closed__1();
lean_mark_persistent(l_instInhabitedCFilter___rarg___closed__1);
l_Filter_Realizer_ofFilter___lambda__1___closed__1 = _init_l_Filter_Realizer_ofFilter___lambda__1___closed__1();
lean_mark_persistent(l_Filter_Realizer_ofFilter___lambda__1___closed__1);
l_Filter_Realizer_ofFilter___closed__1 = _init_l_Filter_Realizer_ofFilter___closed__1();
lean_mark_persistent(l_Filter_Realizer_ofFilter___closed__1);
l_Filter_Realizer_ofFilter___closed__2 = _init_l_Filter_Realizer_ofFilter___closed__2();
lean_mark_persistent(l_Filter_Realizer_ofFilter___closed__2);
l_Filter_Realizer_ofFilter___closed__3 = _init_l_Filter_Realizer_ofFilter___closed__3();
lean_mark_persistent(l_Filter_Realizer_ofFilter___closed__3);
l_Filter_Realizer_ofFilter___closed__4 = _init_l_Filter_Realizer_ofFilter___closed__4();
lean_mark_persistent(l_Filter_Realizer_ofFilter___closed__4);
l_Filter_Realizer_principal___closed__1 = _init_l_Filter_Realizer_principal___closed__1();
lean_mark_persistent(l_Filter_Realizer_principal___closed__1);
l_Filter_Realizer_principal___closed__2 = _init_l_Filter_Realizer_principal___closed__2();
lean_mark_persistent(l_Filter_Realizer_principal___closed__2);
l_Filter_Realizer_instInhabitedPrincipal___closed__1 = _init_l_Filter_Realizer_instInhabitedPrincipal___closed__1();
lean_mark_persistent(l_Filter_Realizer_instInhabitedPrincipal___closed__1);
l_Filter_Realizer_iSup___rarg___closed__1 = _init_l_Filter_Realizer_iSup___rarg___closed__1();
lean_mark_persistent(l_Filter_Realizer_iSup___rarg___closed__1);
l_Filter_Realizer_iSup___rarg___closed__2 = _init_l_Filter_Realizer_iSup___rarg___closed__2();
lean_mark_persistent(l_Filter_Realizer_iSup___rarg___closed__2);
l_Filter_Realizer_iSup___rarg___closed__3 = _init_l_Filter_Realizer_iSup___rarg___closed__3();
lean_mark_persistent(l_Filter_Realizer_iSup___rarg___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
