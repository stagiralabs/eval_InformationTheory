// Lean compiler output
// Module: Mathlib.Control.Monad.Cont
// Imports: Init Mathlib.Control.Monad.Basic Mathlib.Control.Monad.Writer Mathlib.Control.Lawful Batteries.Tactic.Congr Batteries.Lean.Except
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
LEAN_EXPORT lean_object* l_instMonadContStateT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadCont_goto___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_WriterT_callCC___rarg___closed__1;
LEAN_EXPORT lean_object* l_ContT_instMonadCont(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContOptionT(lean_object*);
LEAN_EXPORT lean_object* l_StateT_mkLabel(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_callCC___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__6;
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__2;
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel(lean_object*);
LEAN_EXPORT lean_object* l_StateT_callCC(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContT_monadLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_callCC___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__1;
LEAN_EXPORT lean_object* l_ContT_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadCont___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_mkLabel___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__3;
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_mkLabel___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_withContT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_callCC___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_callCC___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mkLabel(lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadLiftOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_callCC___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfEmptyCollection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_callCC(lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__10;
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_callCC(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_callCC(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_withContT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContOptionT___rarg(lean_object*, lean_object*);
static lean_object* l_ReaderT_mkLabel___rarg___closed__1;
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfEmptyCollection___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27(lean_object*);
static lean_object* l_ContT_instMonad___closed__5;
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WriterT_run___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_map(lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__8;
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContExceptT(lean_object*);
LEAN_EXPORT lean_object* l_instMonadContReaderT___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_mkLabel___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__ExceptT_run__bind_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadLiftOfMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContT_run___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__4;
LEAN_EXPORT lean_object* l_ExceptT_callCC___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_callCC(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_monadLift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadCont_goto(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_callCC_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__ExceptT_run__bind_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_mkLabel(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ContT_instMonad___closed__7;
LEAN_EXPORT lean_object* l_ExceptT_callCC___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContReaderT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_callCC___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_mkLabel___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadContExceptT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadContStateT___rarg(lean_object*);
static lean_object* l_ExceptT_mkLabel___elambda__1___rarg___closed__1;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WriterT_mkLabel___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_mkLabel(lean_object*);
LEAN_EXPORT lean_object* l_WriterT_callCC_x27(lean_object*);
static lean_object* l_ContT_instMonad___closed__9;
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OptionT_callCC___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MonadCont_goto___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonadCont_goto(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonadCont_goto___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_run___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_run(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContT_run___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContT_map___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_withContT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_withContT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContT_withContT___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__3___boxed), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_2, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__6), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__3___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_2, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__8), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_apply_2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__10___boxed), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__12), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
static lean_object* _init_l_ContT_instMonad___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__2), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__4), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ContT_instMonad___closed__1;
x_2 = l_ContT_instMonad___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_ContT_instMonad___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__5), 3, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__7), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__9), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__11), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_ContT_instMonad___closed__3;
x_2 = l_ContT_instMonad___closed__4;
x_3 = l_ContT_instMonad___closed__5;
x_4 = l_ContT_instMonad___closed__6;
x_5 = l_ContT_instMonad___closed__7;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_ContT_instMonad___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__13), 5, 0);
return x_1;
}
}
static lean_object* _init_l_ContT_instMonad___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ContT_instMonad___closed__8;
x_2 = l_ContT_instMonad___closed__9;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContT_instMonad___closed__10;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ContT_instMonad___lambda__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonad___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ContT_instMonad___lambda__10(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_monadLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContT_monadLift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContT_monadLift___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadLiftOfMonad___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContT_monadLift___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadLiftOfMonad(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContT_instMonadLiftOfMonad___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadCont___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__3___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadCont(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContT_instMonadCont___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, lean_box(0), x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_3, x_5);
x_8 = lean_alloc_closure((void*)(l_ContT_instMonad___lambda__12), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_apply_3(x_6, lean_box(0), x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ContT_instMonadExcept___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_ContT_instMonadExcept___rarg___lambda__2), 5, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadExcept(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ContT_instMonadExcept___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContT_instMonadExcept___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContT_instMonadExcept___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_ExceptT_mkLabel___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ExceptT_mkLabel___elambda__1___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_apply_1(x_5, x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_ExceptT_mkLabel___elambda__1___rarg___closed__1;
x_13 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ExceptT_mkLabel___elambda__1___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mkLabel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ExceptT_mkLabel___elambda__1___rarg), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, lean_box(0));
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mkLabel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ExceptT_mkLabel___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ExceptT_callCC___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_ExceptT_mkLabel___elambda__1___rarg), 6, 5);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, lean_box(0));
lean_closure_set(x_4, 3, lean_box(0));
lean_closure_set(x_4, 4, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ExceptT_callCC___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_ExceptT_callCC___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_apply_3(x_3, lean_box(0), lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ExceptT_callCC(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ExceptT_callCC___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMonadContExceptT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ExceptT_callCC___rarg), 6, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instMonadContExceptT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMonadContExceptT___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__ExceptT_run__bind_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__ExceptT_run__bind_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Control_Monad_Cont_0__ExceptT_run__bind_match__1_splitter___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_OptionT_mkLabel___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_OptionT_mkLabel___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_mkLabel___elambda__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OptionT_mkLabel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OptionT_mkLabel___elambda__1___rarg), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, lean_box(0));
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OptionT_mkLabel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_mkLabel___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OptionT_callCC___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_OptionT_mkLabel___elambda__1___rarg), 5, 4);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, lean_box(0));
lean_closure_set(x_4, 3, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OptionT_callCC___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_OptionT_callCC___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_3(x_2, lean_box(0), lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OptionT_callCC(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_callCC___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMonadContOptionT___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OptionT_callCC___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonadContOptionT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMonadContOptionT___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_2);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Control_Monad_Cont_0__OptionT_run__bind_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
x_9 = lean_apply_1(x_6, x_8);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_WriterT_mkLabel___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_5);
x_14 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_9);
return x_14;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_mkLabel___elambda__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_WriterT_mkLabel___elambda__1___rarg), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_mkLabel___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_apply_1(x_6, x_9);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_WriterT_mkLabel___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_14, 0, x_8);
x_15 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_mkLabel_x27___elambda__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_WriterT_mkLabel_x27___elambda__1___rarg), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, lean_box(0));
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WriterT_mkLabel_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_mkLabel_x27___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_WriterT_callCC___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WriterT_run___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WriterT_callCC___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_alloc_closure((void*)(l_WriterT_mkLabel___rarg), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, lean_box(0));
lean_closure_set(x_8, 4, x_6);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l_WriterT_callCC___rarg___closed__1;
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_3(x_2, lean_box(0), lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_WriterT_callCC(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_callCC___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WriterT_callCC_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_alloc_closure((void*)(l_WriterT_mkLabel_x27___rarg), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, lean_box(0));
lean_closure_set(x_8, 4, x_6);
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l_WriterT_callCC___rarg___closed__1;
x_11 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_3(x_2, lean_box(0), lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_WriterT_callCC_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WriterT_callCC_x27___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfEmptyCollection___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_WriterT_callCC___rarg(x_1, x_3, lean_box(0), lean_box(0), lean_box(0), x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfEmptyCollection(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMonadContWriterTOfMonadOfEmptyCollection___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_WriterT_callCC_x27___rarg(x_1, x_3, lean_box(0), lean_box(0), lean_box(0), x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instMonadContWriterTOfMonadOfMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMonadContWriterTOfMonadOfMonoid___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_mkLabel___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_mkLabel___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StateT_mkLabel___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_mkLabel___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StateT_mkLabel___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StateT_mkLabel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StateT_mkLabel___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_callCC___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_StateT_mkLabel___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_apply_2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_callCC___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_StateT_callCC___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_StateT_callCC(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StateT_callCC___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonadContStateT___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StateT_callCC___rarg), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMonadContStateT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMonadContStateT___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_2(x_2, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ReaderT_mkLabel___elambda__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_ReaderT_mkLabel___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_mkLabel___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ReaderT_mkLabel___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_mkLabel___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ReaderT_mkLabel___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_mkLabel___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ReaderT_mkLabel___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ReaderT_callCC___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_ReaderT_mkLabel___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_mkLabel___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ReaderT_callCC___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_ReaderT_callCC___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_3(x_1, lean_box(0), lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ReaderT_callCC(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_callCC___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonadContReaderT___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_callCC___rarg), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMonadContReaderT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMonadContReaderT___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_apply_1(x_2, x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_1);
x_6 = lean_apply_1(x_3, x_5);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__1___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_apply_1(x_2, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__2___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_1);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__2___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_ContT_equiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContT_equiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ContT_equiv___rarg), 2, 0);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Monad_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Monad_Writer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Lawful(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Congr(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Lean_Except(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Monad_Cont(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Monad_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Monad_Writer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Lawful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Congr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Lean_Except(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ContT_instMonad___closed__1 = _init_l_ContT_instMonad___closed__1();
lean_mark_persistent(l_ContT_instMonad___closed__1);
l_ContT_instMonad___closed__2 = _init_l_ContT_instMonad___closed__2();
lean_mark_persistent(l_ContT_instMonad___closed__2);
l_ContT_instMonad___closed__3 = _init_l_ContT_instMonad___closed__3();
lean_mark_persistent(l_ContT_instMonad___closed__3);
l_ContT_instMonad___closed__4 = _init_l_ContT_instMonad___closed__4();
lean_mark_persistent(l_ContT_instMonad___closed__4);
l_ContT_instMonad___closed__5 = _init_l_ContT_instMonad___closed__5();
lean_mark_persistent(l_ContT_instMonad___closed__5);
l_ContT_instMonad___closed__6 = _init_l_ContT_instMonad___closed__6();
lean_mark_persistent(l_ContT_instMonad___closed__6);
l_ContT_instMonad___closed__7 = _init_l_ContT_instMonad___closed__7();
lean_mark_persistent(l_ContT_instMonad___closed__7);
l_ContT_instMonad___closed__8 = _init_l_ContT_instMonad___closed__8();
lean_mark_persistent(l_ContT_instMonad___closed__8);
l_ContT_instMonad___closed__9 = _init_l_ContT_instMonad___closed__9();
lean_mark_persistent(l_ContT_instMonad___closed__9);
l_ContT_instMonad___closed__10 = _init_l_ContT_instMonad___closed__10();
lean_mark_persistent(l_ContT_instMonad___closed__10);
l_ExceptT_mkLabel___elambda__1___rarg___closed__1 = _init_l_ExceptT_mkLabel___elambda__1___rarg___closed__1();
lean_mark_persistent(l_ExceptT_mkLabel___elambda__1___rarg___closed__1);
l_WriterT_callCC___rarg___closed__1 = _init_l_WriterT_callCC___rarg___closed__1();
lean_mark_persistent(l_WriterT_callCC___rarg___closed__1);
l_ReaderT_mkLabel___rarg___closed__1 = _init_l_ReaderT_mkLabel___rarg___closed__1();
lean_mark_persistent(l_ReaderT_mkLabel___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
