// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.LDL
// Imports: Init Mathlib.Analysis.InnerProductSpace.GramSchmidtOrtho Mathlib.LinearAlgebra.Matrix.PosDef
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
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
LEAN_EXPORT lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6;
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29;
LEAN_EXPORT lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32_;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37;
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15;
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30;
static lean_object* l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11;
static lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16;
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term⟪_,_⟫ₑ", 16, 10);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LinearAlgebra", 13, 13);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Matrix", 6, 6);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LDL", 3, 3);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14;
x_2 = lean_unsigned_to_nat(32u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("⟪", 3, 1);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19;
x_3 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23;
x_3 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26;
x_3 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("⟫ₑ", 6, 2);
return x_1;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27;
x_3 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32_() {
_start:
{
lean_object* x_1; 
x_1 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
x_3 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
x_4 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("explicit", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
x_3 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
x_4 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("@", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inner", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Inner", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("𝕜", 4, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25;
x_2 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26;
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hole", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
x_3 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
x_4 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("paren", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
x_3 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
x_4 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("proj", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2;
x_3 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3;
x_4 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("WithLp.equiv", 12, 12);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("WithLp", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("equiv", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40;
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("num", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("2", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("symm", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
x_13 = 0;
x_14 = l_Lean_SourceInfo_fromRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8;
lean_inc(x_14);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
x_19 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11;
lean_inc(x_15);
lean_inc(x_16);
x_20 = l_Lean_addMacroScope(x_16, x_19, x_15);
x_21 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10;
x_22 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15;
lean_inc(x_14);
x_23 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_20);
lean_ctor_set(x_23, 3, x_22);
x_24 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7;
lean_inc(x_14);
x_25 = l_Lean_Syntax_node2(x_14, x_24, x_18, x_23);
x_26 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20;
lean_inc(x_15);
lean_inc(x_16);
x_27 = l_Lean_addMacroScope(x_16, x_26, x_15);
x_28 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19;
x_29 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29;
lean_inc(x_14);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32;
lean_inc(x_14);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
x_33 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31;
lean_inc(x_14);
x_34 = l_Lean_Syntax_node1(x_14, x_33, x_32);
x_35 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35;
lean_inc(x_14);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_14);
lean_ctor_set(x_36, 1, x_35);
x_37 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42;
lean_inc(x_15);
lean_inc(x_16);
x_38 = l_Lean_addMacroScope(x_16, x_37, x_15);
x_39 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39;
x_40 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44;
lean_inc(x_14);
x_41 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_38);
lean_ctor_set(x_41, 3, x_40);
x_42 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47;
lean_inc(x_14);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_14);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46;
lean_inc(x_14);
x_45 = l_Lean_Syntax_node1(x_14, x_44, x_43);
x_46 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17;
lean_inc(x_34);
lean_inc(x_14);
x_47 = l_Lean_Syntax_node2(x_14, x_46, x_45, x_34);
x_48 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5;
lean_inc(x_41);
lean_inc(x_14);
x_49 = l_Lean_Syntax_node2(x_14, x_48, x_41, x_47);
x_50 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48;
lean_inc(x_14);
x_51 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_51, 0, x_14);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34;
lean_inc(x_51);
lean_inc(x_36);
lean_inc(x_14);
x_53 = l_Lean_Syntax_node3(x_14, x_52, x_36, x_49, x_51);
x_54 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49;
lean_inc(x_14);
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_14);
lean_ctor_set(x_55, 1, x_54);
x_56 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52;
x_57 = l_Lean_addMacroScope(x_16, x_56, x_15);
x_58 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51;
x_59 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54;
lean_inc(x_14);
x_60 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_60, 0, x_14);
lean_ctor_set(x_60, 1, x_58);
lean_ctor_set(x_60, 2, x_57);
lean_ctor_set(x_60, 3, x_59);
x_61 = l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37;
lean_inc(x_60);
lean_inc(x_55);
lean_inc(x_14);
x_62 = l_Lean_Syntax_node3(x_14, x_61, x_53, x_55, x_60);
lean_inc(x_14);
x_63 = l_Lean_Syntax_node1(x_14, x_46, x_9);
lean_inc(x_14);
x_64 = l_Lean_Syntax_node2(x_14, x_48, x_62, x_63);
lean_inc(x_51);
lean_inc(x_36);
lean_inc(x_14);
x_65 = l_Lean_Syntax_node3(x_14, x_52, x_36, x_64, x_51);
lean_inc_n(x_34, 2);
lean_inc(x_14);
x_66 = l_Lean_Syntax_node2(x_14, x_46, x_34, x_34);
lean_inc(x_14);
x_67 = l_Lean_Syntax_node2(x_14, x_48, x_41, x_66);
lean_inc(x_51);
lean_inc(x_36);
lean_inc(x_14);
x_68 = l_Lean_Syntax_node3(x_14, x_52, x_36, x_67, x_51);
lean_inc(x_14);
x_69 = l_Lean_Syntax_node3(x_14, x_61, x_68, x_55, x_60);
lean_inc(x_14);
x_70 = l_Lean_Syntax_node1(x_14, x_46, x_11);
lean_inc(x_14);
x_71 = l_Lean_Syntax_node2(x_14, x_48, x_69, x_70);
lean_inc(x_14);
x_72 = l_Lean_Syntax_node3(x_14, x_52, x_36, x_71, x_51);
lean_inc(x_34);
lean_inc(x_14);
x_73 = l_Lean_Syntax_node5(x_14, x_46, x_30, x_34, x_34, x_65, x_72);
x_74 = l_Lean_Syntax_node2(x_14, x_48, x_25, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_3);
return x_75;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_GramSchmidtOrtho(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_PosDef(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_LDL(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_GramSchmidtOrtho(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_PosDef(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__1);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__2);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__3);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__4);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__5);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__6);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__7);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__8);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__9);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__10);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__11);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__12);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__13);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__14);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__15);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__16);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__17);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__18);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__19);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__20);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__21);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__22);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__23);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__24);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__25);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__26);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__27);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__28);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__29);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__30);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31 = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32____closed__31);
l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32_ = _init_l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32_();
lean_mark_persistent(l_term_u27ea___x2c___u27eb_u2091____x40_Mathlib_LinearAlgebra_Matrix_LDL___hyg_32_);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__1);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__2);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__3);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__4);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__5);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__6);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__7);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__8);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__9);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__10);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__11);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__12);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__13);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__14);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__15);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__16);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__17);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__18);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__19);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__20);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__21);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__22);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__23);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__24);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__25);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__26);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__27);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__28);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__29);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__30);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__31);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__32);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__33);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__34);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__35);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__36);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__37);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__38);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__39);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__40);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__41);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__42);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__43);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__44);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__45);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__46);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__47);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__48);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__49);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__50);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__51);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__52);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__53);
l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54 = _init_l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54();
lean_mark_persistent(l___aux__Mathlib__LinearAlgebra__Matrix__LDL______macroRules__term_u27ea___x2c___u27eb_u2091__1___closed__54);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
