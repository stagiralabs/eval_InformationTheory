// Lean compiler output
// Module: Mathlib.Tactic.ExtendDoc
// Imports: Init Mathlib.Init Lean.Elab.ElabRules Lean.DocString
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
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9;
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5;
lean_object* l_Lean_TSyntax_getString(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
lean_object* l_String_removeLeadingSpaces(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2;
static lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14;
static lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18;
static lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27;
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After__;
static lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3;
LEAN_EXPORT uint8_t l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10;
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2___boxed(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25;
static lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2;
static lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24;
static lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1;
uint8_t l_Lean_Syntax_isNone(lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19;
lean_object* l_Lean_Elab_Command_liftCoreM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21;
lean_object* l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30;
static lean_object* l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13;
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ExtendDocs", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("commandExtend_docs__Before__After_", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3;
x_4 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("extend_docs", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("colGt", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("before", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("str", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("after", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7;
x_2 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27;
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After__() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34;
return x_1;
}
}
static lean_object* _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_docStringExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = l_String_removeLeadingSpaces(x_1);
x_13 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1;
x_14 = l_Lean_MapDeclarationExtension_insert___rarg(x_13, x_11, x_2, x_12);
lean_ctor_set(x_8, 0, x_14);
x_15 = lean_st_ref_set(x_5, x_8, x_9);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
x_24 = lean_ctor_get(x_8, 2);
x_25 = lean_ctor_get(x_8, 3);
x_26 = lean_ctor_get(x_8, 4);
x_27 = lean_ctor_get(x_8, 5);
x_28 = lean_ctor_get(x_8, 6);
x_29 = lean_ctor_get(x_8, 7);
x_30 = lean_ctor_get(x_8, 8);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_31 = l_String_removeLeadingSpaces(x_1);
x_32 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1;
x_33 = l_Lean_MapDeclarationExtension_insert___rarg(x_32, x_22, x_2, x_31);
x_34 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_25);
lean_ctor_set(x_34, 4, x_26);
lean_ctor_set(x_34, 5, x_27);
lean_ctor_set(x_34, 6, x_28);
lean_ctor_set(x_34, 7, x_29);
lean_ctor_set(x_34, 8, x_30);
x_35 = lean_st_ref_set(x_5, x_34, x_9);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
}
LEAN_EXPORT uint8_t l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid doc string, declaration '", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' is in an imported module", 26, 26);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Environment_getModuleIdxFor_x3f(x_9, x_1);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1(x_2, x_1, x_11, x_3, x_4, x_8);
lean_dec(x_3);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = 1;
x_16 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1;
x_17 = l_Lean_Name_toString(x_1, x_15, x_16);
x_18 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3;
x_21 = lean_string_append(x_19, x_20);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_21);
x_22 = l_Lean_MessageData_ofFormat(x_10);
x_23 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_22, x_3, x_4, x_8);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_10);
x_28 = 1;
x_29 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1;
x_30 = l_Lean_Name_toString(x_1, x_28, x_29);
x_31 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = l_Lean_MessageData_ofFormat(x_35);
x_37 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_36, x_3, x_4, x_8);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\n", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(0);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo), 5, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_Elab_Command_liftCoreM___rarg(x_9, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_6, x_12);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_53; 
x_53 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1;
x_14 = x_53;
goto block_52;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_3, 0);
x_55 = l_Lean_TSyntax_getString(x_54);
x_56 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2;
x_57 = lean_string_append(x_55, x_56);
x_14 = x_57;
goto block_52;
}
block_52:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
lean_inc(x_11);
x_19 = l_Lean_findDocString_x3f(x_17, x_11, x_18, x_16);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1;
x_23 = lean_string_append(x_14, x_22);
x_24 = lean_string_append(x_23, x_22);
x_25 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(x_11, x_24, x_5, x_6, x_21);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_string_append(x_14, x_27);
lean_dec(x_27);
x_29 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1;
x_30 = lean_string_append(x_28, x_29);
x_31 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(x_11, x_30, x_5, x_6, x_26);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_dec(x_13);
x_35 = l_Lean_TSyntax_getString(x_32);
x_36 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2;
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
x_38 = lean_ctor_get(x_33, 0);
lean_inc(x_38);
lean_dec(x_33);
x_39 = 1;
lean_inc(x_11);
x_40 = l_Lean_findDocString_x3f(x_38, x_11, x_39, x_34);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1;
x_44 = lean_string_append(x_14, x_43);
x_45 = lean_string_append(x_44, x_37);
lean_dec(x_37);
x_46 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(x_11, x_45, x_5, x_6, x_42);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec(x_40);
x_48 = lean_ctor_get(x_41, 0);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_string_append(x_14, x_48);
lean_dec(x_48);
x_50 = lean_string_append(x_49, x_37);
lean_dec(x_37);
x_51 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(x_11, x_50, x_5, x_6, x_47);
return x_51;
}
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_5);
x_58 = !lean_is_exclusive(x_10);
if (x_58 == 0)
{
return x_10;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_10, 0);
x_60 = lean_ctor_get(x_10, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_10);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected at least one of 'before' or 'after'", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_1);
x_8 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2;
x_9 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_8, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1(x_1, x_4, x_2, x_14, x_5, x_6, x_7);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1(x_1, x_4, x_2, x_16, x_5, x_6, x_7);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(2u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_matchesNull(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_9, x_14);
lean_dec(x_9);
x_16 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23;
lean_inc(x_15);
x_17 = l_Lean_Syntax_isOfKind(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_2);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_7);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_15);
x_20 = lean_box(0);
x_21 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2(x_2, x_4, x_20, x_19, x_5, x_6, x_7);
lean_dec(x_19);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
x_22 = lean_box(0);
x_23 = lean_box(0);
x_24 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2(x_2, x_4, x_23, x_22, x_5, x_6, x_7);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_isNone(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
lean_inc(x_14);
x_16 = l_Lean_Syntax_matchesNull(x_14, x_13);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l_Lean_Syntax_getArg(x_14, x_8);
lean_dec(x_14);
x_19 = l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23;
lean_inc(x_18);
x_20 = l_Lean_Syntax_isOfKind(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabAuxDef___spec__1___rarg(x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = lean_box(0);
x_24 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3(x_1, x_9, x_23, x_22, x_2, x_3, x_4);
lean_dec(x_22);
lean_dec(x_1);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_14);
x_25 = lean_box(0);
x_26 = lean_box(0);
x_27 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3(x_1, x_9, x_26, x_25, x_2, x_3, x_4);
lean_dec(x_1);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__2(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_ElabRules(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_DocString(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_ExtendDoc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ElabRules(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__1);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__2);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__3);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__4);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__5);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__6);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__7);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__8);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__9);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__10);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__11);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__12);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__13);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__14);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__15);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__16);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__17);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__18);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__19);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__20);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__21);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__22);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__23);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__24);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__25);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__26);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__27);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__28);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__29);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__30);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__31);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__32);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__33);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34 = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After_____closed__34);
l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After__ = _init_l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After__();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs_commandExtend__docs____Before____After__);
l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1 = _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___lambda__1___closed__1);
l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1 = _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1();
lean_mark_persistent(l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__1);
l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2 = _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2();
lean_mark_persistent(l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__2);
l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3 = _init_l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3();
lean_mark_persistent(l_Lean_addDocString___at_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___spec__1___closed__3);
l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1 = _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__1);
l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2 = _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__1___closed__2);
l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1 = _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__1);
l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2 = _init_l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_ExtendDocs___aux__Mathlib__Tactic__ExtendDoc______elabRules__Mathlib__Tactic__ExtendDocs__commandExtend__docs____Before____After____1___lambda__2___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
