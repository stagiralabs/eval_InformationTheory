// Lean compiler output
// Module: Mathlib.Algebra.Lie.Rank
// Imports: Init Mathlib.Algebra.Lie.EngelSubalgebra Mathlib.Algebra.Lie.OfAssociative Mathlib.Algebra.Module.LinearMap.Polynomial Mathlib.LinearAlgebra.Eigenspace.Zero
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
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1;
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18;
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15;
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463_;
static lean_object* l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13;
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20;
static lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41;
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieModule", 9, 9);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termφ", 6, 5);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Algebra", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lie", 3, 3);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Rank", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16;
x_2 = lean_unsigned_to_nat(463u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("φ", 2, 1);
return x_1;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463_() {
_start:
{
lean_object* x_1; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20;
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1;
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2;
x_3 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3;
x_4 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieHom.toLinearMap", 18, 18);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieHom", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toLinearMap", 11, 11);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8;
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("paren", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1;
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2;
x_3 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3;
x_4 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieModule.toEnd", 15, 15);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toEnd", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1;
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22;
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("R", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34;
x_2 = lean_unsigned_to_nat(10u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("L", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46;
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("M", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57;
x_2 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58;
x_2 = lean_unsigned_to_nat(13u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17;
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
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
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
x_13 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10;
lean_inc(x_11);
lean_inc(x_12);
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7;
x_16 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12;
lean_inc(x_10);
x_17 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_16);
x_18 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17;
lean_inc(x_10);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21;
lean_inc(x_11);
lean_inc(x_12);
x_21 = l_Lean_addMacroScope(x_12, x_20, x_11);
x_22 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19;
x_23 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25;
lean_inc(x_10);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_10);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28;
lean_inc(x_11);
lean_inc(x_12);
x_26 = l_Lean_addMacroScope(x_12, x_25, x_11);
x_27 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27;
x_28 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37;
lean_inc(x_10);
x_29 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_28);
x_30 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40;
lean_inc(x_11);
lean_inc(x_12);
x_31 = l_Lean_addMacroScope(x_12, x_30, x_11);
x_32 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39;
x_33 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49;
lean_inc(x_10);
x_34 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_34, 0, x_10);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_34, 2, x_31);
lean_ctor_set(x_34, 3, x_33);
x_35 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52;
x_36 = l_Lean_addMacroScope(x_12, x_35, x_11);
x_37 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51;
x_38 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61;
lean_inc(x_10);
x_39 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_39, 0, x_10);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_39, 2, x_36);
lean_ctor_set(x_39, 3, x_38);
x_40 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14;
lean_inc(x_10);
x_41 = l_Lean_Syntax_node3(x_10, x_40, x_29, x_34, x_39);
x_42 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5;
lean_inc(x_10);
x_43 = l_Lean_Syntax_node2(x_10, x_42, x_24, x_41);
x_44 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62;
lean_inc(x_10);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_10);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16;
lean_inc(x_10);
x_47 = l_Lean_Syntax_node3(x_10, x_46, x_19, x_43, x_45);
lean_inc(x_10);
x_48 = l_Lean_Syntax_node1(x_10, x_40, x_47);
x_49 = l_Lean_Syntax_node2(x_10, x_42, x_17, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
lean_inc(x_15);
x_16 = l_Lean_Syntax_matchesNull(x_15, x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Syntax_getArg(x_15, x_8);
lean_dec(x_15);
lean_inc(x_19);
x_20 = l_Lean_Syntax_isOfKind(x_19, x_4);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_9);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = l_Lean_Syntax_getArg(x_19, x_8);
x_24 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21;
x_25 = l_Lean_Syntax_matchesIdent(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_19);
lean_dec(x_9);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_Lean_Syntax_getArg(x_19, x_14);
lean_dec(x_19);
x_29 = lean_unsigned_to_nat(3u);
lean_inc(x_28);
x_30 = l_Lean_Syntax_matchesNull(x_28, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_28);
lean_dec(x_9);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = l_Lean_Syntax_getArg(x_28, x_8);
x_34 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28;
x_35 = l_Lean_Syntax_matchesIdent(x_33, x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_28);
lean_dec(x_9);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = l_Lean_Syntax_getArg(x_28, x_14);
x_39 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40;
x_40 = l_Lean_Syntax_matchesIdent(x_38, x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_28);
lean_dec(x_9);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_3);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_unsigned_to_nat(2u);
x_44 = l_Lean_Syntax_getArg(x_28, x_43);
lean_dec(x_28);
x_45 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52;
x_46 = l_Lean_Syntax_matchesIdent(x_44, x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_50 = 0;
x_51 = l_Lean_SourceInfo_fromRef(x_49, x_50);
lean_dec(x_49);
x_52 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18;
lean_inc(x_51);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17;
x_55 = l_Lean_Syntax_node1(x_51, x_54, x_53);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_EngelSubalgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_OfAssociative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_LinearMap_Polynomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Eigenspace_Zero(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Rank(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_EngelSubalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_OfAssociative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_LinearMap_Polynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Eigenspace_Zero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__1);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__2);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__3);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__4);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__5);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__6);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__7);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__8);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__9);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__10);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__11);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__12);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__13);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__14);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__15);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__16);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__17);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__18);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__19);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20 = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463____closed__20);
l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463_ = _init_l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463_();
lean_mark_persistent(l_LieModule_term_u03c6____x40_Mathlib_Algebra_Lie_Rank___hyg_463_);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__1);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__2);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__3);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__4);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__5);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__6);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__7);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__8);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__9);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__10);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__11);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__12);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__13);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__14);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__15);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__16);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__17);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__18);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__19);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__20);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__21);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__22);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__23);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__24);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__25);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__26);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__27);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__28);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__29);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__30);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__31);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__32);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__33);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__34);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__35);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__36);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__37);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__38);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__39);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__40);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__41);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__42);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__43);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__44);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__45);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__46);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__47);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__48);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__49);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__50);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__51);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__52);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__53);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__54);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__55);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__56);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__57);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__58);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__59);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__60);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__61);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______macroRules__LieModule__term_u03c6__1___closed__62);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__1);
l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2 = _init_l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2();
lean_mark_persistent(l_LieModule___aux__Mathlib__Algebra__Lie__Rank______unexpand__LieHom__toLinearMap__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
