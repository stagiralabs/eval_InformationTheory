// Lean compiler output
// Module: Mathlib.Control.ULiftable
// Imports: Init Mathlib.Control.Monad.Basic Mathlib.Control.Monad.Cont Mathlib.Control.Monad.Writer Mathlib.Logic.Equiv.Basic Mathlib.Logic.Equiv.Functor Mathlib.Control.Lawful
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
LEAN_EXPORT lean_object* l_ULiftable_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_symm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instULiftable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_downMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_down(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instULiftable___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instULiftableULiftULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_instULiftableULiftULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_downMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instULiftable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptDown(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableId___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_up___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instULiftableULiftULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_upMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_ulift(lean_object*);
lean_object* l_WriterT_equiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WriterT_instULiftableULiftULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptDown___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg___lambda__1___boxed(lean_object*);
lean_object* l_Equiv_prodCongr___rarg(lean_object*, lean_object*);
lean_object* l_Except_map___rarg(lean_object*, lean_object*);
lean_object* l_Option_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instULiftableULiftULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_upMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instULiftable___rarg(lean_object*);
lean_object* l_Equiv_piCongr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_refl(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableReaderTULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_up(lean_object*, lean_object*);
static lean_object* l_StateT_instULiftableULiftULift___rarg___closed__1;
static lean_object* l_ULiftable_up___rarg___closed__1;
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_instULiftableULiftULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableReaderTULift___rarg(lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableContTULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableWriterTULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg___lambda__1(lean_object*);
lean_object* l_ContT_equiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instULiftableULiftULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableStateTULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_mapEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instULiftable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___rarg(lean_object*, lean_object*);
static lean_object* l_ULiftable_up___rarg___closed__2;
LEAN_EXPORT lean_object* l_ULiftable_refl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableId___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instULiftableStateTULift(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instULiftableContTULift(lean_object*, lean_object*, lean_object*);
static lean_object* l_ULiftable_adaptUp___rarg___closed__1;
LEAN_EXPORT lean_object* l_instULiftableWriterTULift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_instULiftableULiftULift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_uliftable_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_down___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULiftable_symm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_5);
x_7 = l_Equiv_symm___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ULiftable_symm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_symm___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_refl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Functor_mapEquiv___rarg(x_1, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULiftable_refl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULiftable_refl___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_ULiftable_up___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_ULiftable_up___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ULiftable_up___rarg___closed__1;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULiftable_up___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_ULiftable_up___rarg___closed__2;
x_5 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ULiftable_up(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_up___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_down___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_ULiftable_up___rarg___closed__2;
x_5 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ULiftable_down(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_down___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_ULiftable_adaptUp___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULiftable_adaptUp___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_ULiftable_up___rarg___closed__2;
x_9 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_5);
x_12 = l_ULiftable_adaptUp___rarg___closed__1;
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_6);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_11, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptUp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_adaptUp___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptUp___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ULiftable_adaptUp___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptDown___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_ULiftable_up___rarg), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_5, x_9);
x_11 = l_ULiftable_up___rarg___closed__2;
x_12 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_ULiftable_adaptDown(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_adaptDown___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_upMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_ULiftable_adaptUp___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_8);
x_10 = l_ULiftable_up___rarg___closed__2;
x_11 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_12, x_6);
x_14 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_ULiftable_upMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_upMap___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULiftable_downMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_ULiftable_adaptUp___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_5);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_6);
x_11 = l_ULiftable_up___rarg___closed__2;
x_12 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_ULiftable_downMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULiftable_downMap___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableId___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instULiftableId(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instULiftableId___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableId___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instULiftableId___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Equiv_prodCongr___rarg(x_1, x_2);
x_6 = lean_apply_3(x_3, lean_box(0), lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___elambda__1___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_1);
x_7 = l_Equiv_piCongr___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_uliftable_x27___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StateT_uliftable_x27___elambda__1___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instULiftableStateTULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULiftable_up___rarg___closed__2;
x_3 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableStateTULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instULiftableStateTULift___rarg), 1, 0);
return x_4;
}
}
static lean_object* _init_l_StateT_instULiftableULiftULift___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ULiftable_up___rarg___closed__1;
x_2 = l_ULiftable_up___rarg___closed__2;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_instULiftableULiftULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_StateT_instULiftableULiftULift___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_StateT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_instULiftableULiftULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_StateT_instULiftableULiftULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Equiv_piCongr___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ReaderT_uliftable_x27___elambda__1___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instULiftableReaderTULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULiftable_up___rarg___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableReaderTULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instULiftableReaderTULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ReaderT_instULiftableULiftULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_StateT_instULiftableULiftULift___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ReaderT_instULiftableULiftULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ReaderT_instULiftableULiftULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_2);
x_7 = l_ContT_equiv___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContT_uliftable_x27___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_uliftable_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_uliftable_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContT_uliftable_x27___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instULiftableContTULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULiftable_up___rarg___closed__2;
x_3 = lean_alloc_closure((void*)(l_ContT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableContTULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instULiftableContTULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instULiftableULiftULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_StateT_instULiftableULiftULift___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ContT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_instULiftableULiftULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContT_instULiftableULiftULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Equiv_prodCongr___rarg(x_5, x_2);
x_7 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_6);
x_8 = l_WriterT_equiv___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_WriterT_uliftable_x27___elambda__1___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WriterT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WriterT_uliftable_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_WriterT_uliftable_x27___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instULiftableWriterTULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULiftable_up___rarg___closed__2;
x_3 = lean_alloc_closure((void*)(l_WriterT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instULiftableWriterTULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instULiftableWriterTULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WriterT_instULiftableULiftULift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_StateT_instULiftableULiftULift___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_WriterT_uliftable_x27___elambda__1___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WriterT_instULiftableULiftULift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_WriterT_instULiftableULiftULift___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Except_instULiftable___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Except_instULiftable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Except_instULiftable___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Except_map___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Except_map___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Except_instULiftable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Except_instULiftable___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Option_instULiftable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Except_instULiftable___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Option_map___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Option_map___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Option_instULiftable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Option_instULiftable___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Monad_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Monad_Cont(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Monad_Writer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Lawful(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_ULiftable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Monad_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Monad_Cont(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Monad_Writer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Lawful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ULiftable_up___rarg___closed__1 = _init_l_ULiftable_up___rarg___closed__1();
lean_mark_persistent(l_ULiftable_up___rarg___closed__1);
l_ULiftable_up___rarg___closed__2 = _init_l_ULiftable_up___rarg___closed__2();
lean_mark_persistent(l_ULiftable_up___rarg___closed__2);
l_ULiftable_adaptUp___rarg___closed__1 = _init_l_ULiftable_adaptUp___rarg___closed__1();
lean_mark_persistent(l_ULiftable_adaptUp___rarg___closed__1);
l_StateT_instULiftableULiftULift___rarg___closed__1 = _init_l_StateT_instULiftableULiftULift___rarg___closed__1();
lean_mark_persistent(l_StateT_instULiftableULiftULift___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
