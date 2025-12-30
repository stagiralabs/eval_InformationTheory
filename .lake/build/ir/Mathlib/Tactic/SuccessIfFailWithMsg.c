// Lean compiler output
// Module: Mathlib.Tactic.SuccessIfFailWithMsg
// Imports: Init Lean.Elab.Eval Lean.Elab.Tactic.BuiltinTactic Mathlib.Init Lean.Meta.Tactic.TryThis
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMsg;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__9;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__6;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__4;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__2;
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__8;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__1;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__10;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6;
lean_object* l_Lean_Exception_toMessageData(lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorry___at_Lean_Elab_Tactic_evalFailIfSuccess___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___boxed(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__12;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5___boxed(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__7;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__3;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__13;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__6(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__17;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__11;
lean_object* l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2;
lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__14;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1;
lean_object* l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_evalTerm___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__15;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTacticSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1;
static lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2;
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__16;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_successIfFailWithMsg___closed__5;
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("successIfFailWithMsg", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__1;
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__2;
x_3 = l_Mathlib_Tactic_successIfFailWithMsg___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("success_if_fail_with_msg ", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__10;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__6;
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__8;
x_3 = l_Mathlib_Tactic_successIfFailWithMsg___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__6;
x_2 = l_Mathlib_Tactic_successIfFailWithMsg___closed__12;
x_3 = l_Mathlib_Tactic_successIfFailWithMsg___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__4;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_successIfFailWithMsg___closed__16;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMsg() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_successIfFailWithMsg___closed__17;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic failed, but got different error message:\n\n", 49, 49);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic '", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' failed, but got different error message:\n\n", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_Lean_stringToMessageData(x_2);
x_7 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2;
x_8 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_throwError___rarg(x_3, x_4, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_12);
x_13 = l_Lean_MessageData_ofSyntax(x_12);
x_14 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6;
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_stringToMessageData(x_2);
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4;
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwErrorAt___rarg(x_3, x_4, x_12, x_21);
return x_22;
}
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Update with tactic error message", 32, 32);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1;
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic succeeded, but was expected to fail", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' succeeded, but was expected to fail", 37, 37);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\"", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Update with tactic error message: ", 34, 34);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2;
x_11 = l_Lean_throwError___rarg(x_3, x_4, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_12);
x_13 = l_Lean_MessageData_ofSyntax(x_12);
x_14 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6;
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwErrorAt___rarg(x_3, x_4, x_12, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_string_utf8_byte_size(x_5);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_5, x_20, x_21);
x_23 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_5, x_22, x_20);
x_24 = lean_string_utf8_extract(x_5, x_22, x_23);
lean_dec(x_23);
lean_dec(x_22);
x_25 = lean_string_utf8_byte_size(x_19);
x_26 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_19, x_25, x_21);
x_27 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_19, x_26, x_25);
x_28 = lean_string_utf8_extract(x_19, x_26, x_27);
lean_dec(x_27);
lean_dec(x_26);
x_29 = lean_string_dec_eq(x_24, x_28);
lean_dec(x_24);
if (x_29 == 0)
{
lean_object* x_30; 
lean_inc(x_3);
x_30 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_30, 0, x_2);
lean_closure_set(x_30, 1, x_19);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_28);
lean_dec(x_8);
x_31 = lean_ctor_get(x_3, 0);
lean_inc(x_31);
lean_dec(x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_box(0);
x_34 = lean_apply_2(x_32, lean_box(0), x_33);
x_35 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_34, x_30);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_6);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_37 = lean_ctor_get(x_6, 0);
x_38 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
x_39 = lean_string_append(x_38, x_28);
lean_dec(x_28);
x_40 = lean_string_append(x_39, x_38);
lean_ctor_set(x_6, 0, x_40);
x_41 = lean_box(0);
x_42 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
x_43 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_43, 0, x_6);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_41);
lean_ctor_set(x_43, 3, x_41);
lean_ctor_set(x_43, 4, x_41);
lean_ctor_set(x_43, 5, x_42);
x_44 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
x_45 = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_addSuggestion___boxed), 10, 5);
lean_closure_set(x_45, 0, x_37);
lean_closure_set(x_45, 1, x_43);
lean_closure_set(x_45, 2, x_41);
lean_closure_set(x_45, 3, x_44);
lean_closure_set(x_45, 4, x_41);
x_46 = lean_apply_2(x_8, lean_box(0), x_45);
x_47 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_46, x_30);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_48 = lean_ctor_get(x_6, 0);
lean_inc(x_48);
lean_dec(x_6);
x_49 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
x_50 = lean_string_append(x_49, x_28);
lean_dec(x_28);
x_51 = lean_string_append(x_50, x_49);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_box(0);
x_54 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_55, 2, x_53);
lean_ctor_set(x_55, 3, x_53);
lean_ctor_set(x_55, 4, x_53);
lean_ctor_set(x_55, 5, x_54);
x_56 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
x_57 = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_addSuggestion___boxed), 10, 5);
lean_closure_set(x_57, 0, x_48);
lean_closure_set(x_57, 1, x_55);
lean_closure_set(x_57, 2, x_53);
lean_closure_set(x_57, 3, x_56);
lean_closure_set(x_57, 4, x_53);
x_58 = lean_apply_2(x_8, lean_box(0), x_57);
x_59 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_58, x_30);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_28);
lean_dec(x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_60 = lean_ctor_get(x_3, 0);
lean_inc(x_60);
lean_dec(x_3);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_box(0);
x_63 = lean_apply_2(x_61, lean_box(0), x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, x_2);
lean_inc(x_8);
x_13 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___boxed), 9, 8);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_4);
lean_closure_set(x_13, 3, x_5);
lean_closure_set(x_13, 4, x_6);
lean_closure_set(x_13, 5, x_7);
lean_closure_set(x_13, 6, x_8);
lean_closure_set(x_13, 7, x_9);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__6(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_Exception_toMessageData(x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_MessageData_toString), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
x_8 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__6), 2, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__4), 10, 9);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
lean_closure_set(x_12, 4, x_4);
lean_closure_set(x_12, 5, x_5);
lean_closure_set(x_12, 6, x_6);
lean_closure_set(x_12, 7, x_7);
lean_closure_set(x_12, 8, x_8);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
lean_inc(x_3);
x_14 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5___boxed), 2, 1);
lean_closure_set(x_14, 0, x_3);
lean_inc(x_7);
x_15 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_14);
lean_inc(x_7);
x_16 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__7), 4, 3);
lean_closure_set(x_16, 0, x_10);
lean_closure_set(x_16, 1, x_3);
lean_closure_set(x_16, 2, x_7);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_apply_3(x_17, lean_box(0), x_15, x_16);
x_19 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_18, x_12);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__8), 11, 10);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_1);
lean_closure_set(x_12, 3, x_5);
lean_closure_set(x_12, 4, x_6);
lean_closure_set(x_12, 5, x_8);
lean_closure_set(x_12, 6, x_10);
lean_closure_set(x_12, 7, x_3);
lean_closure_set(x_12, 8, x_7);
lean_closure_set(x_12, 9, x_2);
x_13 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Mathlib_Tactic_successIfFailWithMessage___rarg), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("String", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3;
x_10 = 1;
x_11 = l_Lean_Elab_Term_evalTerm___rarg(x_9, x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_stringToMessageData(x_2);
x_14 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2;
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
lean_inc(x_19);
x_20 = l_Lean_MessageData_ofSyntax(x_19);
x_21 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_stringToMessageData(x_2);
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(x_19, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_19);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2;
x_19 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_17);
lean_dec(x_13);
lean_dec(x_12);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
lean_inc(x_21);
x_22 = l_Lean_MessageData_ofSyntax(x_21);
x_23 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(x_21, x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
lean_dec(x_13);
lean_dec(x_21);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_29 = lean_ctor_get(x_16, 1);
x_30 = lean_ctor_get(x_16, 0);
lean_dec(x_30);
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_string_utf8_byte_size(x_3);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_3, x_32, x_33);
x_35 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_3, x_34, x_32);
x_36 = lean_string_utf8_extract(x_3, x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
x_37 = lean_string_utf8_byte_size(x_31);
x_38 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_31, x_37, x_33);
x_39 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_31, x_38, x_37);
x_40 = lean_string_utf8_extract(x_31, x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
x_41 = lean_string_dec_eq(x_36, x_40);
lean_dec(x_36);
if (x_41 == 0)
{
lean_free_object(x_16);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_40);
x_42 = lean_box(0);
x_43 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_2, x_31, x_42, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_29);
lean_dec(x_13);
return x_43;
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_4);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = lean_ctor_get(x_4, 0);
x_46 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
x_47 = lean_string_append(x_46, x_40);
lean_dec(x_40);
x_48 = lean_string_append(x_47, x_46);
lean_ctor_set(x_4, 0, x_48);
x_49 = lean_box(0);
x_50 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
x_51 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_49);
lean_ctor_set(x_51, 3, x_49);
lean_ctor_set(x_51, 4, x_49);
lean_ctor_set(x_51, 5, x_50);
x_52 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
lean_inc(x_13);
lean_inc(x_12);
x_53 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_45, x_51, x_49, x_52, x_49, x_10, x_11, x_12, x_13, x_29);
lean_dec(x_45);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_2, x_31, x_54, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_55);
lean_dec(x_13);
lean_dec(x_54);
return x_56;
}
else
{
uint8_t x_57; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_53);
if (x_57 == 0)
{
return x_53;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_53, 0);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_53);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_61 = lean_ctor_get(x_4, 0);
lean_inc(x_61);
lean_dec(x_4);
x_62 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
x_63 = lean_string_append(x_62, x_40);
lean_dec(x_40);
x_64 = lean_string_append(x_63, x_62);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_box(0);
x_67 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
x_68 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_66);
lean_ctor_set(x_68, 3, x_66);
lean_ctor_set(x_68, 4, x_66);
lean_ctor_set(x_68, 5, x_67);
x_69 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
lean_inc(x_13);
lean_inc(x_12);
x_70 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_61, x_68, x_66, x_69, x_66, x_10, x_11, x_12, x_13, x_29);
lean_dec(x_61);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_2, x_31, x_71, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_72);
lean_dec(x_13);
lean_dec(x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_76 = x_70;
} else {
 lean_dec_ref(x_70);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
}
}
else
{
lean_object* x_78; 
lean_dec(x_40);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_78 = lean_box(0);
lean_ctor_set(x_16, 0, x_78);
return x_16;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_79 = lean_ctor_get(x_16, 1);
lean_inc(x_79);
lean_dec(x_16);
x_80 = lean_ctor_get(x_5, 0);
x_81 = lean_string_utf8_byte_size(x_3);
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_3, x_81, x_82);
x_84 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_3, x_83, x_81);
x_85 = lean_string_utf8_extract(x_3, x_83, x_84);
lean_dec(x_84);
lean_dec(x_83);
x_86 = lean_string_utf8_byte_size(x_80);
x_87 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_80, x_86, x_82);
x_88 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_80, x_87, x_86);
x_89 = lean_string_utf8_extract(x_80, x_87, x_88);
lean_dec(x_88);
lean_dec(x_87);
x_90 = lean_string_dec_eq(x_85, x_89);
lean_dec(x_85);
if (x_90 == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_89);
x_91 = lean_box(0);
x_92 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_2, x_80, x_91, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_79);
lean_dec(x_13);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_93 = lean_ctor_get(x_4, 0);
lean_inc(x_93);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 x_94 = x_4;
} else {
 lean_dec_ref(x_4);
 x_94 = lean_box(0);
}
x_95 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5;
x_96 = lean_string_append(x_95, x_89);
lean_dec(x_89);
x_97 = lean_string_append(x_96, x_95);
if (lean_is_scalar(x_94)) {
 x_98 = lean_alloc_ctor(1, 1, 0);
} else {
 x_98 = x_94;
}
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_box(0);
x_100 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7;
x_101 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
lean_ctor_set(x_101, 2, x_99);
lean_ctor_set(x_101, 3, x_99);
lean_ctor_set(x_101, 4, x_99);
lean_ctor_set(x_101, 5, x_100);
x_102 = l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8;
lean_inc(x_13);
lean_inc(x_12);
x_103 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_93, x_101, x_99, x_102, x_99, x_10, x_11, x_12, x_13, x_79);
lean_dec(x_93);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_2, x_80, x_104, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_105);
lean_dec(x_13);
lean_dec(x_104);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_107 = lean_ctor_get(x_103, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_89);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_111 = lean_box(0);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_79);
return x_112;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = lean_apply_9(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_box(0);
x_20 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(x_15, x_4, x_1, x_3, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
x_24 = l_Lean_Exception_isInterrupt(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Exception_isRuntime(x_22);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_free_object(x_17);
x_26 = l_Lean_Exception_toMessageData(x_22);
x_27 = l_Lean_MessageData_toString(x_26, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_28);
x_31 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(x_15, x_4, x_1, x_3, x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_30);
return x_31;
}
else
{
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_17;
}
}
else
{
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_17;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_17, 0);
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_17);
x_34 = l_Lean_Exception_isInterrupt(x_32);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Exception_isRuntime(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = l_Lean_Exception_toMessageData(x_32);
x_37 = l_Lean_MessageData_toString(x_36, x_33);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_38);
x_41 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(x_15, x_4, x_1, x_3, x_40, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_39);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_40);
return x_41;
}
else
{
lean_object* x_42; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_33);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_33);
return x_43;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_12 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTacticSeq), 10, 1);
lean_closure_set(x_15, 0, x_2);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_2);
x_18 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1(x_13, x_15, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
lean_dec(x_13);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1;
x_2 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2;
x_3 = l_Mathlib_Tactic_successIfFailWithMsg___closed__2;
x_4 = l_Mathlib_Tactic_successIfFailWithMsg___closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_successIfFailWithMsg___closed__4;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3;
lean_inc(x_17);
x_19 = l_Lean_Syntax_isOfKind(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___lambda__1), 11, 2);
lean_closure_set(x_21, 0, x_15);
lean_closure_set(x_21, 1, x_17);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = l_Lean_Elab_Term_withoutErrToSorry___at_Lean_Elab_Tactic_evalFailIfSuccess___spec__1(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Mathlib_Tactic_successIfFailWithMessage___at_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_14;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Eval(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_BuiltinTactic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_SuccessIfFailWithMsg(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Eval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_BuiltinTactic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_successIfFailWithMsg___closed__1 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__1);
l_Mathlib_Tactic_successIfFailWithMsg___closed__2 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__2);
l_Mathlib_Tactic_successIfFailWithMsg___closed__3 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__3);
l_Mathlib_Tactic_successIfFailWithMsg___closed__4 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__4);
l_Mathlib_Tactic_successIfFailWithMsg___closed__5 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__5);
l_Mathlib_Tactic_successIfFailWithMsg___closed__6 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__6);
l_Mathlib_Tactic_successIfFailWithMsg___closed__7 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__7);
l_Mathlib_Tactic_successIfFailWithMsg___closed__8 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__8);
l_Mathlib_Tactic_successIfFailWithMsg___closed__9 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__9);
l_Mathlib_Tactic_successIfFailWithMsg___closed__10 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__10);
l_Mathlib_Tactic_successIfFailWithMsg___closed__11 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__11);
l_Mathlib_Tactic_successIfFailWithMsg___closed__12 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__12);
l_Mathlib_Tactic_successIfFailWithMsg___closed__13 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__13);
l_Mathlib_Tactic_successIfFailWithMsg___closed__14 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__14();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__14);
l_Mathlib_Tactic_successIfFailWithMsg___closed__15 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__15();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__15);
l_Mathlib_Tactic_successIfFailWithMsg___closed__16 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__16();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__16);
l_Mathlib_Tactic_successIfFailWithMsg___closed__17 = _init_l_Mathlib_Tactic_successIfFailWithMsg___closed__17();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg___closed__17);
l_Mathlib_Tactic_successIfFailWithMsg = _init_l_Mathlib_Tactic_successIfFailWithMsg();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMsg);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__1);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__2);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__3);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__4);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__5);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__6);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__7);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__1___closed__8);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__2___closed__1);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__1);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__2);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__3);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__4);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__5);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__6);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__7);
l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8 = _init_l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_successIfFailWithMessage___rarg___lambda__3___closed__8);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1_unsafe__1___closed__3);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__SuccessIfFailWithMsg______elabRules__Mathlib__Tactic__successIfFailWithMsg__1___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
