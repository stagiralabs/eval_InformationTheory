// Lean compiler output
// Module: Mathlib.Tactic.Measurability
// Imports: Init Mathlib.Tactic.Measurability.Init Mathlib.Algebra.Group.Defs
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
static lean_object* l_tacticMeasurability_x3f___closed__1;
static lean_object* l_tacticMeasurability___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9;
static lean_object* l_tacticMeasurability___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18;
static lean_object* l_attrMeasurability___closed__1;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19;
static lean_object* l_tacticMeasurability_x3f___closed__5;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24;
static lean_object* l_measurability_x21_x3f___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3;
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30;
static lean_object* l_attrMeasurability___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticMeasurability___closed__1;
static lean_object* l_tacticMeasurability_x3f___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19;
static lean_object* l_measurability_x21___closed__2;
static lean_object* l_attrMeasurability___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17;
static lean_object* l_measurability_x21_x3f___closed__1;
LEAN_EXPORT lean_object* l_tacticMeasurability_x3f;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32;
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38;
LEAN_EXPORT lean_object* l_measurability_x21;
static lean_object* l_tacticMeasurability_x3f___closed__2;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_measurability_x21___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15;
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8;
LEAN_EXPORT lean_object* l_measurability_x21_x3f;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16;
lean_object* lean_mk_syntax_ident(lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31;
LEAN_EXPORT lean_object* l_attrMeasurability;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22;
static lean_object* l_measurability_x21_x3f___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20;
static lean_object* l_measurability_x21_x3f___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36;
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14;
static lean_object* l_measurability_x21___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25;
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36;
static lean_object* l_measurability_x21___closed__1;
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_attrMeasurability___closed__5;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31;
static lean_object* l_attrMeasurability___closed__4;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33;
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_tacticMeasurability;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29;
static lean_object* l_tacticMeasurability_x3f___closed__3;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21;
static lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7;
static lean_object* _init_l_attrMeasurability___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("attrMeasurability", 17, 17);
return x_1;
}
}
static lean_object* _init_l_attrMeasurability___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_attrMeasurability___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_attrMeasurability___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("measurability", 13, 13);
return x_1;
}
}
static lean_object* _init_l_attrMeasurability___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_attrMeasurability___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_attrMeasurability___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_attrMeasurability___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_attrMeasurability___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_attrMeasurability() {
_start:
{
lean_object* x_1; 
x_1 = l_attrMeasurability___closed__5;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Aesop", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Frontend", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesop", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("attr_rules_", 11, 11);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rule_expr___", 12, 12);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("choice", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("feature_", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("phaseSafe", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("safe", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("featIdent", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("feature__2", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("builder_nameApply", 17, 17);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rule_expr_", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("feature__4", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ruleSetsFeature", 15, 15);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rule_sets", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(":=", 2, 2);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Measurable", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41;
x_2 = lean_mk_syntax_ident(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_attrMeasurability___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_8 = lean_ctor_get(x_2, 5);
lean_inc(x_8);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16;
lean_inc(x_10);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15;
lean_inc(x_10);
x_18 = l_Lean_Syntax_node1(x_10, x_17, x_16);
x_19 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13;
lean_inc(x_10);
x_20 = l_Lean_Syntax_node1(x_10, x_19, x_18);
x_21 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20;
lean_inc(x_11);
lean_inc(x_12);
x_22 = l_Lean_addMacroScope(x_12, x_21, x_11);
x_23 = lean_box(0);
x_24 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19;
lean_inc(x_10);
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_10);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
x_26 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18;
lean_inc(x_10);
x_27 = l_Lean_Syntax_node1(x_10, x_26, x_25);
x_28 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11;
lean_inc(x_10);
x_29 = l_Lean_Syntax_node2(x_10, x_28, x_20, x_27);
x_30 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25;
lean_inc(x_10);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_30);
x_32 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24;
lean_inc(x_10);
x_33 = l_Lean_Syntax_node1(x_10, x_32, x_31);
x_34 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22;
lean_inc(x_10);
x_35 = l_Lean_Syntax_node1(x_10, x_34, x_33);
x_36 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27;
x_37 = l_Lean_addMacroScope(x_12, x_36, x_11);
x_38 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26;
lean_inc(x_10);
x_39 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_39, 0, x_10);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_37);
lean_ctor_set(x_39, 3, x_23);
lean_inc(x_10);
x_40 = l_Lean_Syntax_node1(x_10, x_26, x_39);
lean_inc(x_10);
x_41 = l_Lean_Syntax_node2(x_10, x_28, x_35, x_40);
x_42 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34;
lean_inc(x_10);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_10);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35;
lean_inc(x_10);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_10);
lean_ctor_set(x_45, 1, x_44);
x_46 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36;
lean_inc(x_10);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_10);
lean_ctor_set(x_47, 1, x_46);
x_48 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37;
lean_inc(x_10);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_10);
lean_ctor_set(x_49, 1, x_48);
x_50 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39;
x_51 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42;
lean_inc(x_10);
x_52 = l_Lean_Syntax_node1(x_10, x_50, x_51);
x_53 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43;
lean_inc(x_10);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_10);
lean_ctor_set(x_54, 1, x_53);
x_55 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44;
lean_inc(x_10);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_10);
lean_ctor_set(x_56, 1, x_55);
x_57 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33;
lean_inc(x_10);
x_58 = l_Lean_Syntax_node7(x_10, x_57, x_43, x_45, x_47, x_49, x_52, x_54, x_56);
x_59 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31;
lean_inc(x_10);
x_60 = l_Lean_Syntax_node1(x_10, x_59, x_58);
x_61 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29;
lean_inc(x_10);
x_62 = l_Lean_Syntax_node1(x_10, x_61, x_60);
x_63 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9;
lean_inc(x_10);
x_64 = l_Lean_Syntax_node2(x_10, x_63, x_41, x_62);
lean_inc(x_10);
x_65 = l_Lean_Syntax_node2(x_10, x_63, x_29, x_64);
x_66 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7;
lean_inc(x_10);
x_67 = l_Lean_Syntax_node1(x_10, x_66, x_65);
x_68 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5;
x_69 = l_Lean_Syntax_node2(x_10, x_68, x_14, x_67);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_3);
return x_70;
}
}
}
static lean_object* _init_l_tacticMeasurability___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticMeasurability", 19, 19);
return x_1;
}
}
static lean_object* _init_l_tacticMeasurability___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticMeasurability___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMeasurability___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticMeasurability___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_attrMeasurability___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticMeasurability() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticMeasurability___closed__3;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesopTactic", 11, 11);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic_clause(Config:=_)", 24, 24);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("config", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structInst", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structInstFields", 16, 16);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structInstField", 15, 15);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structInstLVal", 14, 14);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("terminal", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structInstFieldDef", 18, 18);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Bool", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optEllipsis", 11, 11);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("}", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic_clause(Rule_sets:=[_])", 29, 29);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ruleSetSpec", 11, 11);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticMeasurability___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_8 = lean_ctor_get(x_2, 5);
lean_inc(x_8);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34;
lean_inc(x_10);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5;
lean_inc(x_10);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_17);
x_19 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36;
lean_inc(x_10);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_19);
x_21 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10;
lean_inc(x_10);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
x_23 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39;
x_24 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11;
lean_inc(x_10);
x_25 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_25, 0, x_10);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
x_26 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20;
lean_inc(x_11);
lean_inc(x_12);
x_27 = l_Lean_addMacroScope(x_12, x_26, x_11);
x_28 = lean_box(0);
x_29 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19;
lean_inc(x_10);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_28);
x_31 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17;
lean_inc(x_25);
lean_inc(x_10);
x_32 = l_Lean_Syntax_node2(x_10, x_31, x_30, x_25);
x_33 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25;
x_34 = l_Lean_addMacroScope(x_12, x_33, x_11);
x_35 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24;
x_36 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29;
lean_inc(x_10);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_10);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22;
lean_inc(x_20);
lean_inc(x_10);
x_39 = l_Lean_Syntax_node2(x_10, x_38, x_20, x_37);
lean_inc_n(x_25, 2);
lean_inc(x_10);
x_40 = l_Lean_Syntax_node3(x_10, x_23, x_25, x_25, x_39);
x_41 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15;
lean_inc(x_10);
x_42 = l_Lean_Syntax_node2(x_10, x_41, x_32, x_40);
lean_inc(x_10);
x_43 = l_Lean_Syntax_node1(x_10, x_23, x_42);
x_44 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13;
lean_inc(x_10);
x_45 = l_Lean_Syntax_node1(x_10, x_44, x_43);
x_46 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31;
lean_inc(x_25);
lean_inc(x_10);
x_47 = l_Lean_Syntax_node1(x_10, x_46, x_25);
x_48 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32;
lean_inc(x_10);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_10);
lean_ctor_set(x_49, 1, x_48);
x_50 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9;
lean_inc_n(x_25, 2);
lean_inc(x_10);
x_51 = l_Lean_Syntax_node6(x_10, x_50, x_22, x_25, x_45, x_47, x_25, x_49);
x_52 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44;
lean_inc(x_10);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_10);
lean_ctor_set(x_53, 1, x_52);
x_54 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4;
lean_inc(x_53);
lean_inc(x_20);
lean_inc(x_16);
lean_inc(x_10);
x_55 = l_Lean_Syntax_node5(x_10, x_54, x_16, x_18, x_20, x_51, x_53);
x_56 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35;
lean_inc(x_10);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_56);
x_58 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37;
lean_inc(x_10);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_10);
lean_ctor_set(x_59, 1, x_58);
x_60 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36;
x_61 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42;
lean_inc(x_10);
x_62 = l_Lean_Syntax_node2(x_10, x_60, x_25, x_61);
lean_inc(x_10);
x_63 = l_Lean_Syntax_node1(x_10, x_23, x_62);
x_64 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43;
lean_inc(x_10);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_10);
lean_ctor_set(x_65, 1, x_64);
x_66 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34;
lean_inc(x_10);
x_67 = l_Lean_Syntax_node7(x_10, x_66, x_16, x_57, x_20, x_59, x_63, x_65, x_53);
lean_inc(x_10);
x_68 = l_Lean_Syntax_node2(x_10, x_23, x_55, x_67);
x_69 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2;
x_70 = l_Lean_Syntax_node2(x_10, x_69, x_14, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_3);
return x_71;
}
}
}
static lean_object* _init_l_tacticMeasurability_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticMeasurability\?", 20, 20);
return x_1;
}
}
static lean_object* _init_l_tacticMeasurability_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticMeasurability_x3f___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMeasurability_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("measurability\?", 14, 14);
return x_1;
}
}
static lean_object* _init_l_tacticMeasurability_x3f___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticMeasurability_x3f___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMeasurability_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticMeasurability_x3f___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticMeasurability_x3f___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticMeasurability_x3f() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticMeasurability_x3f___closed__5;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesopTactic\?", 12, 12);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesop\?", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticMeasurability_x3f___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_8 = lean_ctor_get(x_2, 5);
lean_inc(x_8);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34;
lean_inc(x_10);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5;
lean_inc(x_10);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_17);
x_19 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36;
lean_inc(x_10);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_19);
x_21 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10;
lean_inc(x_10);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
x_23 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39;
x_24 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11;
lean_inc(x_10);
x_25 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_25, 0, x_10);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
x_26 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20;
lean_inc(x_11);
lean_inc(x_12);
x_27 = l_Lean_addMacroScope(x_12, x_26, x_11);
x_28 = lean_box(0);
x_29 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19;
lean_inc(x_10);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_28);
x_31 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17;
lean_inc(x_25);
lean_inc(x_10);
x_32 = l_Lean_Syntax_node2(x_10, x_31, x_30, x_25);
x_33 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25;
x_34 = l_Lean_addMacroScope(x_12, x_33, x_11);
x_35 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24;
x_36 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29;
lean_inc(x_10);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_10);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22;
lean_inc(x_20);
lean_inc(x_10);
x_39 = l_Lean_Syntax_node2(x_10, x_38, x_20, x_37);
lean_inc_n(x_25, 2);
lean_inc(x_10);
x_40 = l_Lean_Syntax_node3(x_10, x_23, x_25, x_25, x_39);
x_41 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15;
lean_inc(x_10);
x_42 = l_Lean_Syntax_node2(x_10, x_41, x_32, x_40);
lean_inc(x_10);
x_43 = l_Lean_Syntax_node1(x_10, x_23, x_42);
x_44 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13;
lean_inc(x_10);
x_45 = l_Lean_Syntax_node1(x_10, x_44, x_43);
x_46 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31;
lean_inc(x_25);
lean_inc(x_10);
x_47 = l_Lean_Syntax_node1(x_10, x_46, x_25);
x_48 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32;
lean_inc(x_10);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_10);
lean_ctor_set(x_49, 1, x_48);
x_50 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9;
lean_inc_n(x_25, 2);
lean_inc(x_10);
x_51 = l_Lean_Syntax_node6(x_10, x_50, x_22, x_25, x_45, x_47, x_25, x_49);
x_52 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44;
lean_inc(x_10);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_10);
lean_ctor_set(x_53, 1, x_52);
x_54 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4;
lean_inc(x_53);
lean_inc(x_20);
lean_inc(x_16);
lean_inc(x_10);
x_55 = l_Lean_Syntax_node5(x_10, x_54, x_16, x_18, x_20, x_51, x_53);
x_56 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35;
lean_inc(x_10);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_56);
x_58 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37;
lean_inc(x_10);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_10);
lean_ctor_set(x_59, 1, x_58);
x_60 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36;
x_61 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42;
lean_inc(x_10);
x_62 = l_Lean_Syntax_node2(x_10, x_60, x_25, x_61);
lean_inc(x_10);
x_63 = l_Lean_Syntax_node1(x_10, x_23, x_62);
x_64 = l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43;
lean_inc(x_10);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_10);
lean_ctor_set(x_65, 1, x_64);
x_66 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34;
lean_inc(x_10);
x_67 = l_Lean_Syntax_node7(x_10, x_66, x_16, x_57, x_20, x_59, x_63, x_65, x_53);
lean_inc(x_10);
x_68 = l_Lean_Syntax_node2(x_10, x_23, x_55, x_67);
x_69 = l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2;
x_70 = l_Lean_Syntax_node2(x_10, x_69, x_14, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_3);
return x_71;
}
}
}
static lean_object* _init_l_measurability_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("measurability!", 14, 14);
return x_1;
}
}
static lean_object* _init_l_measurability_x21___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_measurability_x21___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_measurability_x21___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_measurability_x21___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_measurability_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_measurability_x21___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_measurability_x21___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_measurability_x21() {
_start:
{
lean_object* x_1; 
x_1 = l_measurability_x21___closed__4;
return x_1;
}
}
static lean_object* _init_l_measurability_x21_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("measurability!\?", 15, 15);
return x_1;
}
}
static lean_object* _init_l_measurability_x21_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_measurability_x21_x3f___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_measurability_x21_x3f___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_measurability_x21_x3f___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_measurability_x21_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_measurability_x21_x3f___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_measurability_x21_x3f___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_measurability_x21_x3f() {
_start:
{
lean_object* x_1; 
x_1 = l_measurability_x21_x3f___closed__4;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Measurability_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Measurability(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Measurability_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_attrMeasurability___closed__1 = _init_l_attrMeasurability___closed__1();
lean_mark_persistent(l_attrMeasurability___closed__1);
l_attrMeasurability___closed__2 = _init_l_attrMeasurability___closed__2();
lean_mark_persistent(l_attrMeasurability___closed__2);
l_attrMeasurability___closed__3 = _init_l_attrMeasurability___closed__3();
lean_mark_persistent(l_attrMeasurability___closed__3);
l_attrMeasurability___closed__4 = _init_l_attrMeasurability___closed__4();
lean_mark_persistent(l_attrMeasurability___closed__4);
l_attrMeasurability___closed__5 = _init_l_attrMeasurability___closed__5();
lean_mark_persistent(l_attrMeasurability___closed__5);
l_attrMeasurability = _init_l_attrMeasurability();
lean_mark_persistent(l_attrMeasurability);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__1);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__2);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__3);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__4);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__5);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__6);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__7);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__8);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__9);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__10);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__11);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__12);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__13);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__14);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__15);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__16);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__17);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__18);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__19);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__20);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__21);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__22);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__23);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__24);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__25);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__26);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__27);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__28);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__29);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__30);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__31);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__32);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__33);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__34);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__35);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__36);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__37);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__38);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__39);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__40);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__41);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__42);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__43);
l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__attrMeasurability__1___closed__44);
l_tacticMeasurability___closed__1 = _init_l_tacticMeasurability___closed__1();
lean_mark_persistent(l_tacticMeasurability___closed__1);
l_tacticMeasurability___closed__2 = _init_l_tacticMeasurability___closed__2();
lean_mark_persistent(l_tacticMeasurability___closed__2);
l_tacticMeasurability___closed__3 = _init_l_tacticMeasurability___closed__3();
lean_mark_persistent(l_tacticMeasurability___closed__3);
l_tacticMeasurability = _init_l_tacticMeasurability();
lean_mark_persistent(l_tacticMeasurability);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__1);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__2);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__3);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__4);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__5);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__6);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__7);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__8);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__9);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__10);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__11);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__12);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__13);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__14);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__15);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__16);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__17);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__18);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__19);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__20);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__21);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__22);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__23);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__24);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__25);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__26);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__27);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__28);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__29);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__30);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__31);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__32);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__33);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__34);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__35);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability__1___closed__36);
l_tacticMeasurability_x3f___closed__1 = _init_l_tacticMeasurability_x3f___closed__1();
lean_mark_persistent(l_tacticMeasurability_x3f___closed__1);
l_tacticMeasurability_x3f___closed__2 = _init_l_tacticMeasurability_x3f___closed__2();
lean_mark_persistent(l_tacticMeasurability_x3f___closed__2);
l_tacticMeasurability_x3f___closed__3 = _init_l_tacticMeasurability_x3f___closed__3();
lean_mark_persistent(l_tacticMeasurability_x3f___closed__3);
l_tacticMeasurability_x3f___closed__4 = _init_l_tacticMeasurability_x3f___closed__4();
lean_mark_persistent(l_tacticMeasurability_x3f___closed__4);
l_tacticMeasurability_x3f___closed__5 = _init_l_tacticMeasurability_x3f___closed__5();
lean_mark_persistent(l_tacticMeasurability_x3f___closed__5);
l_tacticMeasurability_x3f = _init_l_tacticMeasurability_x3f();
lean_mark_persistent(l_tacticMeasurability_x3f);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__1);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__2);
l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3 = _init_l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Tactic__Measurability______macroRules__tacticMeasurability_x3f__1___closed__3);
l_measurability_x21___closed__1 = _init_l_measurability_x21___closed__1();
lean_mark_persistent(l_measurability_x21___closed__1);
l_measurability_x21___closed__2 = _init_l_measurability_x21___closed__2();
lean_mark_persistent(l_measurability_x21___closed__2);
l_measurability_x21___closed__3 = _init_l_measurability_x21___closed__3();
lean_mark_persistent(l_measurability_x21___closed__3);
l_measurability_x21___closed__4 = _init_l_measurability_x21___closed__4();
lean_mark_persistent(l_measurability_x21___closed__4);
l_measurability_x21 = _init_l_measurability_x21();
lean_mark_persistent(l_measurability_x21);
l_measurability_x21_x3f___closed__1 = _init_l_measurability_x21_x3f___closed__1();
lean_mark_persistent(l_measurability_x21_x3f___closed__1);
l_measurability_x21_x3f___closed__2 = _init_l_measurability_x21_x3f___closed__2();
lean_mark_persistent(l_measurability_x21_x3f___closed__2);
l_measurability_x21_x3f___closed__3 = _init_l_measurability_x21_x3f___closed__3();
lean_mark_persistent(l_measurability_x21_x3f___closed__3);
l_measurability_x21_x3f___closed__4 = _init_l_measurability_x21_x3f___closed__4();
lean_mark_persistent(l_measurability_x21_x3f___closed__4);
l_measurability_x21_x3f = _init_l_measurability_x21_x3f();
lean_mark_persistent(l_measurability_x21_x3f);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
